
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_data {int mii_media_active; } ;
struct cgem_softc {int mii_media_active; int ref_clk_num; int dev; } ;


 int FUNC_0 (struct cgem_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cgem_softc*,int ) ;
 int FUNC_3 (struct cgem_softc*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct cgem_softc *VAR_5, struct mii_data *VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;

 FUNC_0(VAR_5);


 VAR_7 = FUNC_2(VAR_5, VAR_0);
 VAR_7 &= ~(VAR_3 | VAR_2 |
       VAR_1);

 switch (FUNC_1(VAR_6->mii_media_active)) {
 case 129:
  VAR_7 |= (VAR_3 |
       VAR_2);
  VAR_8 = 125000000;
  break;
 case 128:
  VAR_7 |= VAR_3;
  VAR_8 = 25000000;
  break;
 default:
  VAR_8 = 2500000;
 }

 if ((VAR_6->mii_media_active & VAR_4) != 0)
  VAR_7 |= VAR_1;

 FUNC_3(VAR_5, VAR_0, VAR_7);


 if (FUNC_4(VAR_5->ref_clk_num, VAR_8))
  FUNC_5(VAR_5->dev, "cgem_mediachange: "
         "could not set ref clk%d to %d.\n",
         VAR_5->ref_clk_num, VAR_8);

 VAR_5->mii_media_active = VAR_6->mii_media_active;
}
