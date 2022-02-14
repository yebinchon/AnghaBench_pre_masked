
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int (* mtkswitch_read ) (struct mtkswitch_softc*,int ) ;int (* mtkswitch_vlan_set_pvid ) (struct mtkswitch_softc*,int,int) ;int (* mtkswitch_write ) (struct mtkswitch_softc*,int ,int) ;} ;
struct TYPE_3__ {int es_nvlangroups; int es_nports; } ;
struct mtkswitch_softc {scalar_t__ sc_switchtype; TYPE_2__ hal; TYPE_1__ info; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtkswitch_softc*) ;
 int FUNC_1 (struct mtkswitch_softc*,int ) ;
 int FUNC_2 (struct mtkswitch_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct mtkswitch_softc*,int) ;
 int FUNC_7 (struct mtkswitch_softc*,int ) ;
 int FUNC_8 (struct mtkswitch_softc*,int ,int) ;
 int FUNC_9 (struct mtkswitch_softc*,int ,int) ;
 int FUNC_10 (struct mtkswitch_softc*,int ,int) ;
 int FUNC_11 (struct mtkswitch_softc*,int ,int) ;
 int FUNC_12 (struct mtkswitch_softc*,int,int) ;

__attribute__((used)) static void
FUNC_13(struct mtkswitch_softc *VAR_11)
{
 uint32_t VAR_12, VAR_13, VAR_14;

 FUNC_1(VAR_11, VAR_0);
 FUNC_0(VAR_11);

 for (VAR_14 = 0; VAR_14 < VAR_11->info.es_nvlangroups; VAR_14++) {
  FUNC_6(VAR_11, VAR_14);
  if (VAR_11->sc_switchtype == VAR_4) {
   VAR_12 = VAR_11->hal.mtkswitch_read(VAR_11, FUNC_3(VAR_14));
   VAR_12 &= ~(VAR_10 << FUNC_5(VAR_14));
   VAR_12 |= ((VAR_14 + 1) << FUNC_5(VAR_14));
   VAR_11->hal.mtkswitch_write(VAR_11, FUNC_3(VAR_14), VAR_12);
  }
 }


 if (VAR_11->sc_switchtype == VAR_4) {

  VAR_13 = 0;
 } else {

  VAR_13 = 1;
 }
 VAR_12 = VAR_5 | VAR_7 | VAR_6;
 for (VAR_14 = 0; VAR_14 < VAR_11->info.es_nports; VAR_14++)
  VAR_12 |= FUNC_4(VAR_14);
 VAR_11->hal.mtkswitch_write(VAR_11, VAR_1, VAR_12);
 VAR_11->hal.mtkswitch_write(VAR_11, VAR_2, 0);
 VAR_12 = VAR_8 | VAR_9 | VAR_13;
 VAR_11->hal.mtkswitch_write(VAR_11, VAR_3, VAR_12);


 for (VAR_14 = 0; VAR_14 < VAR_11->info.es_nports; VAR_14++) {
  VAR_11->hal.mtkswitch_vlan_set_pvid(VAR_11, VAR_14, 1);
 }

 FUNC_2(VAR_11);
}
