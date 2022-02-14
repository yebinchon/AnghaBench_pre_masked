
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {struct mii_data* mii_pdata; } ;
struct mii_data {int mii_media_active; int mii_media_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_1(struct mii_softc *VAR_5)
{
 struct mii_data *VAR_6 = VAR_5->mii_pdata;

 VAR_6->mii_media_status = VAR_2;
 VAR_6->mii_media_active = VAR_3;
 VAR_6->mii_media_status |= VAR_1;
 VAR_6->mii_media_active |=
     VAR_0 | VAR_4 | FUNC_0(VAR_5);
}
