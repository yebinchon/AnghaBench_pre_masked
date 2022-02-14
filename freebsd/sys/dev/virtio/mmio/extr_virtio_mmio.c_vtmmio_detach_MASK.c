
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtmmio_softc {int ** res; int * vtmmio_child_dev; } ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int *,int *) ;
 struct vtmmio_softc* FUNC_2 (int *) ;
 int FUNC_3 (struct vtmmio_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct vtmmio_softc *VAR_2;
 device_t VAR_3;
 int VAR_4;

 VAR_2 = FUNC_2(VAR_1);

 if ((VAR_3 = VAR_2->vtmmio_child_dev) != ((void*)0)) {
  VAR_4 = FUNC_1(VAR_1, VAR_3);
  if (VAR_4)
   return (VAR_4);
  VAR_2->vtmmio_child_dev = ((void*)0);
 }

 FUNC_3(VAR_2);

 if (VAR_2->res[0] != ((void*)0)) {
  FUNC_0(VAR_1, VAR_0, 0,
      VAR_2->res[0]);
  VAR_2->res[0] = ((void*)0);
 }

 return (0);
}
