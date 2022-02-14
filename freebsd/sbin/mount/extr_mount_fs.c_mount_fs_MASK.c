
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int dummy; } ;
typedef int fstype ;
typedef int errmsg ;


 int VAR_0 ;
 int FUNC_0 (struct iovec**,int*,char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int*,int ) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (char*,int ,int) ;
 int VAR_2 ;
 int FUNC_5 (struct iovec*,int,int) ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*,...) ;

int
FUNC_11(const char *VAR_6, int VAR_7, char *VAR_8[])
{
 struct iovec *VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 char *VAR_13, *VAR_14, VAR_15[VAR_0];
 char VAR_16[32];
 char VAR_17[255];
 char *VAR_18, *VAR_19;

 FUNC_8(VAR_16, VAR_6, sizeof(VAR_16));
 FUNC_4(VAR_17, 0, sizeof(VAR_17));

 VAR_1 = 1;
 VAR_9 = ((void*)0);
 VAR_10 = 0;

 VAR_4 = VAR_5 = 1;
 while ((VAR_12 = FUNC_3(VAR_7, VAR_8, "o:")) != -1) {
  switch(VAR_12) {
  case 'o':
   FUNC_2(VAR_3, VAR_2, &VAR_11, 0);
   VAR_18 = FUNC_7(VAR_3, '=');
   VAR_19 = ((void*)0);
   if (VAR_18 != ((void*)0)) {
    *VAR_18 = '\0';
    VAR_19 = VAR_18 + 1;
   }
   FUNC_0(&VAR_9, &VAR_10, VAR_3, VAR_19, (size_t)-1);
   break;
  case '?':
  default:
   FUNC_9();
  }
 }

 VAR_7 -= VAR_4;
 VAR_8 += VAR_4;
 if (VAR_7 != 2)
  FUNC_9();

 VAR_13 = VAR_8[0];
 VAR_14 = VAR_8[1];

 if (FUNC_1(VAR_14, VAR_15) != 0) {
  FUNC_10("%s", VAR_15);
  return (1);
 }
 (void)FUNC_6(VAR_13, VAR_13);

 FUNC_0(&VAR_9, &VAR_10, "fstype", VAR_16, (size_t)-1);
 FUNC_0(&VAR_9, &VAR_10, "fspath", VAR_15, (size_t)-1);
 FUNC_0(&VAR_9, &VAR_10, "from", VAR_13, (size_t)-1);
 FUNC_0(&VAR_9, &VAR_10, "errmsg", VAR_17, sizeof(VAR_17));

 if (FUNC_5(VAR_9, VAR_10, VAR_11) == -1) {
  if (*VAR_17 != '\0')
   FUNC_10("%s: %s", VAR_13, VAR_17);
  else
   FUNC_10("%s", VAR_13);
  return (1);
 }
 return (0);
}
