
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exca_softc {size_t chipset; int putb; int getb; } ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct exca_softc*,int ,int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct exca_softc*) ;

int
FUNC_3(device_t VAR_6, struct exca_softc *VAR_7, bus_space_tag_t VAR_8,
    bus_space_handle_t VAR_9)
{
 int VAR_10;
 int VAR_11;

 VAR_10 = VAR_0;
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  FUNC_1(&VAR_7[VAR_11], VAR_6, VAR_8, VAR_9, VAR_11 * VAR_2);
  VAR_7->getb = VAR_4;
  VAR_7->putb = VAR_5;
  if (FUNC_2(&VAR_7[VAR_11])) {
   FUNC_0(VAR_6, VAR_3[VAR_7[VAR_11].chipset]);
   VAR_10 = 0;
  }
 }
 return (VAR_10);
}
