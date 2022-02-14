
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int address; } ;
typedef TYPE_1__ isc_socketevent_t ;
typedef int isc_sockaddr_t ;
struct TYPE_6__ {scalar_t__ type; int peer_address; } ;
typedef TYPE_2__ isc__socket_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(isc_sockaddr_t *VAR_2, isc__socket_t *VAR_3,
  isc_socketevent_t *VAR_4)
{
 if (VAR_3->type == VAR_1) {
  if (VAR_2 != ((void*)0))
   VAR_4->address = *VAR_2;
  else
   VAR_4->address = VAR_3->peer_address;
 } else if (VAR_3->type == VAR_0) {
  FUNC_0(VAR_2 == ((void*)0));
  VAR_4->address = VAR_3->peer_address;
 }
}
