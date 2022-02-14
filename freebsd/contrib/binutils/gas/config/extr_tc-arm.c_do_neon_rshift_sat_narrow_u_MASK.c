
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
 int VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_10 ;
 struct neon_type_el FUNC_3 (int,int ,int,int) ;
 int FUNC_4 (int ,int,int ,struct neon_type_el,int) ;

__attribute__((used)) static void
FUNC_5 (void)
{


  struct neon_type_el VAR_11 = FUNC_3 (2, VAR_0,
    VAR_1 | VAR_2 | VAR_8, VAR_5 | VAR_6 | VAR_7 | VAR_3);
  int VAR_12 = VAR_10.operands[2].imm;


  VAR_11.size /= 2;



  if (VAR_12 == 0)
    {
      VAR_10.operands[2].present = 0;
      VAR_10.instruction = VAR_4;
      FUNC_2 ();
      return;
    }

  FUNC_1 (VAR_12 < 1 || (unsigned)VAR_12 > VAR_11.size,
              FUNC_0("immediate out of range"));



  FUNC_4 (VAR_9, 1, 0, VAR_11, VAR_11.size - VAR_12);
}
