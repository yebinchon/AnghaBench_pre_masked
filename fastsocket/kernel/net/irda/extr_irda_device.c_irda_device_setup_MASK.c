
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tx_queue_len; int mtu; int flags; int broadcast; int type; int addr_len; scalar_t__ hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3)
{
 VAR_3->hard_header_len = 0;
 VAR_3->addr_len = VAR_2;

 VAR_3->type = VAR_0;
 VAR_3->tx_queue_len = 8;

 FUNC_0(VAR_3->broadcast, 0xff, VAR_2);

 VAR_3->mtu = 2048;
 VAR_3->flags = VAR_1;
}
