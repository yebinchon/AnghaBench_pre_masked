
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {scalar_t__ (* guard_mask_bit ) () ;} ;
struct TYPE_4__ {TYPE_1__ cxx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 () ;
 TYPE_2__ VAR_4 ;

tree
FUNC_6 (tree VAR_5)
{
  tree VAR_6;


  VAR_5 = FUNC_3 (VAR_5);


  if (VAR_4.cxx.guard_mask_bit ())
    {
      VAR_6 = VAR_2;
      if (!FUNC_4 (FUNC_0 (VAR_6), FUNC_0 (VAR_5)))
 VAR_6 = FUNC_1 (FUNC_0 (VAR_5), VAR_6);
 VAR_5 = FUNC_2 (VAR_0, VAR_5, VAR_6);
    }

  VAR_6 = VAR_3;
  if (!FUNC_4 (FUNC_0 (VAR_6), FUNC_0 (VAR_5)))
    VAR_6 = FUNC_1 (FUNC_0 (VAR_5), VAR_6);
  return FUNC_2 (VAR_1, VAR_5, VAR_6);
}
