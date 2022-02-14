
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int (* softreset ) (int ,int) ;scalar_t__ (* pm_read ) (int ,int ,int,int*) ;} ;
struct ata_channel {int devices; TYPE_1__ hw; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;
 scalar_t__ VAR_3 ;
 struct ata_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int ,int ,int,int*) ;
 scalar_t__ FUNC_5 (int ,int ,int,int*) ;
 scalar_t__ FUNC_6 (int ,int ,int,int*) ;
 int FUNC_7 (int ,int) ;

void
FUNC_8(device_t VAR_4)
{
    struct ata_channel *VAR_5 = FUNC_2(VAR_4);
    u_int32_t VAR_6, VAR_7, VAR_8;
    int VAR_9;


    if (VAR_5->hw.pm_read(VAR_4, VAR_2, 0, &VAR_6)) {
 FUNC_3(VAR_4, "error getting PM vendor data\n");
 return;
    }


    if (VAR_5->hw.pm_read(VAR_4, VAR_2, 1, &VAR_7)) {
 FUNC_3(VAR_4, "error getting PM revision data\n");
 return;
    }


    if (VAR_5->hw.pm_read(VAR_4, VAR_2, 2, &VAR_8)) {
 FUNC_3(VAR_4, "error getting PM port info\n");
 return;
    }
    VAR_8 &= 0x0000000f;


    switch (VAR_6) {
    case 0x37261095:



 FUNC_3(VAR_4, "SiI 3726 (rev=%x) Port Multiplier with %d (5) ports\n",
        VAR_7, VAR_8);
 VAR_8 = 5;
 break;

    case 0x47261095:





 FUNC_3(VAR_4, "SiI 4726 (rev=%x) Port Multiplier with %d (5) ports\n",
        VAR_7, VAR_8);
 VAR_8 = 5;
 break;

    default:
 FUNC_3(VAR_4, "Port Multiplier (id=%08x rev=%x) with %d ports\n",
        VAR_6, VAR_7, VAR_8);
    }


    for (VAR_9=0; VAR_9 < VAR_8; VAR_9++) {
 u_int32_t VAR_10;

 if (!FUNC_1(VAR_4, VAR_9, 1))
     continue;






 FUNC_0(1000000);

 VAR_10 = VAR_5->hw.softreset(VAR_4, VAR_9);

 if (VAR_3)
     FUNC_3(VAR_4, "p%d: SIGNATURE=%08x\n", VAR_9, VAR_10);


 switch (VAR_10 >> 16) {
 case 0x0000:
     VAR_5->devices |= (VAR_1 << VAR_9);
     continue;
 case 0xeb14:
     VAR_5->devices |= (VAR_0 << VAR_9);
     continue;
 }
    }
}
