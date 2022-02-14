
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct iovec {int iov_len; void* iov_base; } ;
typedef TYPE_1__* sdp_session_p ;
struct TYPE_5__ {void* len; void* tid; int pid; } ;
typedef TYPE_2__ sdp_pdu_t ;
typedef int pdu ;
typedef int iov ;
typedef int int32_t ;
typedef int handle ;
struct TYPE_4__ {int flags; int tid; scalar_t__ error; int s; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,struct iovec*,int) ;

int32_t
FUNC_3(void *VAR_7, uint32_t VAR_8,
  uint8_t const *VAR_9, uint32_t VAR_10)
{
 sdp_session_p VAR_11 = (sdp_session_p) VAR_7;
 struct iovec VAR_12[3];
 sdp_pdu_t VAR_13;
 int32_t VAR_14;

 if (VAR_11 == ((void*)0))
  return (-1);
 if (VAR_9 == ((void*)0) || VAR_10 == 0 || !(VAR_11->flags & VAR_5)) {
  VAR_11->error = VAR_1;
  return (-1);
 }
 if (sizeof(VAR_13) + sizeof(VAR_8) + VAR_10 > VAR_3) {
  VAR_11->error = VAR_2;
  return (-1);
 }

 VAR_13.pid = VAR_4;
 VAR_13.tid = FUNC_0(++VAR_11->tid);
 VAR_13.len = FUNC_0(sizeof(VAR_8) + VAR_10);

 VAR_8 = FUNC_0(VAR_8);

 VAR_12[0].iov_base = (void *) &VAR_13;
 VAR_12[0].iov_len = sizeof(VAR_13);

 VAR_12[1].iov_base = (void *) &VAR_8;
 VAR_12[1].iov_len = sizeof(VAR_8);

 VAR_12[2].iov_base = (void *) VAR_9;
 VAR_12[2].iov_len = VAR_10;

 do {
  VAR_14 = FUNC_2(VAR_11->s, VAR_12, sizeof(VAR_12)/sizeof(VAR_12[0]));
 } while (VAR_14 < 0 && VAR_6 == VAR_0);

 if (VAR_14 < 0) {
  VAR_11->error = VAR_6;
  return (-1);
 }

 return ((FUNC_1(VAR_11) < 0)? -1 : 0);
}
