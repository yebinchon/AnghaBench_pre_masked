
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmatest_node {int cma_id; } ;
struct TYPE_2__ {int dst_addr; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct cmatest_node*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct cmatest_node*) ;
 int FUNC_4 (int ,int ,struct cmatest_node*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 (struct cmatest_node*) ;

__attribute__((used)) static int FUNC_6(struct cmatest_node *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  goto err;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  goto err;

 if (!VAR_0) {
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3)
   goto err;
 }

 VAR_3 = FUNC_4(VAR_2->cma_id, VAR_1.dst_addr, VAR_2);
 if (VAR_3) {
  FUNC_2("mckey: failure joining");
  goto err;
 }
 return 0;
err:
 FUNC_0();
 return VAR_3;
}
