
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {scalar_t__ type; int size; } ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {scalar_t__ isscalar; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 TYPE_2__ VAR_7 ;
 struct neon_type_el FUNC_3 (int,int ,int,int,int) ;
 int FUNC_4 (struct neon_type_el,int ) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  if (VAR_7.operands[2].isscalar)
    FUNC_2 ();
  else
    {
      struct neon_type_el VAR_8 = FUNC_3 (3, VAR_0,
        VAR_3 | VAR_2, VAR_3, VAR_6 | VAR_5 | VAR_4);
      if (VAR_8.type == VAR_1)
        VAR_7.instruction = FUNC_1 (VAR_7.instruction);
      else
        VAR_7.instruction = FUNC_0 (VAR_7.instruction);


      FUNC_4 (VAR_8, VAR_8.size);
    }
}
