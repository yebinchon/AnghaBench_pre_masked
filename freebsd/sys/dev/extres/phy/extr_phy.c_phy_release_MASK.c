
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct phynode {scalar_t__ ref_cnt; int consumers_list; } ;
typedef TYPE_1__* phy_t ;
struct TYPE_5__ {scalar_t__ enable_cnt; struct phynode* phynode; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct phynode*) ;
 int FUNC_2 (struct phynode*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_7 (struct phynode*) ;

void
FUNC_8(phy_t VAR_2)
{
 struct phynode *VAR_3;

 VAR_3 = VAR_2->phynode;
 FUNC_0(VAR_3->ref_cnt > 0,
    ("Attempt to access unreferenced phy.\n"));

 FUNC_3();
 while (VAR_2->enable_cnt > 0) {
  FUNC_7(VAR_3);
  VAR_2->enable_cnt--;
 }
 FUNC_2(VAR_3);
 FUNC_5(&VAR_3->consumers_list, VAR_2, VAR_1);
 VAR_3->ref_cnt--;
 FUNC_1(VAR_3);
 FUNC_4();

 FUNC_6(VAR_2, VAR_0);
}
