
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {scalar_t__ type; int size; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {TYPE_1__* operands; } ;
struct TYPE_3__ {unsigned int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 struct neon_type_el FUNC_0 (int,int,int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  enum neon_shape VAR_8 = FUNC_2 (VAR_0, VAR_2, VAR_1);
  struct neon_type_el VAR_9 = FUNC_0 (3, VAR_8,
    VAR_4, VAR_4, VAR_6 | VAR_5);
  unsigned int VAR_10;

  VAR_10 = VAR_7.operands[2].reg;
  VAR_7.operands[2].reg = VAR_7.operands[1].reg;
  VAR_7.operands[1].reg = VAR_10;
  FUNC_3 (FUNC_1 (VAR_8), VAR_9.type == VAR_3, VAR_9.size);
}
