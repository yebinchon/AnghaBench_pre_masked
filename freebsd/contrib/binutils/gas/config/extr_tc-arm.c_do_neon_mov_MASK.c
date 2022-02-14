
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {int size; int type; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; int * error; } ;
struct TYPE_3__ {unsigned int reg; int imm; } ;


 int FUNC_0 (int ,int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;







 int VAR_4 ;







 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int ) ;
 int VAR_18 ;
 int FUNC_8 () ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_2__ VAR_22 ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_1__*,char,int) ;
 struct neon_type_el FUNC_13 (int,int,int,int) ;
 void* FUNC_14 (int) ;
 void* FUNC_15 (int) ;
 int FUNC_16 () ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_20 (int) ;

__attribute__((used)) static void
FUNC_21 (void)
{
  enum neon_shape VAR_23 = FUNC_19 (130, 137, 139, 131,
    133, 141, 134, 140, 128, 129, 138, 136, 132, 135,
    VAR_4);
  struct neon_type_el VAR_24;
  const char *VAR_25 = 0;

  switch (VAR_23)
    {
    case 141:
      VAR_24 = FUNC_13 (2, VAR_23, VAR_11, VAR_12 | VAR_13);

      VAR_22.error = ((void*)0);
      if (VAR_24.type == VAR_5 && VAR_24.size == 64)
        {
          FUNC_9 ("fcpyd");
          break;
        }


    case 133:
      {
        if (FUNC_20 (VAR_3 | VAR_2) == VAR_1)
          return;



        VAR_22.instruction = 0x0200110;
        VAR_22.instruction |= FUNC_2 (VAR_22.operands[0].reg) << 12;
        VAR_22.instruction |= FUNC_1 (VAR_22.operands[0].reg) << 22;
        VAR_22.instruction |= FUNC_2 (VAR_22.operands[1].reg);
        VAR_22.instruction |= FUNC_1 (VAR_22.operands[1].reg) << 5;
        VAR_22.instruction |= FUNC_2 (VAR_22.operands[1].reg) << 16;
        VAR_22.instruction |= FUNC_1 (VAR_22.operands[1].reg) << 7;
        VAR_22.instruction |= FUNC_18 (VAR_23) << 6;

        VAR_22.instruction = FUNC_14 (VAR_22.instruction);
      }
      break;

    case 140:
      VAR_24 = FUNC_13 (2, VAR_23, VAR_11, VAR_12 | VAR_13);
      VAR_22.error = ((void*)0);
      if (VAR_24.type == VAR_5 && VAR_24.size == 64)
        {

          VAR_25 = "fconstd";
          goto encode_fconstd;
        }


    case 134:
      if (FUNC_20 (VAR_3 | VAR_2) == VAR_1)
        return;
      VAR_22.instruction = 0x0800010;
      FUNC_16 ();
      VAR_22.instruction = FUNC_14 (VAR_22.instruction);
      break;

    case 128:
      {
        unsigned VAR_26 = 0;
        struct neon_type_el VAR_27 = FUNC_13 (2, VAR_4,
          VAR_10 | VAR_8 | VAR_9 | VAR_13, VAR_11);
        int VAR_28 = FUNC_15 (VAR_27.size);
        unsigned VAR_29 = FUNC_4 (VAR_22.operands[0].reg);
        unsigned VAR_30 = FUNC_3 (VAR_22.operands[0].reg);

        FUNC_7 (!FUNC_0 (VAR_18, VAR_20),
                    FUNC_5(VAR_0));
        FUNC_7 (!FUNC_0 (VAR_18, VAR_19)
                    && VAR_27.size != 32, FUNC_5(VAR_0));
        FUNC_7 (VAR_27.type == VAR_6, FUNC_5("bad type for scalar"));
        FUNC_7 (VAR_30 >= 64 / VAR_27.size, FUNC_5("scalar index out of range"));

        switch (VAR_27.size)
          {
          case 8: VAR_26 = 0x8; break;
          case 16: VAR_26 = 0x1; break;
          case 32: VAR_26 = 0x0; break;
          default: ;
          }

        VAR_26 |= VAR_30 << VAR_28;

        VAR_22.instruction = 0xe000b10;
        FUNC_8 ();
        VAR_22.instruction |= FUNC_2 (VAR_29) << 16;
        VAR_22.instruction |= FUNC_1 (VAR_29) << 7;
        VAR_22.instruction |= VAR_22.operands[1].reg << 12;
        VAR_22.instruction |= (VAR_26 & 3) << 5;
        VAR_22.instruction |= (VAR_26 >> 2) << 21;
      }
      break;

    case 139:
      FUNC_7 (!FUNC_0 (VAR_18, VAR_21),
                  FUNC_5(VAR_0));

      VAR_22.instruction = 0xc400b10;
      FUNC_8 ();
      VAR_22.instruction |= FUNC_2 (VAR_22.operands[0].reg);
      VAR_22.instruction |= FUNC_1 (VAR_22.operands[0].reg) << 5;
      VAR_22.instruction |= VAR_22.operands[1].reg << 12;
      VAR_22.instruction |= VAR_22.operands[2].reg << 16;
      break;

    case 129:
      {
        struct neon_type_el VAR_31 = FUNC_13 (2, VAR_4,
          VAR_11, VAR_15 | VAR_14 | VAR_17 | VAR_16 | VAR_9 | VAR_13);
        unsigned VAR_32 = FUNC_15 (VAR_31.size);
        unsigned VAR_33 = FUNC_4 (VAR_22.operands[1].reg);
        unsigned VAR_34 = FUNC_3 (VAR_22.operands[1].reg);
        unsigned VAR_35 = 0;

        FUNC_7 (!FUNC_0 (VAR_18, VAR_20),
                    FUNC_5(VAR_0));
        FUNC_7 (!FUNC_0 (VAR_18, VAR_19)
                    && VAR_31.size != 32, FUNC_5(VAR_0));
        FUNC_7 (VAR_31.type == VAR_6, FUNC_5("bad type for scalar"));
        FUNC_7 (VAR_34 >= 64 / VAR_31.size, FUNC_5("scalar index out of range"));

        switch (VAR_31.size)
          {
          case 8: VAR_35 = (VAR_31.type == VAR_7) ? 0x08 : 0x18; break;
          case 16: VAR_35 = (VAR_31.type == VAR_7) ? 0x01 : 0x11; break;
          case 32: VAR_35 = 0x00; break;
          default: ;
          }

        VAR_35 |= VAR_34 << VAR_32;
        VAR_22.instruction = 0xe100b10;
        FUNC_8 ();
        VAR_22.instruction |= FUNC_2 (VAR_33) << 16;
        VAR_22.instruction |= FUNC_1 (VAR_33) << 7;
        VAR_22.instruction |= VAR_22.operands[0].reg << 12;
        VAR_22.instruction |= (VAR_35 & 3) << 5;
        VAR_22.instruction |= (VAR_35 >> 2) << 21;
      }
      break;

    case 131:
      FUNC_7 (!FUNC_0 (VAR_18, VAR_21),
                  FUNC_5(VAR_0));

      VAR_22.instruction = 0xc500b10;
      FUNC_8 ();
      VAR_22.instruction |= VAR_22.operands[0].reg << 12;
      VAR_22.instruction |= VAR_22.operands[1].reg << 16;
      VAR_22.instruction |= FUNC_2 (VAR_22.operands[2].reg);
      VAR_22.instruction |= FUNC_1 (VAR_22.operands[2].reg) << 5;
      break;

    case 138:
      FUNC_9 ("fcpys");
      break;

    case 136:
      VAR_25 = "fconsts";
      encode_fconstd:
      if (FUNC_11 (VAR_22.operands[1].imm))
        {
          VAR_22.operands[1].imm = FUNC_17 (VAR_22.operands[1].imm);
          FUNC_9 (VAR_25);
        }
      else
        FUNC_10 (FUNC_5("immediate out of range"));
      break;

    case 132:
      FUNC_9 ("fmrs");
      break;

    case 135:
      FUNC_9 ("fmsr");
      break;





    case 130:
      FUNC_7 (VAR_22.operands[3].reg != VAR_22.operands[2].reg + 1,
                  FUNC_5("VFP registers must be adjacent"));
      VAR_22.operands[2].imm = 2;
      FUNC_12 (&VAR_22.operands[3], '\0', sizeof (VAR_22.operands[3]));
      FUNC_9 ("fmrrs");
      break;

    case 137:
      FUNC_7 (VAR_22.operands[1].reg != VAR_22.operands[0].reg + 1,
                  FUNC_5("VFP registers must be adjacent"));
      VAR_22.operands[1] = VAR_22.operands[2];
      VAR_22.operands[2] = VAR_22.operands[3];
      VAR_22.operands[0].imm = 2;
      FUNC_12 (&VAR_22.operands[3], '\0', sizeof (VAR_22.operands[3]));
      FUNC_9 ("fmsrr");
      break;

    default:
      FUNC_6 ();
    }
}
