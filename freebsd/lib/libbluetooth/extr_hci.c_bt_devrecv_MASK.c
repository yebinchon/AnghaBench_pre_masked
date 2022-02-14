
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int ssize_t ;
struct TYPE_5__ {int length; } ;
typedef TYPE_1__ ng_hci_scodata_pkt_t ;
struct TYPE_6__ {int length; } ;
typedef TYPE_2__ ng_hci_event_pkt_t ;
struct TYPE_7__ {int length; } ;
typedef TYPE_3__ ng_hci_cmd_pkt_t ;
struct TYPE_8__ {int length; } ;
typedef TYPE_4__ ng_hci_acldata_pkt_t ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;




 int FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,void*,size_t) ;
 int FUNC_6 (int,int *,int *,int *,struct timeval*) ;

ssize_t
FUNC_7(int VAR_6, void *VAR_7, size_t VAR_8, time_t VAR_9)
{
 ssize_t VAR_10;

 if (VAR_7 == ((void*)0) || VAR_8 == 0) {
  VAR_5 = VAR_2;
  return (-1);
 }

 if (VAR_9 >= 0) {
  fd_set VAR_11;
  struct timeval VAR_12;

  FUNC_2(&VAR_11);
  FUNC_1(VAR_6, &VAR_11);

  VAR_12.tv_sec = VAR_9;
  VAR_12.tv_usec = 0;

  while ((VAR_10 = FUNC_6(VAR_6 + 1, &VAR_11, ((void*)0), ((void*)0), &VAR_12)) < 0) {
   if (VAR_5 == VAR_0 || VAR_5 == VAR_1)
    continue;

   return (-1);
  }

  if (VAR_10 == 0) {
   VAR_5 = VAR_4;
   return (-1);
  }

  FUNC_3(FUNC_0(VAR_6, &VAR_11));
 }

 while ((VAR_10 = FUNC_5(VAR_6, VAR_7, VAR_8)) < 0) {
  if (VAR_5 == VAR_0 || VAR_5 == VAR_1)
   continue;

  return (-1);
 }

 switch (*((uint8_t *) VAR_7)) {
 case 130: {
  ng_hci_cmd_pkt_t *VAR_13 = (ng_hci_cmd_pkt_t *) VAR_7;

  if (VAR_10 >= sizeof(*VAR_13) && VAR_10 == (sizeof(*VAR_13) + VAR_13->length))
   return (VAR_10);
  } break;

 case 131: {
  ng_hci_acldata_pkt_t *VAR_14 = (ng_hci_acldata_pkt_t *) VAR_7;

  if (VAR_10 >= sizeof(*VAR_14) && VAR_10 == (sizeof(*VAR_14) + FUNC_4(VAR_14->length)))
   return (VAR_10);
  } break;

 case 128: {
  ng_hci_scodata_pkt_t *VAR_15 = (ng_hci_scodata_pkt_t *) VAR_7;

  if (VAR_10 >= sizeof(*VAR_15) && VAR_10 == (sizeof(*VAR_15) + VAR_15->length))
   return (VAR_10);
  } break;

 case 129: {
  ng_hci_event_pkt_t *VAR_16 = (ng_hci_event_pkt_t *) VAR_7;

  if (VAR_10 >= sizeof(*VAR_16) && VAR_10 == (sizeof(*VAR_16) + VAR_16->length))
   return (VAR_10);
  } break;
 }

 VAR_5 = VAR_3;
 return (-1);
}
