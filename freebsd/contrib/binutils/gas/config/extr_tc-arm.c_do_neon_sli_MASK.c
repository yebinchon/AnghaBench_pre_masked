
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {unsigned int size; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_2__ VAR_10 ;
 struct neon_type_el FUNC_2 (int,int,int ,int) ;
 int FUNC_3 (int ,int ,int ,struct neon_type_el,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6 (void)
{
  enum neon_shape VAR_11 = FUNC_5 (VAR_1, VAR_3, VAR_2);
  struct neon_type_el VAR_12 = FUNC_2 (2, VAR_11,
    VAR_8, VAR_7 | VAR_4 | VAR_5 | VAR_6 | VAR_9);
  int VAR_13 = VAR_10.operands[2].imm;
  FUNC_1 (VAR_13 < 0 || (unsigned)VAR_13 >= VAR_12.size,
              FUNC_0("immediate out of range for insert"));
  FUNC_3 (VAR_0, 0, FUNC_4 (VAR_11), VAR_12, VAR_13);
}
