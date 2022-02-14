
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_sockaddr_t ;
typedef int isc_result_t ;
struct TYPE_8__ {int flags; int name; int netmask; int address; int broadcast; int dstaddress; int af; } ;
struct TYPE_6__ {unsigned long iiFlags; int iiNetmask; int iiBroadcastAddress; int iiAddress; } ;
struct TYPE_7__ {scalar_t__ numIF; TYPE_3__ current; TYPE_1__ IFData; } ;
typedef TYPE_2__ isc_interfaceiter_t ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (int ,int,char*,scalar_t__) ;

__attribute__((used)) static isc_result_t
FUNC_6(isc_interfaceiter_t *VAR_14) {
 BOOL VAR_15 = VAR_1;
 unsigned long VAR_16;

 FUNC_0(FUNC_1(VAR_14));
 FUNC_0(VAR_14->numIF >= 0);

 FUNC_4(&VAR_14->current, 0, sizeof(VAR_14->current));
 VAR_14->current.af = VAR_0;

 FUNC_3(&VAR_14->current.address,
     (isc_sockaddr_t *)&(VAR_14->IFData.iiAddress));





 VAR_14->current.flags = 0;
 VAR_16 = VAR_14->IFData.iiFlags;

 if ((VAR_16 & VAR_6) != 0)
  VAR_14->current.flags |= VAR_11;

 if ((VAR_16 & VAR_2) != 0)
  VAR_14->current.flags |= VAR_7;

 if ((VAR_16 & VAR_4) != 0)
  VAR_14->current.flags |= VAR_9;

 if ((VAR_16 & VAR_5) != 0) {
  VAR_14->current.flags |= VAR_10;
  FUNC_5(VAR_14->current.name, sizeof(VAR_14->current.name),
    "PPP %d", VAR_14->numIF);
  VAR_15 = VAR_13;
 }

 if ((VAR_16 & VAR_3) != 0) {
  VAR_14->current.flags |= VAR_8;
  FUNC_5(VAR_14->current.name, sizeof(VAR_14->current.name),
   "v4loop %d", VAR_14->numIF);
  VAR_15 = VAR_13;
 }




 if ((VAR_14->current.flags & VAR_10) != 0)
  FUNC_3(&VAR_14->current.dstaddress,
      (isc_sockaddr_t *)&(VAR_14->IFData.iiBroadcastAddress));




 FUNC_3(&VAR_14->current.netmask,
     (isc_sockaddr_t *)&(VAR_14->IFData.iiNetmask));





 if ((VAR_14->current.flags & VAR_7) != 0)
  FUNC_2(&VAR_14->current.broadcast,
      &VAR_14->current.address,
      &VAR_14->current.netmask);

 if (VAR_15 == VAR_1)
  FUNC_5(VAR_14->current.name, sizeof(VAR_14->current.name),
   "IPv4 %d", VAR_14->numIF);

 return (VAR_12);
}
