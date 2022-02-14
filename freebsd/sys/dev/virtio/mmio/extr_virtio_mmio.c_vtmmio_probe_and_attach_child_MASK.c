
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtmmio_softc {int * vtmmio_child_dev; int * dev; } ;
typedef int * device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct vtmmio_softc*) ;
 int FUNC_5 (struct vtmmio_softc*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(struct vtmmio_softc *VAR_5)
{
 device_t VAR_6, VAR_7;

 VAR_6 = VAR_5->dev;
 VAR_7 = VAR_5->vtmmio_child_dev;

 if (VAR_7 == ((void*)0))
  return;

 if (FUNC_2(VAR_7) != VAR_0) {
  return;
 }

 if (FUNC_3(VAR_7) != 0) {
  return;
 }

 FUNC_6(VAR_6, VAR_2);
 if (FUNC_1(VAR_7) != 0) {
  FUNC_6(VAR_6, VAR_4);
  FUNC_5(VAR_5);
  FUNC_4(VAR_5);

  FUNC_6(VAR_6, VAR_1);
 } else {
  FUNC_6(VAR_6, VAR_3);
  FUNC_0(VAR_7);
 }
}
