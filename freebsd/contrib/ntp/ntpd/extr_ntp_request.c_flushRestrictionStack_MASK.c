
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* link; } ;
typedef TYPE_1__ RestrictStackT ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(
 RestrictStackT **VAR_0
 )
{
 RestrictStackT *VAR_1;

 while (((void*)0) != (VAR_1 = *VAR_0)) {
  *VAR_0 = VAR_1->link;
  FUNC_0(VAR_1);
 }
}
