
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint64_t ;
struct lmac {int * phy_if_dev; int phyaddr; int check_link_mtx; int check_link; } ;
struct bgx {scalar_t__ lmac_type; int dev; struct lmac* lmac; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (struct bgx*,size_t) ;
 int FUNC_2 (struct bgx*,size_t,int ) ;
 int FUNC_3 (struct bgx*,size_t,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,size_t) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct bgx *VAR_5, uint8_t VAR_6)
{
 struct lmac *VAR_7;
 uint64_t VAR_8;

 VAR_7 = &VAR_5->lmac[VAR_6];


 FUNC_4(&VAR_7->check_link);
 FUNC_6(&VAR_7->check_link_mtx);

 VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_0);
 VAR_8 &= ~(1 << 15);
 FUNC_3(VAR_5, VAR_6, VAR_0, VAR_8);
 FUNC_1(VAR_5, VAR_6);

 if ((VAR_5->lmac_type != VAR_3) &&
     (VAR_5->lmac_type != VAR_4) &&
     (VAR_5->lmac_type != VAR_2) &&
     (VAR_5->lmac_type != VAR_1)) {
  if (VAR_7->phy_if_dev == ((void*)0)) {
   FUNC_5(VAR_5->dev,
       "LMAC%d missing interface to PHY\n", VAR_6);
   return;
  }
  if (FUNC_0(VAR_7->phy_if_dev, VAR_7->phyaddr,
      VAR_6) != 0) {
   FUNC_5(VAR_5->dev,
       "LMAC%d could not disconnect PHY\n", VAR_6);
   return;
  }
  VAR_7->phy_if_dev = ((void*)0);
 }
}
