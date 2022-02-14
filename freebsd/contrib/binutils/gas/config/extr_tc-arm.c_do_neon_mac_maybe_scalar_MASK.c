
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {int dummy; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {scalar_t__ isscalar; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 TYPE_2__ VAR_15 ;
 struct neon_type_el FUNC_1 (int,int,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct neon_type_el,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8 (void)
{
  if (FUNC_6 (3, VAR_14) == VAR_13)
    return;

  if (FUNC_7 (VAR_2 | VAR_1) == VAR_0)
    return;

  if (VAR_15.operands[2].isscalar)
    {
      enum neon_shape VAR_16 = FUNC_5 (VAR_3, VAR_5, VAR_4);
      struct neon_type_el VAR_17 = FUNC_1 (3, VAR_16,
        VAR_7, VAR_7, VAR_9 | VAR_10 | VAR_8 | VAR_12);
      VAR_15.instruction = FUNC_0 (VAR_15.instruction);
      FUNC_3 (VAR_17, FUNC_4 (VAR_16));
    }
  else
    {


      FUNC_2 (VAR_6, VAR_11, 0);
    }
}
