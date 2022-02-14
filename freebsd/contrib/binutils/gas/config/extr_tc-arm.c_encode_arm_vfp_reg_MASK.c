
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum vfp_reg_pos { ____Placeholder_vfp_reg_pos } vfp_reg_pos ;
struct TYPE_2__ {int instruction; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;






 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_5 (int VAR_6, enum vfp_reg_pos VAR_7)
{
  if ((VAR_7 == 133 || VAR_7 == 131 || VAR_7 == 132)
      && VAR_6 > 15)
    {
      if (FUNC_0 (VAR_1, VAR_2))
        {
          if (VAR_5)
            FUNC_1 (VAR_4, VAR_4,
                                    VAR_2);
          else
            FUNC_1 (VAR_0, VAR_0,
                                    VAR_2);
        }
      else
        {
          FUNC_4 (FUNC_2("D register out of range for selected VFP version"));
          return;
        }
    }

  switch (VAR_7)
    {
    case 130:
      VAR_3.instruction |= ((VAR_6 >> 1) << 12) | ((VAR_6 & 1) << 22);
      break;

    case 128:
      VAR_3.instruction |= ((VAR_6 >> 1) << 16) | ((VAR_6 & 1) << 7);
      break;

    case 129:
      VAR_3.instruction |= ((VAR_6 >> 1) << 0) | ((VAR_6 & 1) << 5);
      break;

    case 133:
      VAR_3.instruction |= ((VAR_6 & 15) << 12) | ((VAR_6 >> 4) << 22);
      break;

    case 131:
      VAR_3.instruction |= ((VAR_6 & 15) << 16) | ((VAR_6 >> 4) << 7);
      break;

    case 132:
      VAR_3.instruction |= (VAR_6 & 15) | ((VAR_6 >> 4) << 5);
      break;

    default:
      FUNC_3 ();
    }
}
