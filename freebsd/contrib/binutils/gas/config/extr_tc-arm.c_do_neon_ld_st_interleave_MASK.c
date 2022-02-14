
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {scalar_t__ type; int size; } ;
struct TYPE_4__ {unsigned int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; scalar_t__ immisalign; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_6 ;
 struct neon_type_el FUNC_4 (int,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6 (void)
{
  struct neon_type_el VAR_7 = FUNC_4 (1, VAR_0,
                                            VAR_5 | VAR_2 | VAR_3 | VAR_4);
  unsigned VAR_8 = 0;
  unsigned VAR_9;





  const int VAR_10[] =
    {
      0x7, -1, 0xa, -1, 0x6, -1, 0x2, -1,
       -1, -1, 0x8, 0x9, -1, -1, 0x3, -1,
       -1, -1, -1, -1, 0x4, 0x5, -1, -1,
       -1, -1, -1, -1, -1, -1, 0x0, 0x1
    };
  int VAR_11;

  if (VAR_7.type == VAR_1)
    return;

  if (VAR_6.operands[1].immisalign)
    switch (VAR_6.operands[1].imm >> 8)
      {
      case 64: VAR_8 = 1; break;
      case 128:
        if (FUNC_0 (VAR_6.operands[0].imm) == 3)
          goto bad_alignment;
        VAR_8 = 2;
        break;
      case 256:
        if (FUNC_0 (VAR_6.operands[0].imm) == 3)
          goto bad_alignment;
        VAR_8 = 3;
        break;
      default:
      bad_alignment:
        FUNC_3 (FUNC_1("bad alignment"));
        return;
      }

  VAR_6.instruction |= VAR_8 << 4;
  VAR_6.instruction |= FUNC_5 (VAR_7.size) << 6;






  VAR_9 = ((VAR_6.operands[0].imm >> 4) & 7)
        | (((VAR_6.instruction >> 8) & 3) << 3);

  VAR_11 = VAR_10[VAR_9];

  FUNC_2 (VAR_11 == -1, FUNC_1("bad list type for instruction"));

  VAR_6.instruction &= ~0xf00;
  VAR_6.instruction |= VAR_11 << 8;
}
