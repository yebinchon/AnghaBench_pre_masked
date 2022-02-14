
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct memac_regs {int * pause_thresh; int * pause_quanta; int command_config; int tx_fifo_sections; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

void FUNC_4(struct memac_regs *VAR_1,
                uint8_t VAR_2,
                uint16_t VAR_3,
                uint16_t VAR_4)
{
    uint32_t VAR_5;

 VAR_5 = FUNC_2(&VAR_1->tx_fifo_sections);

 if (VAR_2 == 0xff) {
  FUNC_0(VAR_5);
  FUNC_3(VAR_5, &VAR_1->tx_fifo_sections);

  VAR_5 = FUNC_2(&VAR_1->command_config);
  VAR_5 &= ~VAR_0;
  VAR_2 = 0;
 } else {
  FUNC_1(VAR_5);
  FUNC_3(VAR_5, &VAR_1->tx_fifo_sections);

  VAR_5 = FUNC_2(&VAR_1->command_config);
  VAR_5 |= VAR_0;
    }

    FUNC_3(VAR_5, &VAR_1->command_config);

    VAR_5 = FUNC_2(&VAR_1->pause_quanta[VAR_2 / 2]);
    if (VAR_2 % 2)
        VAR_5 &= 0x0000FFFF;
    else
        VAR_5 &= 0xFFFF0000;
    VAR_5 |= ((uint32_t)VAR_3 << (16 * (VAR_2 % 2)));
    FUNC_3(VAR_5, &VAR_1->pause_quanta[VAR_2 / 2]);

    VAR_5 = FUNC_2(&VAR_1->pause_thresh[VAR_2 / 2]);
    if (VAR_2 % 2)
            VAR_5 &= 0x0000FFFF;
    else
            VAR_5 &= 0xFFFF0000;
    VAR_5 |= ((uint32_t)VAR_4<<(16 * (VAR_2 % 2)));
    FUNC_3(VAR_5, &VAR_1->pause_thresh[VAR_2 / 2]);
}
