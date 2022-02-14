
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int * vtscsi_sglist; int vtscsi_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct vtscsi_softc*) ;
 int FUNC_1 (struct vtscsi_softc*) ;
 int FUNC_2 (struct vtscsi_softc*) ;
 struct vtscsi_softc* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vtscsi_softc*) ;
 int FUNC_7 (struct vtscsi_softc*) ;
 int FUNC_8 (struct vtscsi_softc*) ;
 int FUNC_9 (struct vtscsi_softc*) ;
 int FUNC_10 (struct vtscsi_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_1)
{
 struct vtscsi_softc *VAR_2;

 VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_2);
 VAR_2->vtscsi_flags |= VAR_0;
 if (FUNC_4(VAR_1))
  FUNC_10(VAR_2);
 FUNC_2(VAR_2);

 FUNC_6(VAR_2);
 FUNC_7(VAR_2);

 FUNC_8(VAR_2);
 FUNC_9(VAR_2);

 if (VAR_2->vtscsi_sglist != ((void*)0)) {
  FUNC_5(VAR_2->vtscsi_sglist);
  VAR_2->vtscsi_sglist = ((void*)0);
 }

 FUNC_1(VAR_2);

 return (0);
}
