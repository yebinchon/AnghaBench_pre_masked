
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct errmsg {int e_code; char const* e_msg; } ;
typedef int ebuf ;


 struct errmsg* VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;

const char *
FUNC_1(int VAR_1)
{
 static char VAR_2[40];
 struct errmsg *VAR_3;

 if (VAR_1 == 0)
  return ("success");
 for (VAR_3 = VAR_0; VAR_3->e_code >= 0; VAR_3++)
  if (VAR_3->e_code == VAR_1)
   return (VAR_3->e_msg);
 FUNC_0(VAR_2, sizeof(VAR_2), "error %d", VAR_1);
 return (VAR_2);
}
