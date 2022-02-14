
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rdma_cm_id*) ;
 int FUNC_1 (struct rdma_cm_id*) ;
 int FUNC_2 (struct rdma_cm_id*) ;
 int FUNC_3 (struct rdma_cm_id*) ;

__attribute__((used)) static int FUNC_4(struct rdma_cm_id *VAR_1)
{
 int VAR_2;

 if (!VAR_0)
  return FUNC_3(VAR_1);

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 return 0;
}
