
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sis_softc {int dummy; } ;
typedef int * device_t ;
typedef int * caddr_t ;
typedef int bus_space_tag_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int,int) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct sis_softc *VAR_1, device_t VAR_2, caddr_t VAR_3, int VAR_4, int VAR_5)
{
 device_t VAR_6;
 uint8_t VAR_7;
 int VAR_8;
 bus_space_tag_t VAR_9;

 VAR_6 = FUNC_4(VAR_2);
 if (VAR_6 == ((void*)0))
  return;
 VAR_7 = FUNC_2(VAR_6, 0x48, 1);
 FUNC_3(VAR_6, 0x48, VAR_7|0x40, 1);



 VAR_9 = VAR_0;


 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  FUNC_1(VAR_9, 0x0, 0x70, VAR_8 + VAR_4);
  *(VAR_3 + VAR_8) = FUNC_0(VAR_9, 0x0, 0x71);
 }

 FUNC_3(VAR_6, 0x48, VAR_7 & ~0x40, 1);
}
