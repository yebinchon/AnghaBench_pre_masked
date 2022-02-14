
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {scalar_t__ bufsiz; int buf; } ;
struct TYPE_20__ {int func_code; scalar_t__ flags; } ;
struct TYPE_19__ {scalar_t__ dxfer_len; int * data_ptr; } ;
struct TYPE_18__ {scalar_t__ smp_request_len; scalar_t__ smp_response_len; int * smp_response; int * smp_request; } ;
struct TYPE_16__ {TYPE_4__* data; } ;
struct TYPE_17__ {TYPE_5__ cmd; } ;
struct TYPE_14__ {scalar_t__ dxfer_len; int * data_ptr; } ;
struct TYPE_13__ {scalar_t__ dxfer_len; int * data_ptr; } ;
struct TYPE_12__ {scalar_t__ pattern_buf_len; scalar_t__ match_buf_len; int matches; int patterns; } ;
union ccb {TYPE_10__ cdai; TYPE_9__ ccb_h; TYPE_8__ nvmeio; TYPE_7__ smpio; TYPE_6__ mmcio; TYPE_3__ ataio; TYPE_2__ csio; TYPE_1__ cdm; } ;
typedef int uint8_t ;
typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct mmc_data {int dummy; } ;
struct cam_periph_map_info {scalar_t__ num_bufs_used; int ** orig; scalar_t__* bp; } ;
struct TYPE_15__ {scalar_t__ len; int data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

void
FUNC_5(union ccb *VAR_7, struct cam_periph_map_info *VAR_8)
{
 int VAR_9, VAR_10;
 u_int8_t **VAR_11[VAR_3];
 u_int32_t VAR_12[VAR_3];
 u_int32_t VAR_13[VAR_3];

 if (VAR_8->num_bufs_used <= 0) {

  return;
 }

 switch (VAR_7->ccb_h.func_code) {
 case 133:
  if (VAR_7->cdm.pattern_buf_len > 0) {
   VAR_11[0] = (u_int8_t **)&VAR_7->cdm.patterns;
   VAR_12[0] = VAR_7->cdm.pattern_buf_len;
   VAR_13[0] = VAR_2;
   VAR_11[1] = (u_int8_t **)&VAR_7->cdm.matches;
   VAR_12[1] = VAR_7->cdm.match_buf_len;
   VAR_13[1] = VAR_0;
   VAR_9 = 2;
  } else {
   VAR_11[0] = (u_int8_t **)&VAR_7->cdm.matches;
   VAR_12[0] = VAR_7->cdm.match_buf_len;
   VAR_13[0] = VAR_0;
   VAR_9 = 1;
  }
  break;
 case 129:
 case 135:
  VAR_11[0] = &VAR_7->csio.data_ptr;
  VAR_12[0] = VAR_7->csio.dxfer_len;
  VAR_13[0] = VAR_7->ccb_h.flags & VAR_1;
  VAR_9 = 1;
  break;
 case 136:
  VAR_11[0] = &VAR_7->ataio.data_ptr;
  VAR_12[0] = VAR_7->ataio.dxfer_len;
  VAR_13[0] = VAR_7->ccb_h.flags & VAR_1;
  VAR_9 = 1;
  break;
 case 132:
  VAR_11[0] = (u_int8_t **)&VAR_7->mmcio.cmd.data;
  VAR_12[0] = sizeof(struct mmc_data *);
  VAR_13[0] = VAR_7->ccb_h.flags & VAR_1;
  VAR_11[1] = (u_int8_t **)&VAR_7->mmcio.cmd.data->data;
  VAR_12[1] = VAR_7->mmcio.cmd.data->len;
  VAR_13[1] = VAR_7->ccb_h.flags & VAR_1;
  VAR_9 = 2;
  break;
 case 128:
  VAR_11[0] = &VAR_7->smpio.smp_request;
  VAR_12[0] = VAR_7->smpio.smp_request_len;
  VAR_13[0] = VAR_2;
  VAR_11[1] = &VAR_7->smpio.smp_response;
  VAR_12[1] = VAR_7->smpio.smp_response_len;
  VAR_13[1] = VAR_0;
  VAR_9 = 2;
  break;
 case 130:
 case 131:
  VAR_11[0] = &VAR_7->nvmeio.data_ptr;
  VAR_12[0] = VAR_7->nvmeio.dxfer_len;
  VAR_13[0] = VAR_7->ccb_h.flags & VAR_1;
  VAR_9 = 1;
  break;
 case 134:
  VAR_11[0] = (uint8_t **)&VAR_7->cdai.buf;
  VAR_12[0] = VAR_7->cdai.bufsiz;
  VAR_13[0] = VAR_0;
  VAR_9 = 1;
  break;
 default:

  FUNC_0(VAR_5);
  return;
  break;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  if (VAR_8->bp[VAR_10]) {

   FUNC_4(VAR_8->bp[VAR_10]);


   FUNC_3(VAR_6, VAR_8->bp[VAR_10]);
  } else {
   if (VAR_13[VAR_10] != VAR_2) {
    FUNC_1(*VAR_11[VAR_10], VAR_8->orig[VAR_10],
        VAR_12[VAR_10]);
   }
   FUNC_2(*VAR_11[VAR_10], VAR_4);
  }


  *VAR_11[VAR_10] = VAR_8->orig[VAR_10];
 }


 FUNC_0(VAR_5);
}
