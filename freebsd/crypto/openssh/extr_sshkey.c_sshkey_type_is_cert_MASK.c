
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keytype {int type; int cert; } ;


 struct keytype* VAR_0 ;

int
FUNC_0(int VAR_1)
{
 const struct keytype *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->type != -1; VAR_2++) {
  if (VAR_2->type == VAR_1)
   return VAR_2->cert;
 }
 return 0;
}
