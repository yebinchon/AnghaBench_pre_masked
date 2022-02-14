
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct xl_softc {scalar_t__ xl_type; int xl_miibus; } ;
struct mii_data {int mii_media_active; } ;
typedef int device_t ;


 int FUNC_0 (struct xl_softc*,int ) ;
 int FUNC_1 (struct xl_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct xl_softc*) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_6)
{
 struct xl_softc *VAR_7;
 struct mii_data *VAR_8;
 uint8_t VAR_9;

 VAR_7 = FUNC_4(VAR_6);
 VAR_8 = FUNC_4(VAR_7->xl_miibus);

 FUNC_5(VAR_7);


 FUNC_3(3);
 VAR_9 = FUNC_0(VAR_7, VAR_5);
 if ((FUNC_2(VAR_8->mii_media_active) & VAR_1) != 0) {
  VAR_9 |= VAR_2;
  if (VAR_7->xl_type == VAR_4) {
   if ((FUNC_2(VAR_8->mii_media_active) &
       VAR_0) != 0)
    VAR_9 |= VAR_3;
   else
    VAR_9 &= ~VAR_3;
  }
 } else {
  VAR_9 &= ~VAR_2;
  if (VAR_7->xl_type == VAR_4)
   VAR_9 &= ~VAR_3;
 }
 FUNC_1(VAR_7, VAR_5, VAR_9);
}
