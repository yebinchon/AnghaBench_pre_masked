
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rds_iw_connection {int i_ack_lock; int i_ack_next; int i_ack_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static u64 FUNC_3(struct rds_iw_connection *VAR_1)
{
 unsigned long VAR_2;
 u64 VAR_3;

 FUNC_0(VAR_0, &VAR_1->i_ack_flags);

 FUNC_1(&VAR_1->i_ack_lock, VAR_2);
 VAR_3 = VAR_1->i_ack_next;
 FUNC_2(&VAR_1->i_ack_lock, VAR_2);

 return VAR_3;
}
