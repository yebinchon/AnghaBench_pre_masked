
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int section ;
struct TYPE_3__ {int * (* select_section ) (int ,int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ asm_out; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int *,int ) ;
 int * FUNC_4 (int ,int ,int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static section *
FUNC_5 (tree VAR_1)
{
  if (FUNC_0 (VAR_1))
    return FUNC_3 (VAR_1, ((void*)0), FUNC_1 (VAR_1));
  else
    return VAR_0.asm_out.select_section (VAR_1,
        FUNC_1 (VAR_1),
        FUNC_2 (VAR_1));
}
