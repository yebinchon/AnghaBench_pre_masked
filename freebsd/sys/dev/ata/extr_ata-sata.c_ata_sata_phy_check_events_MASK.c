
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ata_channel {scalar_t__ pm_level; int conntask; } ;
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
 scalar_t__ FUNC_0 (struct ata_channel*,int,int ,int*) ;
 int FUNC_1 (struct ata_channel*,int,int ,int) ;
 scalar_t__ VAR_9 ;
 struct ata_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_10 ;

void
FUNC_5(device_t VAR_11, int VAR_12)
{
    struct ata_channel *VAR_13 = FUNC_2(VAR_11);
    u_int32_t VAR_14, VAR_15;

    if (FUNC_0(VAR_13, VAR_12, VAR_0, &VAR_14))
 return;


    if (VAR_14 == 0xffffffff)
 return;


    if (VAR_14)
 FUNC_1(VAR_13, VAR_12, VAR_0, VAR_14);


    if ((VAR_14 & VAR_1) && (VAR_13->pm_level == 0)) {
 if (VAR_9) {
     if (FUNC_0(VAR_13, VAR_12, VAR_2, &VAR_15)) {
      FUNC_3(VAR_11, "PHYRDY change\n");
     } else if (((VAR_15 & VAR_3) == VAR_4) &&
  ((VAR_15 & VAR_7) != VAR_8) &&
  ((VAR_15 & VAR_6) == VAR_5)) {
      FUNC_3(VAR_11, "CONNECT requested\n");
     } else
      FUNC_3(VAR_11, "DISCONNECT requested\n");
 }
 FUNC_4(VAR_10, &VAR_13->conntask);
    }
}
