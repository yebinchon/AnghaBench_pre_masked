
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int es_nvlangroups; int es_nports; } ;
struct mtkswitch_softc {scalar_t__ sc_switchtype; int numports; int valid_vlans; TYPE_1__ info; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtkswitch_softc*) ;
 int FUNC_1 (struct mtkswitch_softc*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mtkswitch_softc*,int ) ;
 int FUNC_4 (struct mtkswitch_softc*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct mtkswitch_softc*,int ,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int) ;
 int VAR_5 ;
 int FUNC_10 (int) ;
 int VAR_6 ;
 int FUNC_11 (int) ;
 int VAR_7 ;
 int FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(struct mtkswitch_softc *VAR_8)
{
 uint32_t VAR_9, VAR_10;
 int VAR_11;

 FUNC_1(VAR_8, VAR_0);
 FUNC_0(VAR_8);


 for (VAR_11 = 0; VAR_11 < VAR_8->info.es_nvlangroups; VAR_11++) {

  if (VAR_11 % 4 == 0) {
   FUNC_8(VAR_8, FUNC_6(VAR_11), 0);
   if (VAR_8->sc_switchtype != VAR_2)
    FUNC_8(VAR_8, FUNC_7(VAR_11), 0);
  }

  VAR_9 = FUNC_3(VAR_8, FUNC_5(VAR_11));
  VAR_9 &= ~(VAR_5 << FUNC_10(VAR_11));
  VAR_9 |= ((VAR_11 + 1) << FUNC_10(VAR_11));
  FUNC_8(VAR_8, FUNC_5(VAR_11), VAR_9);
 }


 VAR_10 = 0;
 VAR_9 = FUNC_3(VAR_8, FUNC_6(VAR_10));
 VAR_9 &= ~(VAR_6 << FUNC_11(VAR_10));
 VAR_9 |= (((1<<VAR_8->numports)-1) << FUNC_11(VAR_10));
 FUNC_8(VAR_8, FUNC_6(VAR_10), VAR_9);
 if (VAR_8->sc_switchtype != VAR_2) {
  VAR_9 = FUNC_3(VAR_8, FUNC_7(VAR_10));
  VAR_9 &= ~(VAR_7 << FUNC_12(VAR_10));
  VAR_9 |= (((1<<VAR_8->numports)-1) << FUNC_12(VAR_10));
  FUNC_8(VAR_8, FUNC_7(VAR_10), VAR_9);
 }
 VAR_9 = FUNC_3(VAR_8, VAR_1);
 if (VAR_8->sc_switchtype != VAR_2)
  VAR_9 |= VAR_3;
 VAR_9 |= ((1<<VAR_8->numports)-1);
 FUNC_8(VAR_8, VAR_1, VAR_9);


 VAR_8->valid_vlans = (1<<0);


 VAR_10 = 1;
 for (VAR_11 = 0; VAR_11 < VAR_8->info.es_nports; VAR_11++) {
  VAR_9 = FUNC_3(VAR_8, FUNC_2(VAR_11));
  VAR_9 &= ~(VAR_4 << FUNC_9(VAR_11));
  VAR_9 |= (VAR_10 << FUNC_9(VAR_11));
  FUNC_8(VAR_8, FUNC_2(VAR_11), VAR_9);
 }

 FUNC_4(VAR_8);
}
