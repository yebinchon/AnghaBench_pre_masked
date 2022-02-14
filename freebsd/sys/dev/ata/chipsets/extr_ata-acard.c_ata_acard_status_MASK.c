
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct ata_channel {TYPE_1__ dma; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int FUNC_1 (struct ata_channel*,int ,int) ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 struct ata_channel* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_10)
{
    struct ata_channel *VAR_11 = FUNC_3(VAR_10);

    if (VAR_11->dma.flags & VAR_8) {
 int VAR_12 = FUNC_0(VAR_11, VAR_7) & VAR_6;

 if ((VAR_12 & (VAR_3 | VAR_5)) !=
     VAR_5)
     return 0;
 FUNC_1(VAR_11, VAR_7, VAR_12 & ~VAR_4);
 FUNC_2(1);
 FUNC_1(VAR_11, VAR_1,
       FUNC_0(VAR_11, VAR_1) & ~VAR_2);
 FUNC_2(1);
    }
    if (FUNC_0(VAR_11, VAR_0) & VAR_9) {
 FUNC_2(100);
 if (FUNC_0(VAR_11, VAR_0) & VAR_9)
     return 0;
    }
    return 1;
}
