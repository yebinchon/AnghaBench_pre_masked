
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knlist {int kl_autodestroy; } ;


 int FUNC_0 (struct knlist*) ;
 int VAR_0 ;
 int FUNC_1 (struct knlist*,int ) ;
 int FUNC_2 (struct knlist*) ;
 scalar_t__ FUNC_3 (struct knlist*) ;

void
FUNC_4(struct knlist *VAR_1)
{

 FUNC_0(VAR_1);
 VAR_1->kl_autodestroy = 1;
 if (FUNC_3(VAR_1)) {
  FUNC_2(VAR_1);
  FUNC_1(VAR_1, VAR_0);
 }
}
