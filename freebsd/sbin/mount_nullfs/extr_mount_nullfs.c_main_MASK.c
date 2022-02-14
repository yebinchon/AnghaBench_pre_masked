
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int dummy; } ;
typedef int errmsg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iovec**,int*,char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int,char*,char*,...) ;
 int FUNC_3 (int,char*,char*,char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char**,char*) ;
 scalar_t__ FUNC_7 (struct iovec*,int,int ) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 () ;

int
FUNC_12(int VAR_4, char *VAR_5[])
{
 struct iovec *VAR_6;
 char *VAR_7, *VAR_8;
 char VAR_9[VAR_1];
 char VAR_10[VAR_1];
 char VAR_11[255];
 int VAR_12, VAR_13;
 char VAR_14[] = "nullfs";

 VAR_6 = ((void*)0);
 VAR_13 = 0;
 VAR_11[0] = '\0';
 while ((VAR_12 = FUNC_6(VAR_4, VAR_5, "o:")) != -1)
  switch(VAR_12) {
  case 'o':
   VAR_8 = FUNC_9("");
   VAR_7 = FUNC_8(VAR_2, '=');
   if (VAR_7 != ((void*)0)) {
    FUNC_5(VAR_8);
    *VAR_7 = '\0';
    VAR_8 = VAR_7 + 1;
   }
   FUNC_0(&VAR_6, &VAR_13, VAR_2, VAR_8, (size_t)-1);
   break;
  case '?':
  default:
   FUNC_11();
  }
 VAR_4 -= VAR_3;
 VAR_5 += VAR_3;

 if (VAR_4 != 2)
  FUNC_11();


 if (FUNC_1(VAR_5[0], VAR_10) != 0)
  FUNC_2(VAR_0, "%s", VAR_10);
 if (FUNC_1(VAR_5[1], VAR_9) != 0)
  FUNC_2(VAR_0, "%s", VAR_9);

 if (FUNC_10(VAR_10, VAR_9) || FUNC_10(VAR_9, VAR_10))
  FUNC_3(VAR_0, "%s (%s) and %s are not distinct paths",
      VAR_5[0], VAR_10, VAR_5[1]);

 FUNC_0(&VAR_6, &VAR_13, "fstype", VAR_14, (size_t)-1);
 FUNC_0(&VAR_6, &VAR_13, "fspath", VAR_9, (size_t)-1);
 FUNC_0(&VAR_6, &VAR_13, "target", VAR_10, (size_t)-1);
 FUNC_0(&VAR_6, &VAR_13, "errmsg", VAR_11, sizeof(VAR_11));
 if (FUNC_7(VAR_6, VAR_13, 0) < 0) {
  if (VAR_11[0] != 0)
   FUNC_2(1, "%s: %s", VAR_9, VAR_11);
  else
   FUNC_2(1, "%s", VAR_9);
 }
 FUNC_4(0);
}
