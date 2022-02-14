
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_flags; int vtnet_act_vq_pairs; int vtnet_requested_vq_pairs; int vtnet_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct vtnet_softc*,int) ;

__attribute__((used)) static void
FUNC_2(struct vtnet_softc *VAR_1)
{
 device_t VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->vtnet_dev;

 if ((VAR_1->vtnet_flags & VAR_0) == 0) {
  VAR_1->vtnet_act_vq_pairs = 1;
  return;
 }

 VAR_3 = VAR_1->vtnet_requested_vq_pairs;

 if (FUNC_1(VAR_1, VAR_3) != 0) {
  FUNC_0(VAR_2,
      "cannot set active queue pairs to %d\n", VAR_3);
  VAR_3 = 1;
 }

 VAR_1->vtnet_act_vq_pairs = VAR_3;
}
