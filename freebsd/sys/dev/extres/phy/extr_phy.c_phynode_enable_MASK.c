
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phynode {scalar_t__ enable_cnt; } ;


 int FUNC_0 (struct phynode*,int) ;
 int FUNC_1 (struct phynode*) ;
 int FUNC_2 (struct phynode*) ;
 int FUNC_3 () ;

int
FUNC_4(struct phynode *VAR_0)
{
 int VAR_1;

 FUNC_3();

 FUNC_2(VAR_0);
 if (VAR_0->enable_cnt == 0) {
  VAR_1 = FUNC_0(VAR_0, 1);
  if (VAR_1 != 0) {
   FUNC_1(VAR_0);
   return (VAR_1);
  }
 }
 VAR_0->enable_cnt++;
 FUNC_1(VAR_0);
 return (0);
}
