
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int * data_ptr; } ;
struct TYPE_14__ {int buf; } ;
struct TYPE_13__ {int * smp_response; int * smp_request; } ;
struct TYPE_12__ {int * data_ptr; } ;
struct TYPE_11__ {int * data_ptr; } ;
struct TYPE_10__ {int matches; int patterns; } ;
struct TYPE_9__ {int func_code; } ;
union ccb {TYPE_7__ nvmeio; TYPE_6__ cdai; TYPE_5__ smpio; TYPE_4__ ataio; TYPE_3__ csio; TYPE_2__ cdm; TYPE_1__ ccb_h; } ;
typedef int uint8_t ;
typedef int u_int8_t ;
struct pass_softc {int pass_io_zone; } ;
struct pass_io_req {int num_bufs; int flags; scalar_t__ data_flags; int num_kern_segs; int ** user_bufs; TYPE_8__* kern_segptr; TYPE_8__** kern_bufs; TYPE_8__* user_segptr; union ccb ccb; } ;
struct TYPE_16__ {scalar_t__ ds_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_8__*,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct pass_softc *VAR_7, struct pass_io_req *VAR_8)
{
 union ccb *VAR_9;
 u_int8_t **VAR_10[VAR_3];
 int VAR_11, VAR_12;

 VAR_9 = &VAR_8->ccb;

 switch (VAR_9->ccb_h.func_code) {
 case 132:
  VAR_12 = FUNC_1(VAR_8->num_bufs, 2);

  if (VAR_12 == 1) {
   VAR_10[0] = (u_int8_t **)&VAR_9->cdm.matches;
  } else {
   VAR_10[0] = (u_int8_t **)&VAR_9->cdm.patterns;
   VAR_10[1] = (u_int8_t **)&VAR_9->cdm.matches;
  }
  break;
 case 129:
 case 134:
  VAR_10[0] = &VAR_9->csio.data_ptr;
  VAR_12 = FUNC_1(VAR_8->num_bufs, 1);
  break;
 case 135:
  VAR_10[0] = &VAR_9->ataio.data_ptr;
  VAR_12 = FUNC_1(VAR_8->num_bufs, 1);
  break;
 case 128:
  VAR_12 = FUNC_1(VAR_8->num_bufs, 2);
  VAR_10[0] = &VAR_9->smpio.smp_request;
  VAR_10[1] = &VAR_9->smpio.smp_response;
  break;
 case 133:
  VAR_12 = FUNC_1(VAR_8->num_bufs, 1);
  VAR_10[0] = (uint8_t **)&VAR_9->cdai.buf;
  break;
 case 130:
 case 131:
  VAR_10[0] = &VAR_9->nvmeio.data_ptr;
  VAR_12 = FUNC_1(VAR_8->num_bufs, 1);
  break;
 default:

  return;
  break;
 }

 if (VAR_8->flags & VAR_6) {
  FUNC_0(VAR_8->user_segptr, VAR_4);
  VAR_8->user_segptr = ((void*)0);
 }




 if (VAR_8->data_flags == VAR_2) {
  for (VAR_11 = 0; VAR_11 < VAR_8->num_bufs; VAR_11++) {
   if (VAR_8->kern_bufs[VAR_11] == ((void*)0))
    continue;

   FUNC_0(VAR_8->kern_bufs[VAR_11], VAR_4);
   VAR_8->kern_bufs[VAR_11] = ((void*)0);
  }
 } else if (VAR_8->data_flags == VAR_1) {
  for (VAR_11 = 0; VAR_11 < VAR_8->num_kern_segs; VAR_11++) {
   if ((uint8_t *)(uintptr_t)
       VAR_8->kern_segptr[VAR_11].ds_addr == ((void*)0))
    continue;

   FUNC_2(VAR_7->pass_io_zone, (uint8_t *)(uintptr_t)
       VAR_8->kern_segptr[VAR_11].ds_addr);
   VAR_8->kern_segptr[VAR_11].ds_addr = 0;
  }
 }

 if (VAR_8->flags & VAR_5) {
  FUNC_0(VAR_8->kern_segptr, VAR_4);
  VAR_8->kern_segptr = ((void*)0);
 }

 if (VAR_8->data_flags != VAR_0) {
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {




   if (VAR_8->user_bufs[VAR_11] != ((void*)0))
    *VAR_10[VAR_11] = VAR_8->user_bufs[VAR_11];
  }
 }

}
