
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


struct sockaddr_in6 {int sin6_addr; } ;
typedef int isc_sockaddr_t ;
typedef int isc_result_t ;
struct TYPE_15__ {TYPE_8__* s6_addr; } ;
struct TYPE_16__ {TYPE_4__ in6; } ;
struct TYPE_17__ {void* family; TYPE_5__ type; } ;
struct TYPE_13__ {int in6; } ;
struct TYPE_20__ {TYPE_2__ type; void* family; } ;
struct TYPE_19__ {int flags; TYPE_6__ netmask; int name; TYPE_9__ address; void* af; } ;
struct TYPE_18__ {unsigned int pos6; TYPE_8__ current; TYPE_3__* buf6; int loopfe80__1; int loop__1; } ;
typedef TYPE_7__ isc_interfaceiter_t ;
struct TYPE_14__ {int iAddressCount; TYPE_1__* Address; } ;
struct TYPE_12__ {scalar_t__ lpSockaddr; } ;
typedef scalar_t__ BOOL ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_9__*,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (TYPE_8__*,int,int) ;
 int FUNC_6 (int ,int,char*,size_t) ;

__attribute__((used)) static isc_result_t
FUNC_7(isc_interfaceiter_t *VAR_7) {
 BOOL VAR_8 = VAR_1;
 struct sockaddr_in6 *VAR_9;
 BOOL VAR_10;
 int VAR_11;

 FUNC_0(FUNC_1(VAR_7));
 FUNC_0(VAR_7->pos6 >= 0);
 FUNC_0(VAR_7->buf6 != 0);

 FUNC_5(&VAR_7->current, 0, sizeof(VAR_7->current));
 VAR_7->current.af = VAR_0;





 if (VAR_7->pos6 >= (unsigned)VAR_7->buf6->iAddressCount) {
  VAR_10 = VAR_1;
  for (VAR_11 = 0; VAR_11 < VAR_7->buf6->iAddressCount; VAR_11++) {
   VAR_9 = (struct sockaddr_in6 *)
          VAR_7->buf6->Address[VAR_11].lpSockaddr;
   if (!FUNC_3(&VAR_7->loop__1, &VAR_9->sin6_addr,
        sizeof(VAR_7->loop__1))) {
    VAR_10 = VAR_6;
    break;
   }
  }
  if (VAR_10)
   VAR_7->pos6 = VAR_7->buf6->iAddressCount - 1;
 }

 if (VAR_7->pos6 < (unsigned)VAR_7->buf6->iAddressCount) {
  FUNC_2(&VAR_7->current.address,
      (isc_sockaddr_t *)VAR_7->buf6->Address[VAR_7->pos6].lpSockaddr);
 } else {
  VAR_7->current.address.family = VAR_0;
  FUNC_4(&VAR_7->current.address.type.in6, &VAR_7->loop__1,
         sizeof(VAR_7->current.address.type.in6));
 }





 VAR_7->current.flags = VAR_4 | VAR_3;

 if (!FUNC_3(&VAR_7->current.address.type.in6, &VAR_7->loop__1,
      sizeof(VAR_7->current.address.type.in6)) ||
     !FUNC_3(&VAR_7->current.address.type.in6, &VAR_7->loopfe80__1,
             sizeof(VAR_7->current.address.type.in6))) {

  VAR_7->current.flags |= VAR_2;
  FUNC_6(VAR_7->current.name, sizeof(VAR_7->current.name),
    "v6loop %d",
    VAR_7->buf6->iAddressCount - VAR_7->pos6);
  VAR_8 = VAR_6;
 }

 if (VAR_8 == VAR_1)
  FUNC_6(VAR_7->current.name, sizeof(VAR_7->current.name),
    "IPv6 %d",
    VAR_7->buf6->iAddressCount - VAR_7->pos6);

 FUNC_5(VAR_7->current.netmask.type.in6.s6_addr, 0xff,
        sizeof(VAR_7->current.netmask.type.in6.s6_addr));
 VAR_7->current.netmask.family = VAR_0;
 return (VAR_5);
}
