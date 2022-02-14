
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ata_pci_controller {int channels; int r_res2; TYPE_1__* interrupt; } ;
struct ata_channel {int unit; } ;
struct TYPE_2__ {struct ata_channel* argument; int (* function ) (struct ata_channel*) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ata_pci_controller*) ;
 int FUNC_3 (struct ata_pci_controller*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ata_channel*) ;
 int FUNC_6 (struct ata_channel*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
    struct ata_pci_controller *VAR_4 = VAR_3;
    struct ata_channel *VAR_5;
    u_int32_t VAR_6 = FUNC_0(VAR_4->r_res2, 0x000c0480);
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_4->channels; VAR_7++) {
 if (VAR_6 & (1 << (VAR_7 + 1)))
     if ((VAR_5 = VAR_4->interrupt[VAR_7].argument))
  VAR_4->interrupt[VAR_7].function(VAR_5);
 if (VAR_6 & (1 << (VAR_7 + 5)))
     if ((VAR_5 = VAR_4->interrupt[VAR_7].argument))
  FUNC_3(VAR_4,
           FUNC_4((VAR_5->unit * VAR_1) +
            VAR_2));
 if (VAR_6 & (1 << (VAR_7 + 9))) {
     FUNC_2(VAR_4);
     if ((VAR_5 = VAR_4->interrupt[VAR_7].argument))
  VAR_4->interrupt[VAR_7].function(VAR_5);
 }
 if (VAR_6 & (1 << (VAR_7 + 13))) {
     FUNC_2(VAR_4);
     if ((VAR_5 = VAR_4->interrupt[VAR_7].argument))
  FUNC_1(VAR_4->r_res2, 0x000c0240 + (VAR_5->unit << 7),
    FUNC_4((VAR_5->unit * VAR_1) +
    VAR_0));
 }
    }
}
