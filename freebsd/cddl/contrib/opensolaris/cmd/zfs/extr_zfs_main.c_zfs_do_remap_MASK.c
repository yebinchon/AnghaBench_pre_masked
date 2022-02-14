
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*) ;

__attribute__((used)) static int
FUNC_5(int VAR_4, char **VAR_5)
{
 const char *VAR_6;
 int VAR_7 = 0;
 int VAR_8;


 while ((VAR_8 = FUNC_1(VAR_4, VAR_5, "")) != -1) {
  switch (VAR_8) {
  case '?':
   (void) FUNC_0(VAR_3,
       FUNC_2("invalid option '%c'\n"), VAR_2);
   FUNC_3(VAR_0);
  }
 }

 if (VAR_4 != 2) {
  (void) FUNC_0(VAR_3, "%s", FUNC_2("wrong number of arguments\n"));
  FUNC_3(VAR_0);
 }

 VAR_6 = VAR_5[1];
 VAR_7 = FUNC_4(VAR_1, VAR_6);

 return (VAR_7);
}
