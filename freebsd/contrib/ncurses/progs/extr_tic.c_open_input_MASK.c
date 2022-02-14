
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char const* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int * FUNC_1 (int *,char const*,char*) ;
 int VAR_7 ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char*,char const*,...) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_5 (char const*,char*) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static FILE *
FUNC_7(const char *VAR_10, char *VAR_11)
{
    FILE *VAR_12;
    struct stat VAR_13;
    int VAR_14;

    if (!FUNC_5(VAR_10, "-")) {
 VAR_12 = FUNC_1(VAR_9, VAR_1, VAR_11);
    } else if (FUNC_4(VAR_10, &VAR_13) < 0) {
 FUNC_3(VAR_8, "%s: %s %s\n", VAR_6, VAR_10, FUNC_6(VAR_7));
 FUNC_0(VAR_0);
    } else if ((VAR_14 = (VAR_13.st_mode & VAR_4)) == VAR_3
        || (VAR_14 != VAR_5 && VAR_14 != VAR_2)) {
 FUNC_3(VAR_8, "%s: %s is not a file\n", VAR_6, VAR_10);
 FUNC_0(VAR_0);
    } else {
 VAR_12 = FUNC_2(VAR_10, "r");

 if (VAR_12 == 0) {
     FUNC_3(VAR_8, "%s: Can't open %s\n", VAR_6, VAR_10);
     FUNC_0(VAR_0);
 }
 if (VAR_14 != VAR_5) {
     if (VAR_11 != 0) {
  FILE *VAR_15 = FUNC_1(VAR_12, VAR_10, VAR_11);
  VAR_12 = VAR_15;
     } else {
  FUNC_3(VAR_8, "%s: %s is not a file\n", VAR_6, VAR_10);
  FUNC_0(VAR_0);
     }
 }
    }
    return VAR_12;
}
