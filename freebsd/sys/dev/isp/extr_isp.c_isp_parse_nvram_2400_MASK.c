
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_7__ {int isp_confopts; } ;
typedef TYPE_1__ ispsoftc_t ;
struct TYPE_8__ {int isp_wwpn_nvram; int isp_wwnn_nvram; int isp_zfwoptions; scalar_t__ isp_xfwoptions; scalar_t__ isp_fwoptions; scalar_t__ isp_loopid; scalar_t__ isp_maxalloc; } ;
typedef TYPE_2__ fcparam ;
typedef int DEFAULT_FRAMESIZE ;
typedef int DEFAULT_EXEC_THROTTLE ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (TYPE_1__*,int ,char*,int ,scalar_t__,scalar_t__,scalar_t__,int ,...) ;

__attribute__((used)) static void
FUNC_11(ispsoftc_t *VAR_4, uint8_t *VAR_5)
{
 fcparam *VAR_6 = FUNC_0(VAR_4, 0);
 uint64_t VAR_7;

 FUNC_10(VAR_4, VAR_3,
     "NVRAM 0x%08x%08x 0x%08x%08x exchg_cnt %d maxframelen %d",
     (uint32_t) (FUNC_8(VAR_5) >> 32),
     (uint32_t) (FUNC_8(VAR_5)),
     (uint32_t) (FUNC_9(VAR_5) >> 32),
     (uint32_t) (FUNC_9(VAR_5)),
     FUNC_1(VAR_5),
     FUNC_7(VAR_5));
 FUNC_10(VAR_4, VAR_3,
     "NVRAM execthr %d loopid %d fwopt1 0x%x fwopt2 0x%x fwopt3 0x%x",
     FUNC_2(VAR_5),
     FUNC_6(VAR_5),
     FUNC_3(VAR_5),
     FUNC_4(VAR_5),
     FUNC_5(VAR_5));

 VAR_7 = FUNC_9(VAR_5);
 VAR_6->isp_wwpn_nvram = VAR_7;

 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7) {
  if ((VAR_7 >> 60) != 2 && (VAR_7 >> 60) != 5) {
   VAR_7 = 0;
  }
 }
 if (VAR_7 == 0 && (VAR_6->isp_wwpn_nvram >> 60) == 2) {
  VAR_7 = VAR_6->isp_wwpn_nvram;
  VAR_7 &= ~((uint64_t) 0xfff << 48);
 }
 VAR_6->isp_wwnn_nvram = VAR_7;

 if (FUNC_1(VAR_5)) {
  VAR_6->isp_maxalloc = FUNC_1(VAR_5);
 }
 if ((VAR_4->isp_confopts & VAR_1) == 0) {
  DEFAULT_FRAMESIZE(VAR_8) =
      FUNC_7(VAR_5);
 }
 if ((VAR_4->isp_confopts & VAR_2) == 0) {
  VAR_6->isp_loopid = FUNC_6(VAR_5);
 }
 if ((VAR_4->isp_confopts & VAR_0) == 0) {
  DEFAULT_EXEC_THROTTLE(VAR_9) =
   FUNC_2(VAR_5);
 }
 VAR_6->isp_fwoptions = FUNC_3(VAR_5);
 VAR_6->isp_xfwoptions = FUNC_4(VAR_5);
 VAR_6->isp_zfwoptions = FUNC_5(VAR_5);
}
