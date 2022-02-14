
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct resource {int dummy; } ;
struct cbb_softc {int * exca; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (struct cbb_softc*,int ,int) ;
 struct cbb_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,struct resource*,int ,int *) ;

int
FUNC_4(device_t VAR_2, device_t VAR_3, int VAR_4,
    uint32_t VAR_5, uint32_t *VAR_6)
{
 struct cbb_softc *VAR_7 = FUNC_1(VAR_2);
 struct resource *VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_1, VAR_4);
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_2,
      "set_memory_offset: specified rid not found\n");
  return (VAR_0);
 }
 return (FUNC_3(&VAR_7->exca[0], VAR_8, VAR_5, VAR_6));
}
