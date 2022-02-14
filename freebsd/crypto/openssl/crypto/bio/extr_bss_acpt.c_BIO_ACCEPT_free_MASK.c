
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bio_chain; struct TYPE_4__* cache_peer_serv; struct TYPE_4__* cache_peer_name; struct TYPE_4__* cache_accepting_serv; struct TYPE_4__* cache_accepting_name; int addr_first; struct TYPE_4__* param_serv; struct TYPE_4__* param_addr; } ;
typedef TYPE_1__ BIO_ACCEPT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(BIO_ACCEPT *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    FUNC_2(VAR_0->param_addr);
    FUNC_2(VAR_0->param_serv);
    FUNC_0(VAR_0->addr_first);
    FUNC_2(VAR_0->cache_accepting_name);
    FUNC_2(VAR_0->cache_accepting_serv);
    FUNC_2(VAR_0->cache_peer_name);
    FUNC_2(VAR_0->cache_peer_serv);
    FUNC_1(VAR_0->bio_chain);
    FUNC_2(VAR_0);
}
