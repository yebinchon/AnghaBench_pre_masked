
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(int VAR_2, char **VAR_3)
{
 int VAR_4;

 while ((VAR_4 = FUNC_0(VAR_2, VAR_3, "p:")) != -1) {
  switch (VAR_4) {
  case 'p':
   VAR_1 = VAR_0;
   break;
  default:
   FUNC_1(VAR_3[0]);
  }
 }
}
