
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int inner_scope; } ;
typedef TYPE_1__ scope_t ;


 TYPE_1__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(scope_t *VAR_1)
{
 scope_t *VAR_2;




 FUNC_2(VAR_1, 0);




 VAR_2 = FUNC_0(&VAR_1->inner_scope);

 while (VAR_2 != ((void*)0)) {

  FUNC_3(VAR_2);

  VAR_2 = FUNC_1(VAR_2, VAR_0);
 }




 FUNC_2(VAR_1, 1);
}
