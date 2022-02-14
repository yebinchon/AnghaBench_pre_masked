
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_info_connection {scalar_t__ flags; int transport; int faddr; int laddr; int next_rx_seq; int next_tx_seq; } ;
struct rds_connection {int c_state; int c_flags; TYPE_1__* c_trans; int c_faddr; int c_laddr; int c_next_rx_seq; int c_next_tx_seq; } ;
struct TYPE_2__ {int t_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct rds_connection *VAR_6,
      void *VAR_7)
{
 struct rds_info_connection *VAR_8 = VAR_7;

 VAR_8->next_tx_seq = VAR_6->c_next_tx_seq;
 VAR_8->next_rx_seq = VAR_6->c_next_rx_seq;
 VAR_8->laddr = VAR_6->c_laddr;
 VAR_8->faddr = VAR_6->c_faddr;
 FUNC_2(VAR_8->transport, VAR_6->c_trans->t_name,
  sizeof(VAR_8->transport));
 VAR_8->flags = 0;

 FUNC_1(VAR_8->flags, FUNC_3(VAR_4, &VAR_6->c_flags),
     VAR_5);

 FUNC_1(VAR_8->flags,
     FUNC_0(&VAR_6->c_state) == VAR_2,
     VAR_1);
 FUNC_1(VAR_8->flags,
     FUNC_0(&VAR_6->c_state) == VAR_3,
     VAR_0);
 return 1;
}
