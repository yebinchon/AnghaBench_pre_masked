
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpi_softc {int sc_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct wpi_softc*,int ) ;
 int FUNC_2 (struct wpi_softc*,int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct wpi_softc *VAR_5)
{
 int VAR_6;


 FUNC_2(VAR_5, VAR_1, VAR_3);


 for (VAR_6 = 0; VAR_6 < 1000; VAR_6++) {
  if ((FUNC_1(VAR_5, VAR_1) &
      (VAR_2 | VAR_4)) ==
      VAR_2)
   return 0;
  FUNC_0(10);
 }

 FUNC_3(VAR_5->sc_dev, "could not lock memory\n");

 return VAR_0;
}
