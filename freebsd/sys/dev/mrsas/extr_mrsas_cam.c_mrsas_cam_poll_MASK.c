
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int msix_vectors; } ;
struct cam_sim {int dummy; } ;


 scalar_t__ FUNC_0 (struct cam_sim*) ;
 int FUNC_1 (struct mrsas_softc*,int) ;

__attribute__((used)) static void
FUNC_2(struct cam_sim *VAR_0)
{
 int VAR_1;
 struct mrsas_softc *VAR_2 = (struct mrsas_softc *)FUNC_0(VAR_0);

 if (VAR_2->msix_vectors != 0){
  for (VAR_1=0; VAR_1<VAR_2->msix_vectors; VAR_1++){
   FUNC_1(VAR_2, VAR_1);
  }
 } else {
  FUNC_1(VAR_2, 0);
 }
}
