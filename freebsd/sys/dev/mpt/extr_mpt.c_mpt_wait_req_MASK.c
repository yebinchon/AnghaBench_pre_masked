
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct mpt_softc {scalar_t__ reset_cnt; } ;
typedef int sbintime_t ;
struct TYPE_5__ {int state; TYPE_2__* req_vbuf; } ;
typedef TYPE_1__ request_t ;
typedef int mpt_req_state_t ;
struct TYPE_6__ {int Function; } ;
typedef TYPE_2__ MSG_REQUEST_HEADER ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mpt_softc*) ;
 int FUNC_2 (struct mpt_softc*,char*,int ) ;
 scalar_t__ FUNC_3 (struct mpt_softc*,TYPE_1__*,int ,char*,int) ;

int
FUNC_4(struct mpt_softc *VAR_7, request_t *VAR_8,
      mpt_req_state_t VAR_9, mpt_req_state_t VAR_10,
      int VAR_11, int VAR_12)
{
 int VAR_13;
 u_int VAR_14;
 sbintime_t VAR_15;






 if (VAR_11 != 0) {
  VAR_15 = VAR_6 * VAR_12;

  VAR_13 = VAR_12;
 } else {
  VAR_15 = 0;
  VAR_13 = VAR_12 * 2;
 }
 VAR_8->state |= VAR_4;
 VAR_10 &= ~VAR_4;
 VAR_14 = VAR_7->reset_cnt;
 while ((VAR_8->state & VAR_10) != VAR_9 && VAR_7->reset_cnt == VAR_14) {
  if (VAR_11 != 0) {
   if (FUNC_3(VAR_7, VAR_8, VAR_3, "mptreq", VAR_15) ==
       VAR_2) {
    VAR_13 = 0;
    break;
   }
  } else {
   if (VAR_12 != 0 && --VAR_13 == 0) {
    break;
   }
   FUNC_0(500);
   FUNC_1(VAR_7);
  }
 }
 VAR_8->state &= ~VAR_4;
 if (VAR_7->reset_cnt != VAR_14) {
  return (VAR_0);
 }
 if (VAR_12 && VAR_13 <= 0) {
  MSG_REQUEST_HEADER *VAR_16 = VAR_8->req_vbuf;
  VAR_8->state |= VAR_5;
  FUNC_2(VAR_7, "mpt_wait_req(%x) timed out\n", VAR_16->Function);
  return (VAR_1);
 }
 return (0);
}
