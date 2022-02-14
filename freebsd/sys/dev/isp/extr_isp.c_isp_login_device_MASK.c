
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int ispsoftc_t ;
struct TYPE_5__ {scalar_t__ portid; int handle; } ;
typedef TYPE_1__ isp_pdb_t ;
struct TYPE_6__ {scalar_t__ isp_loopstate; } ;


 TYPE_4__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,int,int,TYPE_1__*) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int,int,scalar_t__,int) ;
 int FUNC_5 (int *,int ,char*,int,...) ;

__attribute__((used)) static int
FUNC_6(ispsoftc_t *VAR_11, int VAR_12, uint32_t VAR_13, isp_pdb_t *VAR_14, uint16_t *VAR_15)
{
 int VAR_16, VAR_17, VAR_18;
 uint16_t VAR_19;

 if (FUNC_1(VAR_11)) {
  VAR_16 = VAR_6;
 } else {
  VAR_16 = VAR_5;
 }

 VAR_19 = FUNC_3(VAR_11, VAR_15);
 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  if (FUNC_0(VAR_11, VAR_12)->isp_loopstate != VAR_2)
   return (-1);


  VAR_18 = FUNC_2(VAR_11, VAR_12, VAR_19, VAR_14);
  if (VAR_18 == 0) {
   if (VAR_14->portid != VAR_13) {

    VAR_19 = FUNC_3(VAR_11, VAR_15);
    continue;
   }
   break;
  }
  if (FUNC_0(VAR_11, VAR_12)->isp_loopstate != VAR_2)
   return (-1);




  VAR_18 = FUNC_4(VAR_11, VAR_12, VAR_19, VAR_13, VAR_8);
  if (VAR_18 == 0) {
   break;
  } else if ((VAR_18 & 0xffff) == VAR_4) {





   if (FUNC_4(VAR_11, VAR_12, VAR_18 >> 16, VAR_13, VAR_7 | VAR_10 | VAR_9)) {
    FUNC_5(VAR_11, VAR_0, "baw... logout of %x failed", VAR_18 >> 16);
   }
   if (FUNC_0(VAR_11, VAR_12)->isp_loopstate != VAR_2)
    return (-1);
   VAR_18 = FUNC_4(VAR_11, VAR_12, VAR_19, VAR_13, VAR_8);
   if (VAR_18 != 0)
    VAR_17 = VAR_16;
   break;
  } else if ((VAR_18 & 0xffff) == VAR_3) {

   VAR_19 = FUNC_3(VAR_11, VAR_15);
  } else {

   VAR_17 = VAR_16;
   break;
  }
 }

 if (VAR_17 == VAR_16) {
  FUNC_5(VAR_11, VAR_1, "Chan %d PLOGI 0x%06x failed", VAR_12, VAR_13);
  return (-1);
 }






 VAR_18 = FUNC_2(VAR_11, VAR_12, VAR_19, VAR_14);
 if (VAR_18 != 0) {
  FUNC_5(VAR_11, VAR_0, "Chan %d new device 0x%06x@0x%x disappeared", VAR_12, VAR_13, VAR_19);
  return (-1);
 }

 if (VAR_14->handle != VAR_19 || VAR_14->portid != VAR_13) {
  FUNC_5(VAR_11, VAR_0, "Chan %d new device 0x%06x@0x%x changed (0x%06x@0x%0x)",
      VAR_12, VAR_13, VAR_19, VAR_14->portid, VAR_14->handle);
  return (-1);
 }
 return (0);
}
