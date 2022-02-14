
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ata_channel {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ata_channel*,int,int ,int*) ;
 int FUNC_1 (struct ata_channel*,int,int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,char*,int,...) ;

__attribute__((used)) static int
FUNC_4(struct ata_channel *VAR_9, int VAR_10, int VAR_11)
{
    u_int32_t VAR_12;
    int VAR_13, VAR_14;


    VAR_13 = (VAR_11 == 2) ? 0 : 100;
    VAR_14 = 0;
    while (1) {
 if (FUNC_0(VAR_9, VAR_10, VAR_1, &VAR_12))
     return (0);
 if (((VAR_12 & VAR_2) == VAR_3) &&
     ((VAR_12 & VAR_6) != VAR_7) &&
     ((VAR_12 & VAR_5) == VAR_4))
     break;
 if (++VAR_14 > VAR_13)
     break;
 FUNC_2(10000);
    }
    if (VAR_8) {
 if (VAR_14 > VAR_13) {
     if (VAR_10 < 0) {
  FUNC_3(VAR_9->dev, "SATA connect timeout status=%08x\n",
      VAR_12);
     } else {
  FUNC_3(VAR_9->dev, "p%d: SATA connect timeout status=%08x\n",
      VAR_10, VAR_12);
     }
 } else if (VAR_10 < 0) {
     FUNC_3(VAR_9->dev, "SATA connect time=%dms status=%08x\n",
  VAR_14 * 10, VAR_12);
 } else {
     FUNC_3(VAR_9->dev, "p%d: SATA connect time=%dms status=%08x\n",
  VAR_10, VAR_14 * 10, VAR_12);
 }
    }


    FUNC_1(VAR_9, VAR_10, VAR_0, 0xffffffff);

    return ((VAR_14 > VAR_13) ? 0 : 1);
}
