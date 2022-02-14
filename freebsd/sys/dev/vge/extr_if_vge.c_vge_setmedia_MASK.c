
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vge_softc {int vge_dev; int vge_miibus; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;


 int FUNC_0 (struct vge_softc*,int ,int ) ;
 int FUNC_1 (struct vge_softc*,int ,int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mii_data* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct vge_softc *VAR_5)
{
 struct mii_data *VAR_6;
 struct ifmedia_entry *VAR_7;

 VAR_6 = FUNC_3(VAR_5->vge_miibus);
 VAR_7 = VAR_6->mii_media.ifm_cur;
 switch (FUNC_2(VAR_7->ifm_media)) {
 case 128:
  FUNC_0(VAR_5, VAR_2, VAR_4);
  FUNC_0(VAR_5, VAR_2, VAR_3);
  break;
 case 131:
  FUNC_1(VAR_5, VAR_2, VAR_4);
  FUNC_0(VAR_5, VAR_2, VAR_3);
  break;
 case 130:
 case 129:
  FUNC_1(VAR_5, VAR_2, VAR_4);
  if ((VAR_7->ifm_media & VAR_1) == VAR_0) {
   FUNC_1(VAR_5, VAR_2, VAR_3);
  } else {
   FUNC_0(VAR_5, VAR_2, VAR_3);
  }
  break;
 default:
  FUNC_4(VAR_5->vge_dev, "unknown media type: %x\n",
      FUNC_2(VAR_7->ifm_media));
  break;
 }
}
