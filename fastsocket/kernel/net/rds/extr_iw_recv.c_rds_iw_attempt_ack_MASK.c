
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_iw_connection {int i_ack_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rds_iw_connection*,unsigned int) ;
 int FUNC_2 (struct rds_iw_connection*,int,unsigned int*,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct rds_iw_connection *VAR_5)
{
 unsigned int VAR_6;

 if (!FUNC_5(VAR_1, &VAR_5->i_ack_flags))
  return;

 if (FUNC_4(VAR_0, &VAR_5->i_ack_flags)) {
  FUNC_3(VAR_3);
  return;
 }


 if (!FUNC_2(VAR_5, 1, &VAR_6, 0, VAR_2)) {
  FUNC_3(VAR_4);
  FUNC_0(VAR_0, &VAR_5->i_ack_flags);
  return;
 }

 FUNC_0(VAR_1, &VAR_5->i_ack_flags);
 FUNC_1(VAR_5, VAR_6);
}
