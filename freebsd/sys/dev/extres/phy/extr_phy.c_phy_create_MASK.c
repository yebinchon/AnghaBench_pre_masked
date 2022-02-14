
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phynode {int consumers_list; int ref_cnt; } ;
struct phy {scalar_t__ enable_cnt; struct phynode* phynode; int cdev; } ;
typedef struct phy* phy_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phynode*) ;
 int FUNC_1 (struct phynode*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,struct phy*,int ) ;
 int VAR_3 ;
 struct phy* FUNC_4 (int,int ,int) ;

__attribute__((used)) static phy_t
FUNC_5(struct phynode *VAR_4, device_t VAR_5)
{
 struct phy *VAR_6;

 FUNC_2();

 VAR_6 = FUNC_4(sizeof(struct phy), VAR_0, VAR_1 | VAR_2);
 VAR_6->cdev = VAR_5;
 VAR_6->phynode = VAR_4;
 VAR_6->enable_cnt = 0;

 FUNC_1(VAR_4);
 VAR_4->ref_cnt++;
 FUNC_3(&VAR_4->consumers_list, VAR_6, VAR_3);
 FUNC_0(VAR_4);

 return (VAR_6);
}
