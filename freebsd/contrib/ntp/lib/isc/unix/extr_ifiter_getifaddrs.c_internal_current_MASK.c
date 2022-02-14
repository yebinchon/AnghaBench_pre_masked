
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ifaddrs {int ifa_flags; int * ifa_name; TYPE_7__* ifa_broadaddr; TYPE_7__* ifa_dstaddr; TYPE_7__* ifa_netmask; TYPE_7__* ifa_addr; } ;
typedef int isc_result_t ;
struct TYPE_10__ {int flags; int af; struct TYPE_10__* name; int ifindex; int broadcast; int dstaddress; int netmask; int address; } ;
struct TYPE_9__ {TYPE_2__ current; struct ifaddrs* pos; } ;
typedef TYPE_1__ isc_interfaceiter_t ;
struct TYPE_11__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int *,TYPE_7__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,int *,unsigned int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int VAR_16 ;
 unsigned int FUNC_8 (int *) ;

__attribute__((used)) static isc_result_t
FUNC_9(isc_interfaceiter_t *VAR_17) {
 struct ifaddrs *VAR_18;
 int VAR_19;
 unsigned int VAR_20;

 FUNC_1(FUNC_2(VAR_17));

 VAR_18 = VAR_17->pos;
 if (VAR_17->pos == ((void*)0))
  return (FUNC_5(VAR_17));


 FUNC_0(VAR_18 != ((void*)0));
 FUNC_0(VAR_18->ifa_name != ((void*)0));
 if (VAR_18->ifa_addr == ((void*)0))
  return (VAR_13);

 VAR_19 = VAR_18->ifa_addr->sa_family;
 if (VAR_19 != VAR_0 && VAR_19 != VAR_1)
  return (VAR_13);


 if (VAR_19 == VAR_1)
  VAR_16 = VAR_15;


 FUNC_7(&VAR_17->current, 0, sizeof(VAR_17->current));

 VAR_20 = FUNC_8(VAR_18->ifa_name);
 if (VAR_20 > sizeof(VAR_17->current.name) - 1)
  VAR_20 = sizeof(VAR_17->current.name) - 1;

 FUNC_7(VAR_17->current.name, 0, sizeof(VAR_17->current.name));
 FUNC_6(VAR_17->current.name, VAR_18->ifa_name, VAR_20);

 VAR_17->current.flags = 0;

 if ((VAR_18->ifa_flags & VAR_7) != 0)
  VAR_17->current.flags |= VAR_12;

 if ((VAR_18->ifa_flags & VAR_5) != 0)
  VAR_17->current.flags |= VAR_11;

 if ((VAR_18->ifa_flags & VAR_3) != 0)
  VAR_17->current.flags |= VAR_9;

 if ((VAR_18->ifa_flags & VAR_2) != 0)
  VAR_17->current.flags |= VAR_8;






 VAR_17->current.af = VAR_19;

 FUNC_3(VAR_19, &VAR_17->current.address, VAR_18->ifa_addr, VAR_18->ifa_name);

 if (VAR_18->ifa_netmask != ((void*)0))
  FUNC_3(VAR_19, &VAR_17->current.netmask, VAR_18->ifa_netmask,
    VAR_18->ifa_name);

 if (VAR_18->ifa_dstaddr != ((void*)0) &&
     (VAR_17->current.flags & VAR_11) != 0)
  FUNC_3(VAR_19, &VAR_17->current.dstaddress, VAR_18->ifa_dstaddr,
    VAR_18->ifa_name);

 if (VAR_18->ifa_broadaddr != ((void*)0) &&
     (VAR_17->current.flags & VAR_8) != 0)
  FUNC_3(VAR_19, &VAR_17->current.broadcast, VAR_18->ifa_broadaddr,
    VAR_18->ifa_name);




 return (VAR_14);
}
