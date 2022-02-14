
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
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_2__ VAR_6 ;
 struct neon_type_el FUNC_2 (int,int ,int,int,unsigned int) ;
 int FUNC_3 (struct neon_type_el,int ) ;
 int FUNC_4 (struct neon_type_el,int) ;

__attribute__((used)) static void
FUNC_5 (unsigned VAR_7, unsigned VAR_8)
{
  if (VAR_6.operands[2].isscalar)
    {
      struct neon_type_el VAR_9 = FUNC_2 (3, VAR_1,
        VAR_4 | VAR_3, VAR_4, VAR_7 | VAR_5);
      VAR_6.instruction = FUNC_1 (VAR_6.instruction);
      FUNC_4 (VAR_9, VAR_9.type == VAR_2);
    }
  else
    {
      struct neon_type_el VAR_10 = FUNC_2 (3, VAR_0,
        VAR_4 | VAR_3, VAR_4, VAR_8 | VAR_5);
      VAR_6.instruction = FUNC_0 (VAR_6.instruction);
      FUNC_3 (VAR_10, VAR_10.size);
    }
}
