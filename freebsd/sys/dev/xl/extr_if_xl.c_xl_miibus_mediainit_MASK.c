
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xl_softc {int xl_media; scalar_t__ xl_type; int xl_caps; int xl_dev; int xl_miibus; } ;
struct ifmedia {int dummy; } ;
struct mii_data {struct ifmedia mii_media; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ifmedia*,int,int ,int *) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_12)
{
 struct xl_softc *VAR_13;
 struct mii_data *VAR_14;
 struct ifmedia *VAR_15;

 VAR_13 = FUNC_0(VAR_12);
 VAR_14 = FUNC_0(VAR_13->xl_miibus);
 VAR_15 = &VAR_14->mii_media;

 if (VAR_13->xl_media & (VAR_8 | VAR_7)) {



  if (VAR_13->xl_type == VAR_10 &&
      VAR_13->xl_media == VAR_7) {
   if (VAR_11)
    FUNC_1(VAR_13->xl_dev, "found 10baseFL\n");
   FUNC_2(VAR_15, VAR_3 | VAR_2, 0, ((void*)0));
   FUNC_2(VAR_15, VAR_3 | VAR_2|VAR_5, 0,
       ((void*)0));
   if (VAR_13->xl_caps & VAR_6)
    FUNC_2(VAR_15,
        VAR_3 | VAR_2 | VAR_4, 0, ((void*)0));
  } else {
   if (VAR_11)
    FUNC_1(VAR_13->xl_dev, "found AUI\n");
   FUNC_2(VAR_15, VAR_3 | VAR_1, 0, ((void*)0));
  }
 }

 if (VAR_13->xl_media & VAR_9) {
  if (VAR_11)
   FUNC_1(VAR_13->xl_dev, "found BNC\n");
  FUNC_2(VAR_15, VAR_3 | VAR_0, 0, ((void*)0));
 }
}
