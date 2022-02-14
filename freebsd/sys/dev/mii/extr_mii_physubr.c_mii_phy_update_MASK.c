
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {scalar_t__ mii_media_active; scalar_t__ mii_media_status; int mii_dev; struct mii_data* mii_pdata; } ;
struct mii_data {scalar_t__ mii_media_active; scalar_t__ mii_media_status; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

void
FUNC_2(struct mii_softc *VAR_1, int VAR_2)
{
 struct mii_data *VAR_3 = VAR_1->mii_pdata;

 if (VAR_1->mii_media_active != VAR_3->mii_media_active ||
     VAR_2 == VAR_0) {
  FUNC_1(VAR_1->mii_dev);
  VAR_1->mii_media_active = VAR_3->mii_media_active;
 }
 if (VAR_1->mii_media_status != VAR_3->mii_media_status) {
  FUNC_0(VAR_1->mii_dev);
  VAR_1->mii_media_status = VAR_3->mii_media_status;
 }
}
