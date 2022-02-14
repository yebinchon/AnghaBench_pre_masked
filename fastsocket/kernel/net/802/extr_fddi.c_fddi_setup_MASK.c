
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tx_queue_len; int flags; int broadcast; int addr_len; int mtu; scalar_t__ hard_header_len; int type; int * header_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_7)
{
 VAR_7->header_ops = &VAR_6;
 VAR_7->type = VAR_0;
 VAR_7->hard_header_len = VAR_3+3;
 VAR_7->mtu = VAR_2;
 VAR_7->addr_len = VAR_1;
 VAR_7->tx_queue_len = 100;
 VAR_7->flags = VAR_4 | VAR_5;

 FUNC_0(VAR_7->broadcast, 0xFF, VAR_1);
}
