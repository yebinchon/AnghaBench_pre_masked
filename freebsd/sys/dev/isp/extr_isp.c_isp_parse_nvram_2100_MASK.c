
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef void* uint32_t ;
struct TYPE_9__ {int isp_confopts; } ;
typedef TYPE_1__ ispsoftc_t ;
struct TYPE_10__ {int isp_wwpn_nvram; int isp_wwnn_nvram; void* isp_zfwoptions; void* isp_xfwoptions; int isp_fwoptions; int isp_loopid; int isp_retry_count; int isp_retry_delay; int isp_maxalloc; } ;
typedef TYPE_2__ fcparam ;
typedef int DEFAULT_FRAMESIZE ;
typedef int DEFAULT_EXEC_THROTTLE ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (int *) ;
 void* FUNC_12 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int ,char*,void*,void*,...) ;

__attribute__((used)) static void
FUNC_16(ispsoftc_t *VAR_5, uint8_t *VAR_6)
{
 fcparam *VAR_7 = FUNC_0(VAR_5, 0);
 uint64_t VAR_8;
 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8) {
  FUNC_15(VAR_5, VAR_3, "NVRAM Port WWN 0x%08x%08x",
      (uint32_t) (VAR_8 >> 32), (uint32_t) (VAR_8));
  if ((VAR_8 >> 60) == 0) {
   VAR_8 |= (((uint64_t) 2)<< 60);
  }
 }
 VAR_7->isp_wwpn_nvram = VAR_8;
 if (FUNC_13(VAR_5) || FUNC_14(VAR_5)) {
  VAR_8 = FUNC_5(VAR_6);
  if (VAR_8) {
   FUNC_15(VAR_5, VAR_3, "NVRAM Node WWN 0x%08x%08x",
       (uint32_t) (VAR_8 >> 32),
       (uint32_t) (VAR_8));
   if ((VAR_8 >> 60) == 0) {
    VAR_8 |= (((uint64_t) 2)<< 60);
   }
  } else {
   VAR_8 = VAR_7->isp_wwpn_nvram & ~((uint64_t) 0xfff << 48);
  }
 } else {
  VAR_8 &= ~((uint64_t) 0xfff << 48);
 }
 VAR_7->isp_wwnn_nvram = VAR_8;

 VAR_7->isp_maxalloc = FUNC_4(VAR_6);
 if ((VAR_5->isp_confopts & VAR_1) == 0) {
  DEFAULT_FRAMESIZE(VAR_9) =
      FUNC_3(VAR_6);
 }
 VAR_7->isp_retry_delay = FUNC_9(VAR_6);
 VAR_7->isp_retry_count = FUNC_8(VAR_6);
 if ((VAR_5->isp_confopts & VAR_2) == 0) {
  VAR_7->isp_loopid = FUNC_2(VAR_6);
 }
 if ((VAR_5->isp_confopts & VAR_0) == 0) {
  DEFAULT_EXEC_THROTTLE(VAR_10) =
   FUNC_1(VAR_6);
 }
 VAR_7->isp_fwoptions = FUNC_6(VAR_6);
 FUNC_15(VAR_5, VAR_4,
     "NVRAM 0x%08x%08x 0x%08x%08x maxalloc %d maxframelen %d",
     (uint32_t) (VAR_7->isp_wwnn_nvram >> 32),
     (uint32_t) VAR_7->isp_wwnn_nvram,
     (uint32_t) (VAR_7->isp_wwpn_nvram >> 32),
     (uint32_t) VAR_7->isp_wwpn_nvram,
     FUNC_4(VAR_6),
     FUNC_3(VAR_6));
 FUNC_15(VAR_5, VAR_4,
     "execthrottle %d fwoptions 0x%x hardloop %d tov %d",
     FUNC_1(VAR_6),
     FUNC_6(VAR_6),
     FUNC_2(VAR_6),
     FUNC_10(VAR_6));
 VAR_7->isp_xfwoptions = FUNC_11(VAR_6);
 VAR_7->isp_zfwoptions = FUNC_12(VAR_6);
 FUNC_15(VAR_5, VAR_4, "xfwoptions 0x%x zfw options 0x%x",
     FUNC_11(VAR_6), FUNC_12(VAR_6));
}
