
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_status; scalar_t__ mii_media_active; } ;
struct cgem_softc {scalar_t__ mii_media_active; int miibus; } ;
typedef int device_t ;


 int FUNC_0 (struct cgem_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cgem_softc*,struct mii_data*) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_2)
{
 struct cgem_softc *VAR_3 = FUNC_2(VAR_2);
 struct mii_data *VAR_4 = FUNC_2(VAR_3->miibus);

 FUNC_0(VAR_3);

 if ((VAR_4->mii_media_status & (VAR_0 | VAR_1)) ==
     (VAR_0 | VAR_1) &&
     VAR_3->mii_media_active != VAR_4->mii_media_active)
  FUNC_1(VAR_3, VAR_4);
}
