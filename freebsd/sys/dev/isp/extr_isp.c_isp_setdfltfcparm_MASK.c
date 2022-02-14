
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_15__ {int isp_confopts; } ;
typedef TYPE_1__ ispsoftc_t ;
struct TYPE_16__ {size_t role; int isp_wwnn; int isp_wwpn; int isp_zfwoptions; int isp_xfwoptions; int isp_fwoptions; void* isp_login_hdl; void* isp_lasthdl; int isp_wwpn_nvram; int isp_wwnn_nvram; int isp_loopid; int isp_retry_count; int isp_retry_delay; int isp_maxalloc; } ;
typedef TYPE_2__ fcparam ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 size_t FUNC_5 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 void* VAR_19 ;
 int * VAR_20 ;
 int FUNC_8 (TYPE_1__*,int ,char*,int,int ,int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_10(ispsoftc_t *VAR_21, int VAR_22)
{
 fcparam *VAR_23 = FUNC_6(VAR_21, VAR_22);




 VAR_23->role = FUNC_5(VAR_21, VAR_22);
 VAR_23->isp_maxalloc = VAR_13;
 VAR_23->isp_retry_delay = VAR_15;
 VAR_23->isp_retry_count = VAR_14;
 VAR_23->isp_loopid = FUNC_2(VAR_21, VAR_22);
 VAR_23->isp_wwnn_nvram = FUNC_3(VAR_21, VAR_22);
 VAR_23->isp_wwpn_nvram = FUNC_4(VAR_21, VAR_22);
 VAR_23->isp_fwoptions = 0;
 VAR_23->isp_xfwoptions = 0;
 VAR_23->isp_zfwoptions = 0;
 VAR_23->isp_lasthdl = VAR_19;
 VAR_23->isp_login_hdl = VAR_19;

 if (FUNC_7(VAR_21)) {
  VAR_23->isp_fwoptions |= VAR_1;
  VAR_23->isp_fwoptions |= VAR_3;
  if (VAR_21->isp_confopts & VAR_16)
   VAR_23->isp_fwoptions |= VAR_2;
  VAR_23->isp_fwoptions |= VAR_0;
  VAR_23->isp_xfwoptions |= VAR_4;
  VAR_23->isp_zfwoptions |= VAR_5;
 } else {
  VAR_23->isp_fwoptions |= VAR_7;
  VAR_23->isp_fwoptions |= VAR_10;
  VAR_23->isp_fwoptions |= VAR_9;
  if (VAR_21->isp_confopts & VAR_16)
   VAR_23->isp_fwoptions |= VAR_8;




  VAR_23->isp_fwoptions &= ~VAR_6;
  VAR_23->isp_xfwoptions |= VAR_11;
  VAR_23->isp_zfwoptions |= VAR_12;
 }






 if ((VAR_21->isp_confopts & VAR_17) == 0) {
  int VAR_24, VAR_25 = 0;



  for (VAR_24 = 0; VAR_24 < 2; VAR_24++) {
   VAR_25 = FUNC_9(VAR_21, VAR_22);
   if (VAR_25 == 0) {
    break;
   }
  }
  if (VAR_25) {
   VAR_21->isp_confopts |= VAR_17;
  }
 }

 VAR_23->isp_wwnn = FUNC_0(VAR_21, VAR_22);
 VAR_23->isp_wwpn = FUNC_1(VAR_21, VAR_22);
 FUNC_8(VAR_21, VAR_18, "Chan %d 0x%08x%08x/0x%08x%08x Role %s",
     VAR_22, (uint32_t) (VAR_23->isp_wwnn >> 32), (uint32_t) (VAR_23->isp_wwnn),
     (uint32_t) (VAR_23->isp_wwpn >> 32), (uint32_t) (VAR_23->isp_wwpn),
     VAR_20[VAR_23->role]);
}
