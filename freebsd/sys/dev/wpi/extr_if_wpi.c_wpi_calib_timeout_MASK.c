
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpi_softc {int calib_to; } ;


 int FUNC_0 (int *,int,void (*) (void*),struct wpi_softc*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct wpi_softc*) ;
 int FUNC_2 (struct wpi_softc*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct wpi_softc *VAR_2 = VAR_1;

 if (FUNC_1(VAR_2) == 0)
  return;

 FUNC_2(VAR_2);

 FUNC_0(&VAR_2->calib_to, 60*VAR_0, FUNC_3, VAR_2);
}
