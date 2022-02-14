
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vbase; } ;
typedef TYPE_1__ vtbl_init_data ;
typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (tree VAR_0, vtbl_init_data* VAR_1)
{
  int VAR_2;
  tree VAR_3;
  tree VAR_4;





  if (FUNC_1 (VAR_0) && VAR_1->vbase != VAR_0)
    return;


  VAR_3 = FUNC_3 (VAR_0);
  if (VAR_3)
    FUNC_4 (VAR_3, VAR_1);


  FUNC_2 (VAR_0, VAR_1);


  for (VAR_2 = 0; FUNC_0 (VAR_0, VAR_2, VAR_4); ++VAR_2)
    if (VAR_4 != VAR_3)
      FUNC_4 (VAR_4, VAR_1);
}
