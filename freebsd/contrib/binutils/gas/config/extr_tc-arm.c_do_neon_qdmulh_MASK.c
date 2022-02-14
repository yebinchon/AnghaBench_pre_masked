
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {int size; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {scalar_t__ isscalar; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 struct neon_type_el FUNC_2 (int,int,int ,int ,int) ;
 int FUNC_3 (struct neon_type_el,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  if (VAR_9.operands[2].isscalar)
    {
      enum neon_shape VAR_10 = FUNC_5 (VAR_1, VAR_4, VAR_2);
      struct neon_type_el VAR_11 = FUNC_2 (3, VAR_10,
        VAR_5, VAR_5, VAR_7 | VAR_8 | VAR_6);
      VAR_9.instruction = FUNC_1 (VAR_9.instruction);
      FUNC_3 (VAR_11, FUNC_4 (VAR_10));
    }
  else
    {
      enum neon_shape VAR_12 = FUNC_5 (VAR_0, VAR_3, VAR_2);
      struct neon_type_el VAR_13 = FUNC_2 (3, VAR_12,
        VAR_5, VAR_5, VAR_7 | VAR_8 | VAR_6);
      VAR_9.instruction = FUNC_0 (VAR_9.instruction);

      FUNC_6 (FUNC_4 (VAR_12), 0, VAR_13.size);
    }
}
