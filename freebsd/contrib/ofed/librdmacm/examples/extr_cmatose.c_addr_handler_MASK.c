
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmatest_node {int cma_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ,int *,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct cmatest_node *VAR_4)
{
 int VAR_5;

 if (VAR_2) {
  VAR_5 = FUNC_3(VAR_4->cma_id, VAR_0,
          VAR_1, &VAR_3, sizeof VAR_3);
  if (VAR_5)
   FUNC_1("cmatose: set TOS option failed");
 }

 VAR_5 = FUNC_2(VAR_4->cma_id, 2000);
 if (VAR_5) {
  FUNC_1("cmatose: resolve route failed");
  FUNC_0();
 }
 return VAR_5;
}
