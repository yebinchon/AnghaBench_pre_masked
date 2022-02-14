
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {int (* guard_mask_bit ) () ;} ;
struct TYPE_4__ {TYPE_1__ cxx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 () ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static tree
FUNC_4 (tree VAR_5)
{
  if (!VAR_4.cxx.guard_mask_bit ())
    {


      VAR_5 = FUNC_1 (VAR_0,
        FUNC_2 (FUNC_0 (VAR_5)),
        VAR_5);
      VAR_5 = FUNC_1 (VAR_2,
        FUNC_2 (VAR_3),
        VAR_5);
      VAR_5 = FUNC_1 (VAR_1, VAR_3, VAR_5);
    }

  return VAR_5;
}
