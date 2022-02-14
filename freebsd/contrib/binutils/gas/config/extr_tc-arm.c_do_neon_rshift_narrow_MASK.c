
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {int size; } ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; scalar_t__ present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_9 ;
 struct neon_type_el FUNC_3 (int,int ,int,int) ;
 int FUNC_4 (int ,int ,int ,struct neon_type_el,int) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  struct neon_type_el VAR_10 = FUNC_3 (2, VAR_1,
    VAR_2 | VAR_3, VAR_4 | VAR_5 | VAR_6 | VAR_7);
  int VAR_11 = VAR_9.operands[2].imm;


  VAR_10.size /= 2;



  if (VAR_11 == 0)
    {
      VAR_9.operands[2].present = 0;
      VAR_9.instruction = VAR_8;
      FUNC_2 ();
      return;
    }

  FUNC_1 (VAR_11 < 1 || (unsigned)VAR_11 > VAR_10.size,
              FUNC_0("immediate out of range for narrowing operation"));
  FUNC_4 (VAR_0, 0, 0, VAR_10, VAR_10.size - VAR_11);
}
