
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct its_cmd {int dummy; } ;
struct gicv3_its_softc {size_t sc_its_cmd_next_idx; struct its_cmd* sc_its_cmd_base; int sc_its_cmd_lock; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gicv3_its_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct gicv3_its_softc*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static struct its_cmd *
FUNC_5(device_t VAR_2)
{
 struct gicv3_its_softc *VAR_3;
 struct its_cmd *VAR_4;
 size_t VAR_5;

 VAR_3 = FUNC_1(VAR_2);







 VAR_5 = 1000000;

 FUNC_4(&VAR_3->sc_its_cmd_lock, VAR_1);
 while (FUNC_3(VAR_3)) {
  if (VAR_5-- == 0) {

   FUNC_2(VAR_2,
       "Timeout while waiting for free command\n");
   return (((void*)0));
  }
  FUNC_0(1);
 }

 VAR_4 = &VAR_3->sc_its_cmd_base[VAR_3->sc_its_cmd_next_idx];
 VAR_3->sc_its_cmd_next_idx++;
 VAR_3->sc_its_cmd_next_idx %= VAR_0 / sizeof(struct its_cmd);

 return (VAR_4);
}
