
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clknode {int flags; } ;
struct clkdom {int clknode_list; } ;


 int FUNC_0 (struct clknode*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct clknode*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct clknode*) ;
 int FUNC_3 (char*,int) ;

struct clknode *
FUNC_4(struct clkdom * VAR_2, struct clknode *VAR_3)
{
 int VAR_4;


 if (VAR_3->flags & VAR_0)
  return(VAR_3);

 VAR_4 = FUNC_0(VAR_3, FUNC_2(VAR_3));
 if (VAR_4 != 0) {
  FUNC_3(" CLKNODE_INIT failed: %d\n", VAR_4);
  return (((void*)0));
 }

 FUNC_1(&VAR_2->clknode_list, VAR_3, VAR_1);
 VAR_3->flags |= VAR_0;
 return (VAR_3);
}
