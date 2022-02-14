
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct resource {int dummy; } ;
struct cbb_softc {int * exca; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_0 (struct cbb_softc*,int,int) ;
 struct cbb_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,struct resource*,int ) ;

int
FUNC_4(device_t VAR_3, device_t VAR_4, int VAR_5, int VAR_6,
    u_long VAR_7)
{
 struct cbb_softc *VAR_8 = FUNC_1(VAR_3);
 struct resource *VAR_9;

 if (VAR_5 != VAR_2)
  return (VAR_0);
 VAR_9 = FUNC_0(VAR_8, VAR_5, VAR_6);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_3,
      "set_res_flags: specified rid not found\n");
  return (VAR_1);
 }
 return (FUNC_3(&VAR_8->exca[0], VAR_9, VAR_7));
}
