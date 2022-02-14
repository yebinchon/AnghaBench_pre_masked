
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct memac_regs {int if_mode; } ;
typedef enum enet_speed { ____Placeholder_enet_speed } enet_speed ;
typedef enum enet_interface { ____Placeholder_enet_interface } enet_interface ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct memac_regs *VAR_8,
        enum enet_interface VAR_9,
        enum enet_speed VAR_10, bool VAR_11)
{
    uint32_t VAR_12;

    VAR_12 = FUNC_0(&VAR_8->if_mode);

    if (VAR_11)
        VAR_12 &= ~VAR_1;
    else
        VAR_12 |= VAR_1;

    if (VAR_9 == VAR_0) {

        VAR_12 &= ~VAR_5;
        VAR_12 &= ~VAR_7;

        if (VAR_11)
            VAR_12 |= VAR_6;
        else
            VAR_12 &= ~VAR_6;

        switch (VAR_10) {
        case 128:
            VAR_12 |= VAR_4;
            break;
        case 129:
            VAR_12 |= VAR_3;
            break;
        case 130:
            VAR_12 |= VAR_2;
            break;
        default:
            break;
        }
    }

    FUNC_1(VAR_12, &VAR_8->if_mode);
}
