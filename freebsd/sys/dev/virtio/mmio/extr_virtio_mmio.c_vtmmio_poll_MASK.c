
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtmmio_softc {int * platform; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 struct vtmmio_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0)
{
 struct vtmmio_softc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->platform != ((void*)0))
  FUNC_0(VAR_1->platform);
}
