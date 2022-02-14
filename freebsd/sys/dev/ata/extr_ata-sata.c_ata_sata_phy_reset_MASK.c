
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ata_channel {scalar_t__ pm_level; TYPE_1__* user; } ;
typedef int device_t ;
struct TYPE_2__ {int revision; } ;


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
 int FUNC_0 (struct ata_channel*,int,int) ;
 scalar_t__ FUNC_1 (struct ata_channel*,int,int ,int*) ;
 scalar_t__ FUNC_2 (struct ata_channel*,int,int ,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_10 ;
 struct ata_channel* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;

int
FUNC_6(device_t VAR_11, int VAR_12, int VAR_13)
{
    struct ata_channel *VAR_14 = FUNC_4(VAR_11);
    int VAR_15, VAR_16, VAR_17;
    uint32_t VAR_18, VAR_19;

    VAR_17 = VAR_14->user[VAR_12 < 0 ? 0 : VAR_12].revision;
    if (VAR_17 > 0)
 VAR_13 = 0;

    if (VAR_13) {
 if (FUNC_1(VAR_14, VAR_12, VAR_0, &VAR_18))
     return (0);
 if ((VAR_18 & VAR_2) == VAR_1) {
     FUNC_2(VAR_14, VAR_12, VAR_0,
  VAR_1 | ((VAR_14->pm_level > 0) ? 0 :
  VAR_4 | VAR_5));
     return FUNC_0(VAR_14, VAR_12, VAR_13);
 }
    }

    if (VAR_10) {
 if (VAR_12 < 0) {
     FUNC_5(VAR_11, "hard reset ...\n");
 } else {
     FUNC_5(VAR_11, "p%d: hard reset ...\n", VAR_12);
 }
    }
    if (VAR_17 == 1)
 VAR_19 = VAR_6;
    else if (VAR_17 == 2)
 VAR_19 = VAR_7;
    else if (VAR_17 == 3)
 VAR_19 = VAR_8;
    else
 VAR_19 = 0;
    for (VAR_16 = 0; VAR_16 < 10; VAR_16++) {
 for (VAR_15 = 0; VAR_15 < 10; VAR_15++) {
     if (FUNC_2(VAR_14, VAR_12, VAR_0, VAR_3 |
      VAR_19 | VAR_4 | VAR_5))
  goto fail;
     FUNC_3(100);
     if (FUNC_1(VAR_14, VAR_12, VAR_0, &VAR_18))
  goto fail;
     if ((VAR_18 & VAR_2) == VAR_3)
  break;
 }
 FUNC_3(5000);
 for (VAR_15 = 0; VAR_15 < 10; VAR_15++) {
     if (FUNC_2(VAR_14, VAR_12, VAR_0,
      VAR_1 | VAR_19 | ((VAR_14->pm_level > 0) ? 0 :
      VAR_4 | VAR_5)))
  goto fail;
     FUNC_3(100);
     if (FUNC_1(VAR_14, VAR_12, VAR_0, &VAR_18))
  goto fail;
     if ((VAR_18 & VAR_2) == 0)
  return FUNC_0(VAR_14, VAR_12, 0);
 }
    }
fail:

    FUNC_2(VAR_14, VAR_12, VAR_9, 0xffffffff);

    if (VAR_10) {
 if (VAR_12 < 0) {
     FUNC_5(VAR_11, "hard reset failed\n");
 } else {
     FUNC_5(VAR_11, "p%d: hard reset failed\n", VAR_12);
 }
    }
    return (0);
}
