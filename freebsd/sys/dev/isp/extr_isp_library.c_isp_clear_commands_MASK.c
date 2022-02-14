
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {size_t nt_channel; int nt_tagval; int nt_lun; int nt_tgt; void* nt_did; void* nt_sid; int nt_nphdl; int nt_wwn; TYPE_4__* nt_hba; int nt_ncode; } ;
typedef TYPE_3__ uint8_t ;
typedef size_t uint32_t ;
struct TYPE_19__ {size_t isp_maxcmds; size_t isp_nchan; TYPE_6__* isp_xflist; } ;
typedef TYPE_4__ ispsoftc_t ;
typedef TYPE_3__ isp_notify_t ;
struct TYPE_20__ {int handle; int * cmd; } ;
typedef TYPE_6__ isp_hdl_t ;
struct TYPE_16__ {int rqs_entry_type; } ;
struct TYPE_21__ {TYPE_1__ ct_header; void* ct_nphdl; int ct_syshandle; } ;
typedef TYPE_7__ ct7_entry_t ;
struct TYPE_17__ {int rqs_entry_type; } ;
struct TYPE_22__ {TYPE_2__ ct_header; void* ct_status; int ct_syshandle; } ;
typedef TYPE_8__ ct2_entry_t ;
typedef int XS_T ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int *,int ) ;
 int FUNC_1 (int ) ;



 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*,int ,TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void
FUNC_11(ispsoftc_t *VAR_14)
{
 uint32_t VAR_15;
 isp_hdl_t *VAR_16;




 for (VAR_15 = 0; VAR_14->isp_xflist && VAR_15 < VAR_14->isp_maxcmds; VAR_15++) {

  VAR_16 = &VAR_14->isp_xflist[VAR_15];
  switch (FUNC_1(VAR_16->handle)) {
  case 129: {
   XS_T *VAR_17 = VAR_16->cmd;
   if (FUNC_6(VAR_17)) {
    FUNC_0(VAR_14, VAR_17, VAR_16->handle);
    FUNC_5(VAR_17, FUNC_6(VAR_17));
   } else {
    FUNC_5(VAR_17, 0);
   }
   FUNC_8(VAR_14, VAR_16->handle);
   FUNC_4(VAR_17, VAR_1);
   FUNC_9(VAR_17);
   break;
  }
  case 130:
   FUNC_10(VAR_16->cmd);
   FUNC_8(VAR_14, VAR_16->handle);
   break;
  }
 }
}
