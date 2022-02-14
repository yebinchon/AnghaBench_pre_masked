
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int isc_sockaddr_t ;
typedef int isc_result_t ;
struct TYPE_14__ {char* name; int flags; int netmask; int address; int broadcast; int af; int ifindex; } ;
struct TYPE_11__ {TYPE_6__ current; TYPE_4__* ipuaCur; TYPE_5__* ipaaCur; } ;
typedef TYPE_3__ isc_interfaceiter_t ;
struct TYPE_13__ {scalar_t__ OperStatus; scalar_t__ IfType; int Flags; int FriendlyName; int Ipv6IfIndex; } ;
struct TYPE_10__ {TYPE_1__* lpSockaddr; } ;
struct TYPE_12__ {scalar_t__ DadState; scalar_t__ SuffixOrigin; TYPE_2__ Address; } ;
struct TYPE_9__ {int sa_family; } ;
typedef TYPE_4__ IP_ADAPTER_UNICAST_ADDRESS ;
typedef TYPE_5__ IP_ADAPTER_ADDRESSES ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int,char*,int,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_6__*,int ,int) ;

__attribute__((used)) static isc_result_t
FUNC_6(isc_interfaceiter_t *VAR_17) {
 IP_ADAPTER_ADDRESSES *VAR_18;
 IP_ADAPTER_UNICAST_ADDRESS *VAR_19;
 unsigned char VAR_20;

 FUNC_1(VAR_17->ipaaCur != ((void*)0));
 FUNC_1(VAR_17->ipuaCur != ((void*)0));
 VAR_18 = VAR_17->ipaaCur;
 VAR_19 = VAR_17->ipuaCur;
 if (VAR_15 != VAR_19->DadState)
  return (VAR_12);
 FUNC_5(&VAR_17->current, 0, sizeof(VAR_17->current));
 VAR_17->current.af = VAR_19->Address.lpSockaddr->sa_family;
 FUNC_4(&VAR_17->current.address,
     (isc_sockaddr_t *)VAR_19->Address.lpSockaddr);
 if (VAR_1 == VAR_17->current.af)
  VAR_17->current.ifindex = VAR_18->Ipv6IfIndex;
 VAR_17->current.name[0] = '\0';
 FUNC_2(
  VAR_2,
  0,
  VAR_18->FriendlyName,
  -1,
  VAR_17->current.name,
  sizeof(VAR_17->current.name),
  ((void*)0),
  ((void*)0));
 VAR_17->current.name[sizeof(VAR_17->current.name) - 1] = '\0';
 if (VAR_14 == VAR_18->OperStatus)
  VAR_17->current.flags |= VAR_10;
 if (VAR_3 == VAR_18->IfType)
  VAR_17->current.flags |= VAR_8;
 else if (VAR_4 == VAR_18->IfType)
  VAR_17->current.flags |= VAR_6;
 if ((VAR_11 & VAR_18->Flags) == 0)
  VAR_17->current.flags |= VAR_7;
 if (VAR_16 == VAR_19->SuffixOrigin)
  VAR_17->current.flags |= VAR_9;

 VAR_20 = FUNC_0(VAR_17);

 if (VAR_0 == VAR_17->current.af && VAR_20 < 32 &&
     (VAR_6 & VAR_17->current.flags) == 0) {
  VAR_17->current.flags |= VAR_5;
  FUNC_3(&VAR_17->current.broadcast,
      &VAR_17->current.address,
      &VAR_17->current.netmask);
 }
 return (VAR_13);
}
