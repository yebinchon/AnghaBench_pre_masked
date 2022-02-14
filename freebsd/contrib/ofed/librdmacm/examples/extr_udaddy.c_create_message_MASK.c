
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_grh {int dummy; } ;
struct cmatest_node {int mem; int mr; int pd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct cmatest_node *VAR_3)
{
 if (!VAR_2)
  VAR_1 = 0;

 if (!VAR_1)
  return 0;

 VAR_3->mem = FUNC_2(VAR_2 + sizeof(struct ibv_grh));
 if (!VAR_3->mem) {
  FUNC_3("failed message allocation\n");
  return -1;
 }
 VAR_3->mr = FUNC_1(VAR_3->pd, VAR_3->mem,
         VAR_2 + sizeof(struct ibv_grh),
         VAR_0);
 if (!VAR_3->mr) {
  FUNC_3("failed to reg MR\n");
  goto err;
 }
 return 0;
err:
 FUNC_0(VAR_3->mem);
 return -1;
}
