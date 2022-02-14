
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct sbni_softc {TYPE_1__* slave_sc; scalar_t__ io_res; int io_rid; } ;
typedef int device_t ;
struct TYPE_3__ {int io_off; scalar_t__ io_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ) ;
 struct sbni_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_6 (int,int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct sbni_softc*) ;
 int FUNC_11 (struct sbni_softc*) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_11)
{
 struct sbni_softc *VAR_12;
 u_int32_t VAR_13;

 VAR_13 = VAR_9;
 if (FUNC_9(VAR_11) != VAR_8 ||
     FUNC_7(VAR_11) != VAR_7)
  return (VAR_2);

 VAR_12 = FUNC_2(VAR_11);
 if (FUNC_8(VAR_11) == 2) {
  VAR_13 <<= 1;
  VAR_12->slave_sc = FUNC_6(sizeof(struct sbni_softc),
          VAR_3, VAR_4 | VAR_5);
  if (!VAR_12->slave_sc)
   return (VAR_1);
  FUNC_4(VAR_11, "Granch SBNI12/PCI Dual adapter");
 } else
  FUNC_4(VAR_11, "Granch SBNI12/PCI adapter");

 VAR_12->io_rid = FUNC_0(0);
  VAR_12->io_res = FUNC_1(VAR_11, VAR_10,
         &VAR_12->io_rid, VAR_6);
 if (!VAR_12->io_res) {
  FUNC_3(VAR_11, "cannot allocate io ports!\n");
  if (VAR_12->slave_sc)
   FUNC_5(VAR_12->slave_sc, VAR_3);
  return (VAR_0);
 }

 if (VAR_12->slave_sc) {
  VAR_12->slave_sc->io_res = VAR_12->io_res;
  VAR_12->slave_sc->io_off = 4;
 }
 if (FUNC_10(VAR_12) != 0) {
  FUNC_11(VAR_12);
  if (VAR_12->slave_sc)
   FUNC_5(VAR_12->slave_sc, VAR_3);
  return (VAR_2);
 }

 return (0);
}
