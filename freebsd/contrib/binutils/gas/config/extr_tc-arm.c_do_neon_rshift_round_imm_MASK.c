
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {unsigned int size; scalar_t__ type; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; scalar_t__ present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_8 ;
 struct neon_type_el FUNC_3 (int,int,int ,int) ;
 int FUNC_4 (int ,int,int ,struct neon_type_el,unsigned int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  enum neon_shape VAR_9 = FUNC_6 (VAR_0, VAR_2, VAR_1);
  struct neon_type_el VAR_10 = FUNC_3 (2, VAR_9, VAR_4, VAR_6 | VAR_5);
  int VAR_11 = VAR_8.operands[2].imm;


  if (VAR_11 == 0)
    {
      VAR_8.operands[2].present = 0;
      FUNC_2 ();
      return;
    }

  FUNC_1 (VAR_11 < 1 || (unsigned)VAR_11 > VAR_10.size,
              FUNC_0("immediate out of range for shift"));
  FUNC_4 (VAR_7, VAR_10.type == VAR_3, FUNC_5 (VAR_9), VAR_10,
                  VAR_10.size - VAR_11);
}
