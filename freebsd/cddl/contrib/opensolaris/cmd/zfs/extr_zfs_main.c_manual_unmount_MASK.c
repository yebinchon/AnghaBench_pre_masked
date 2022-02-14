
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int,int ) ;

__attribute__((used)) static int
FUNC_4(int VAR_6, char **VAR_7)
{
 int VAR_8 = 0;
 int VAR_9;


 while ((VAR_9 = FUNC_1(VAR_6, VAR_7, "f")) != -1) {
  switch (VAR_9) {
  case 'f':
   VAR_8 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_5, FUNC_2("invalid option '%c'\n"),
       VAR_4);
   (void) FUNC_0(VAR_5, "%s", FUNC_2("usage: unmount [-f] "
       "<path>\n"));
   return (2);
  }
 }

 VAR_6 -= VAR_3;
 VAR_7 += VAR_3;


 if (VAR_6 != 1) {
  if (VAR_6 == 0)
   (void) FUNC_0(VAR_5, "%s", FUNC_2("missing path "
       "argument\n"));
  else
   (void) FUNC_0(VAR_5, "%s", FUNC_2("too many arguments\n"));
  (void) FUNC_0(VAR_5, "%s", FUNC_2("usage: unmount [-f] <path>\n"));
  return (2);
 }

 return (FUNC_3(VAR_2, VAR_7[0], VAR_8, VAR_0));
}
