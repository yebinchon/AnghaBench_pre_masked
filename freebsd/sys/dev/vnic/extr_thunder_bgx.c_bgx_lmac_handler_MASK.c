
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmac {int last_link; int last_duplex; int last_speed; int link_up; int check_link; scalar_t__ is_sgmii; int lmacid; int phy_if_dev; } ;


 int FUNC_0 (int ,int ,int*,int*,int*) ;
 int FUNC_1 (struct lmac*) ;
 int FUNC_2 (struct lmac*) ;
 int FUNC_3 (int *,int,void (*) (void*),struct lmac*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct lmac *VAR_2;
 int VAR_3, VAR_4, VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 VAR_2 = (struct lmac *)VAR_1;

 VAR_7 = FUNC_0(VAR_2->phy_if_dev, VAR_2->lmacid,
     &VAR_3, &VAR_4, &VAR_5);
 if (VAR_7 != 0)
  goto out;

 if (!VAR_3 && VAR_2->last_link)
  VAR_6 = -1;

 if (VAR_3 &&
     (VAR_2->last_duplex != VAR_4 ||
      VAR_2->last_link != VAR_3 ||
      VAR_2->last_speed != VAR_5)) {
   VAR_6 = 1;
 }

 VAR_2->last_link = VAR_3;
 VAR_2->last_speed = VAR_5;
 VAR_2->last_duplex = VAR_4;

 if (!VAR_6)
  goto out;

 if (VAR_6 > 0)
  VAR_2->link_up = 1;
 else
  VAR_2->link_up = 0;

 if (VAR_2->is_sgmii)
  FUNC_1(VAR_2);
 else
  FUNC_2(VAR_2);

out:
 FUNC_3(&VAR_2->check_link, VAR_0 * 2, FUNC_4, VAR_2);
}
