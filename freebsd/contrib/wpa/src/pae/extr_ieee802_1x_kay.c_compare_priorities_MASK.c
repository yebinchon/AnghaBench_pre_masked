
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct ieee802_1x_kay_peer {scalar_t__ key_server_priority; TYPE_1__ sci; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(const struct ieee802_1x_kay_peer *VAR_1,
         const struct ieee802_1x_kay_peer *VAR_2)
{
 if (VAR_1->key_server_priority < VAR_2->key_server_priority)
  return -1;
 if (VAR_2->key_server_priority < VAR_1->key_server_priority)
  return 1;

 return FUNC_0(VAR_1->sci.addr, VAR_2->sci.addr, VAR_0);
}
