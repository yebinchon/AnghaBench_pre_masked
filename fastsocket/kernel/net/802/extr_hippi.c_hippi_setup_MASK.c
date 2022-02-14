
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int tx_queue_len; scalar_t__ flags; int broadcast; int addr_len; int hard_header_len; int type; int * header_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_4)
{
 VAR_4->header_ops = &VAR_3;






 VAR_4->type = VAR_0;
 VAR_4->hard_header_len = VAR_2;
 VAR_4->mtu = 65280;
 VAR_4->addr_len = VAR_1;
 VAR_4->tx_queue_len = 25 ;
 FUNC_0(VAR_4->broadcast, 0xFF, VAR_1);






 VAR_4->flags = 0;
}
