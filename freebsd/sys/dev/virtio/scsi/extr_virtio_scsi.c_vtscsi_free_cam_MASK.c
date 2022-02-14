
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int * vtscsi_sim; int * vtscsi_path; } ;


 int FUNC_0 (struct vtscsi_softc*) ;
 int FUNC_1 (struct vtscsi_softc*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vtscsi_softc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct vtscsi_softc *VAR_0)
{

 FUNC_0(VAR_0);

 if (VAR_0->vtscsi_path != ((void*)0)) {
  FUNC_4(VAR_0);

  FUNC_6(VAR_0->vtscsi_path);
  VAR_0->vtscsi_path = ((void*)0);

  FUNC_5(FUNC_3(VAR_0->vtscsi_sim));
 }

 if (VAR_0->vtscsi_sim != ((void*)0)) {
  FUNC_2(VAR_0->vtscsi_sim, 1);
  VAR_0->vtscsi_sim = ((void*)0);
 }

 FUNC_1(VAR_0);
}
