
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int msg_from_peer; scalar_t__ peer_dev; } ;
typedef TYPE_1__ qla_host_t ;


 TYPE_1__* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(qla_host_t *VAR_0, uint32_t VAR_1)
{
 qla_host_t *VAR_2;

 if (VAR_0->peer_dev) {
         if ((VAR_2 = FUNC_0(VAR_0->peer_dev)) != ((void*)0)) {

   VAR_2->msg_from_peer = VAR_1;
  }
 }
}
