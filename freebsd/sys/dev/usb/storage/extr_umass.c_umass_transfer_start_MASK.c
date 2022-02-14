
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct umass_softc {size_t sc_last_xfer_index; scalar_t__* sc_xfer; } ;


 int FUNC_0 (struct umass_softc*,int ,char*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct umass_softc*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct umass_softc *VAR_1, uint8_t VAR_2)
{
 FUNC_0(VAR_1, VAR_0, "transfer index = "
     "%d\n", VAR_2);

 if (VAR_1->sc_xfer[VAR_2]) {
  VAR_1->sc_last_xfer_index = VAR_2;
  FUNC_2(VAR_1->sc_xfer[VAR_2]);
 } else {
  FUNC_1(VAR_1);
 }
}
