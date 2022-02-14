
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gxemul_disk_softc {int sc_size; int * sc_provider; int * sc_geom; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 struct gxemul_disk_softc* FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct gxemul_disk_softc*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct gxemul_disk_softc *VAR_4;
 unsigned VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3);

 VAR_4 = FUNC_0(VAR_3);
 VAR_4->sc_dev = VAR_3;
 VAR_4->sc_geom = ((void*)0);
 VAR_4->sc_provider = ((void*)0);

 FUNC_4(&VAR_2);
 VAR_6 = FUNC_3(VAR_5, &VAR_4->sc_size);
 if (VAR_6 != 0) {
  FUNC_5(&VAR_2);
  return (VAR_6);
 }
 FUNC_5(&VAR_2);

 FUNC_2(VAR_1, VAR_4, VAR_0, ((void*)0));

 return (0);
}
