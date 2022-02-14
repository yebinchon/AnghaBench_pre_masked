
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_uid; int st_mode; } ;
struct passwd {int dummy; } ;
typedef int Options ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,struct stat*) ;
 int FUNC_7 (char**,size_t*,int *) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (int *,struct passwd*,char const*,char const*,char*,char const*,int,int*,int,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(const char *VAR_3, struct passwd *VAR_4,
    const char *VAR_5, const char *VAR_6, Options *VAR_7,
    int VAR_8, int *VAR_9, int VAR_10)
{
 FILE *VAR_11;
 char *VAR_12 = ((void*)0);
 size_t VAR_13 = 0;
 int VAR_14;
 int VAR_15 = 0;

 if (VAR_10 < 0 || VAR_10 > VAR_0)
  FUNC_1("Too many recursive configuration includes");

 if ((VAR_11 = FUNC_4(VAR_3, "r")) == ((void*)0))
  return 0;

 if (VAR_8 & VAR_1) {
  struct stat VAR_16;

  if (FUNC_6(FUNC_3(VAR_11), &VAR_16) == -1)
   FUNC_1("fstat %s: %s", VAR_3, FUNC_10(VAR_2));
  if (((VAR_16.st_uid != 0 && VAR_16.st_uid != FUNC_8()) ||
      (VAR_16.st_mode & 022) != 0))
   FUNC_1("Bad owner or permissions on %s", VAR_3);
 }

 FUNC_0("Reading configuration data %.200s", VAR_3);





 VAR_14 = 0;
 while (FUNC_7(&VAR_12, &VAR_13, VAR_11) != -1) {

  VAR_14++;
  if (FUNC_9(VAR_7, VAR_4, VAR_5, VAR_6,
      VAR_12, VAR_3, VAR_14, VAR_9, VAR_8, VAR_10) != 0)
   VAR_15++;
 }
 FUNC_5(VAR_12);
 FUNC_2(VAR_11);
 if (VAR_15 > 0)
  FUNC_1("%s: terminating, %d bad configuration options",
      VAR_3, VAR_15);
 return 1;
}
