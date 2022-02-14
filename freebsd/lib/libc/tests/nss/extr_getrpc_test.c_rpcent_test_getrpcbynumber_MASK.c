
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcent_test_data {int dummy; } ;
struct rpcent {int r_number; } ;


 scalar_t__ FUNC_0 (struct rpcent*,struct rpcent*,int *) ;
 int FUNC_1 (struct rpcent*) ;
 struct rpcent* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct rpcent_test_data*,struct rpcent*) ;
 scalar_t__ FUNC_5 (struct rpcent*,int *) ;

__attribute__((used)) static int
FUNC_6(struct rpcent *VAR_0, void *VAR_1)
{
 struct rpcent *VAR_2;

 FUNC_3("testing getrpcbyport() with the following data...\n");
 FUNC_1(VAR_0);

 VAR_2 = FUNC_2(VAR_0->r_number);
 if (FUNC_5(VAR_2, ((void*)0)) != 0 ||
     (FUNC_0(VAR_2, VAR_0, ((void*)0)) != 0 &&
      FUNC_4((struct rpcent_test_data *)VAR_1, VAR_2)
     != 0)) {
  FUNC_3("not ok\n");
  return (-1);
 } else {
  FUNC_3("ok\n");
  return (0);
 }
}
