
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int tx_queue_len; int flags; int broadcast; int addr_len; int hard_header_len; int type; int * header_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_6)
{




 VAR_6->header_ops = &VAR_5;

 VAR_6->type = VAR_0;
 VAR_6->hard_header_len = VAR_4;
 VAR_6->mtu = 2000;
 VAR_6->addr_len = VAR_3;
 VAR_6->tx_queue_len = 100;

 FUNC_0(VAR_6->broadcast,0xFF, VAR_3);


 VAR_6->flags = VAR_1 | VAR_2 ;
}
