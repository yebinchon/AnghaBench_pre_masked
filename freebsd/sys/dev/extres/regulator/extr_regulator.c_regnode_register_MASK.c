
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regnode {scalar_t__ ofw_node; int pdev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct regnode*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,struct regnode*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

struct regnode *
FUNC_8(struct regnode *VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 != 0) {
  FUNC_7("REGNODE_INIT failed: %d\n", VAR_3);
  return (((void*)0));
 }

 FUNC_4();
 FUNC_5(&VAR_1, VAR_2, VAR_0);
 FUNC_3();




 return (VAR_2);
}
