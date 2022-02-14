
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ib {void* sib_sid_mask; void* sib_sid; int sib_family; } ;
struct sockaddr {int dummy; } ;
struct rdma_cm_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct sockaddr_ib*,int ,int) ;
 int FUNC_2 (struct rdma_cm_id*,struct sockaddr*) ;
 int FUNC_3 (int *,struct rdma_cm_id**,int *,int ) ;
 int FUNC_4 (struct rdma_cm_id*) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct rdma_cm_id *VAR_5;
 struct sockaddr_ib VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(((void*)0), &VAR_5, ((void*)0), VAR_3);
 if (VAR_7)
  return;

 FUNC_1(&VAR_6, 0, sizeof VAR_6);
 VAR_6.sib_family = VAR_0;
 VAR_6.sib_sid = FUNC_0(VAR_2);
 VAR_6.sib_sid_mask = FUNC_0(VAR_1);
 VAR_4 = 1;
 VAR_7 = FUNC_2(VAR_5, (struct sockaddr *) &VAR_6);
 VAR_4 = !VAR_7;

 FUNC_4(VAR_5);
}
