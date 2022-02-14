
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rdma_cm_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rdma_cm_id*,struct sockaddr*,int,void*) ;
 int FUNC_2 (struct sockaddr*) ;

int FUNC_3(struct rdma_cm_id *VAR_1, struct sockaddr *VAR_2,
   void *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4)
  return FUNC_0(VAR_0);

 return FUNC_1(VAR_1, VAR_2, VAR_4, VAR_3);
}
