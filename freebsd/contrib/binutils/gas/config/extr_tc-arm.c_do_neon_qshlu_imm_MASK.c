
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {unsigned int size; scalar_t__ type; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_2__ VAR_12 ;
 struct neon_type_el FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int ,int ,int ,struct neon_type_el,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6 (void)
{
  enum neon_shape VAR_13 = FUNC_5 (VAR_1, VAR_3, VAR_2);
  struct neon_type_el VAR_14 = FUNC_2 (2, VAR_13,
    VAR_5 | VAR_11, VAR_10 | VAR_7 | VAR_8 | VAR_9 | VAR_6);
  int VAR_15 = VAR_12.operands[2].imm;
  FUNC_1 (VAR_15 < 0 || (unsigned)VAR_15 >= VAR_14.size,
              FUNC_0("immediate out of range for shift"));



  VAR_12.instruction |= (VAR_14.type == VAR_4) << 8;

  FUNC_3 (VAR_0, 0, FUNC_4 (VAR_13), VAR_14, VAR_15);
}
