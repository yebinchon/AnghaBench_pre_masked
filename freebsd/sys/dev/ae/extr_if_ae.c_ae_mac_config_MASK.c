
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct mii_data {int mii_media_active; } ;
struct TYPE_6__ {int miibus; } ;
typedef TYPE_1__ ae_softc_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 struct mii_data* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(ae_softc_t *VAR_3)
{
 struct mii_data *VAR_4;
 uint32_t VAR_5;

 FUNC_0(VAR_3);

 VAR_4 = FUNC_4(VAR_3->miibus);
 VAR_5 = FUNC_1(VAR_3, VAR_1);
 VAR_5 &= ~VAR_0;


 if ((FUNC_3(VAR_4->mii_media_active) & VAR_2) != 0)
  VAR_5 |= VAR_0;

 FUNC_2(VAR_3, VAR_1, VAR_5);
}
