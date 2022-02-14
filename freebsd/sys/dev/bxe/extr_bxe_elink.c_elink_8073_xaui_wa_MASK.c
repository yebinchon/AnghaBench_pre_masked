
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;

__attribute__((used)) static elink_status_t FUNC_3(struct bxe_softc *VAR_6, struct elink_phy *VAR_7)
{
 uint16_t VAR_8, VAR_9, VAR_10 ;

 FUNC_2(VAR_6, VAR_7,
   VAR_2,
   VAR_3, &VAR_8);

 if (VAR_8 > 0) {

  return VAR_1;
 }






 for (VAR_9 = 0; VAR_9 < 1000; VAR_9++) {
  FUNC_2(VAR_6, VAR_7,
    VAR_2,
    VAR_4,
    &VAR_8);




  if (!(VAR_8 & (1<<14)) || !(VAR_8 & (1<<13))) {
   FUNC_1(VAR_6, "XAUI work-around not required\n");
   return VAR_1;
  } else if (!(VAR_8 & (1<<15))) {
   FUNC_1(VAR_6, "bit 15 went off\n");





   for (VAR_10 = 0; VAR_10 < 1000; VAR_10++) {
    FUNC_2(VAR_6, VAR_7,
     VAR_2,
     VAR_5, &VAR_8);
    if (VAR_8 & (1<<15)) {
     FUNC_1(VAR_6,
       "XAUI workaround has completed\n");
     return VAR_1;
     }
     FUNC_0(1000 * 3);
   }
   break;
  }
  FUNC_0(1000 * 3);
 }
 FUNC_1(VAR_6, "Warning: XAUI work-around timeout !!!\n");
 return VAR_0;
}
