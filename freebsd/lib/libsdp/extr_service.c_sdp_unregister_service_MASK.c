
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


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
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,struct iovec*,int) ;

int32_t
FUNC_4(void *VAR_7, uint32_t VAR_8)
{
 sdp_session_p VAR_9 = (sdp_session_p) VAR_7;
 struct iovec VAR_10[2];
 sdp_pdu_t VAR_11;
 int32_t VAR_12;

 if (VAR_9 == ((void*)0))
  return (-1);
 if (!(VAR_9->flags & VAR_5)) {
  VAR_9->error = VAR_1;
  return (-1);
 }
 if (sizeof(VAR_11) + sizeof(VAR_8) > VAR_3) {
  VAR_9->error = VAR_2;
  return (-1);
 }

 VAR_11.pid = VAR_4;
 VAR_11.tid = FUNC_1(++VAR_9->tid);
 VAR_11.len = FUNC_1(sizeof(VAR_8));

 VAR_8 = FUNC_0(VAR_8);

 VAR_10[0].iov_base = (void *) &VAR_11;
 VAR_10[0].iov_len = sizeof(VAR_11);

 VAR_10[1].iov_base = (void *) &VAR_8;
 VAR_10[1].iov_len = sizeof(VAR_8);

 do {
  VAR_12 = FUNC_3(VAR_9->s, VAR_10, sizeof(VAR_10)/sizeof(VAR_10[0]));
 } while (VAR_12 < 0 && VAR_6 == VAR_0);

 if (VAR_12 < 0) {
  VAR_9->error = VAR_6;
  return (-1);
 }

 return ((FUNC_2(VAR_9) < 0)? -1 : 0);
}
