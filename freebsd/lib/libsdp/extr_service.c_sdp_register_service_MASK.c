
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uuid ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct iovec {int iov_len; void* iov_base; } ;
typedef TYPE_1__* sdp_session_p ;
struct TYPE_5__ {void* len; void* tid; int pid; } ;
typedef TYPE_2__ sdp_pdu_t ;
typedef int pdu ;
typedef int iov ;
typedef int int32_t ;
typedef int * bdaddr_p ;
struct TYPE_4__ {int flags; int tid; scalar_t__* rsp; scalar_t__ error; int s; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,struct iovec*,int) ;

int32_t
FUNC_3(void *VAR_8, uint16_t VAR_9, bdaddr_p const VAR_10,
  uint8_t const *VAR_11, uint32_t VAR_12, uint32_t *VAR_13)
{
 sdp_session_p VAR_14 = (sdp_session_p) VAR_8;
 struct iovec VAR_15[4];
 sdp_pdu_t VAR_16;
 int32_t VAR_17;

 if (VAR_14 == ((void*)0))
  return (-1);
 if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0) ||
     VAR_12 == 0 || !(VAR_14->flags & VAR_6)) {
  VAR_14->error = VAR_1;
  return (-1);
 }
 if (sizeof(VAR_16)+sizeof(VAR_9)+sizeof(*VAR_10)+VAR_12 > VAR_4) {
  VAR_14->error = VAR_3;
  return (-1);
 }

 VAR_16.pid = VAR_5;
 VAR_16.tid = FUNC_0(++VAR_14->tid);
 VAR_16.len = FUNC_0(sizeof(VAR_9) + sizeof(*VAR_10) + VAR_12);

 VAR_9 = FUNC_0(VAR_9);

 VAR_15[0].iov_base = (void *) &VAR_16;
 VAR_15[0].iov_len = sizeof(VAR_16);

 VAR_15[1].iov_base = (void *) &VAR_9;
 VAR_15[1].iov_len = sizeof(VAR_9);

 VAR_15[2].iov_base = (void *) VAR_10;
 VAR_15[2].iov_len = sizeof(*VAR_10);

 VAR_15[3].iov_base = (void *) VAR_11;
 VAR_15[3].iov_len = VAR_12;

 do {
  VAR_17 = FUNC_2(VAR_14->s, VAR_15, sizeof(VAR_15)/sizeof(VAR_15[0]));
 } while (VAR_17 < 0 && VAR_7 == VAR_0);

 if (VAR_17 < 0) {
  VAR_14->error = VAR_7;
  return (-1);
 }

 VAR_17 = FUNC_1(VAR_14);
 if (VAR_17 < 0)
  return (-1);
 if (VAR_17 != sizeof(VAR_16) + sizeof(uint16_t) + sizeof(uint32_t)) {
  VAR_14->error = VAR_2;
  return (-1);
 }

 if (VAR_13 != ((void*)0)) {
  *VAR_13 = (uint32_t) VAR_14->rsp[--VAR_17];
  *VAR_13 |= (uint32_t) VAR_14->rsp[--VAR_17] << 8;
  *VAR_13 |= (uint32_t) VAR_14->rsp[--VAR_17] << 16;
  *VAR_13 |= (uint32_t) VAR_14->rsp[--VAR_17] << 24;
 }

 return (0);
}
