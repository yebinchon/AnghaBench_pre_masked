
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int FILE ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int,char*,char const*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char const*,char*) ;
 scalar_t__ FUNC_10 (int,struct stat*) ;
 int FUNC_11 (int,char**,char*) ;
 int FUNC_12 (char const*,char const*,int *) ;
 int FUNC_13 (char const*,char const*,int) ;
 int FUNC_14 (char const*,int ) ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_15 (int ,int ) ;
 int VAR_10 ;
 int FUNC_16 () ;

int
FUNC_17(int VAR_11, char *VAR_12[])
{
 const char *VAR_13, *VAR_14, *VAR_15;
 FILE *VAR_16, *VAR_17;
 struct stat VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_15 = VAR_0;
 VAR_14 = ((void*)0);
 VAR_13 = ((void*)0);
 while ((VAR_20 = FUNC_11(VAR_11, VAR_12, "c:dp:t:")) != -1) {
  switch (VAR_20) {
  case 'c':
   VAR_15 = VAR_8;
   break;

  case 'd':
   VAR_7++;
   break;

  case 't':
   if (VAR_14 != ((void*)0) || VAR_13 != ((void*)0))
    FUNC_16();
   VAR_14 = VAR_8;
   break;

  case 'p':
   if (VAR_13 != ((void*)0) || VAR_14 != ((void*)0))
    FUNC_16();
   VAR_13 = VAR_8;
   break;

  default:
   FUNC_16();
  }
 }

 VAR_11 -= VAR_9;
 VAR_12 += VAR_9;

 if (VAR_11 != 0)
  FUNC_16();





 if (VAR_13 == ((void*)0) && VAR_14 == ((void*)0))
  VAR_13 = VAR_1;

 if (VAR_13 != ((void*)0)) {
  VAR_19 = FUNC_14(VAR_13, VAR_2);
  if (VAR_19 < 0)
   FUNC_5(-1, "open:%s", VAR_13);
  if (FUNC_10(VAR_19, &VAR_18) < 0)
   FUNC_5(-1, "stat: %s", VAR_13);
  if (!FUNC_0(VAR_18.st_mode))
   FUNC_6(-1, "fstat: %s not device", VAR_13);
 } else {
  VAR_16 = FUNC_9(VAR_14, "r");
  if (VAR_16 == ((void*)0))
   FUNC_5(-1, "%s", VAR_14);
 }

 VAR_17 = FUNC_9(VAR_15, "r");
 if (VAR_17 == ((void*)0))
  FUNC_5(-1, "%s", VAR_15);

 FUNC_3();
 if (FUNC_1(VAR_15, VAR_17) < 0)
  FUNC_7(-1);
 FUNC_8(VAR_17);

 if (!VAR_7) {
  if (FUNC_4(0, 0) < 0)
   FUNC_5(-1, "daemon");
 }

 FUNC_15(VAR_3, VAR_10);
 FUNC_15(VAR_4, VAR_10);
 FUNC_15(VAR_5, VAR_10);
 FUNC_15(VAR_6, VAR_10);

 if (VAR_13 != ((void*)0))
  FUNC_13(VAR_15, VAR_13, VAR_19);
 else
  FUNC_12(VAR_15, VAR_14, VAR_16);

 FUNC_2();
 return (0);
}
