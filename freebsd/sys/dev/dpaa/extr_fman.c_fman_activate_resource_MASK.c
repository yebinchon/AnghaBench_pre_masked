
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {int nranges; } ;
struct fman_softc {struct resource* mem_res; int rman; TYPE_1__ sc_base; } ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int FUNC_1 (int ,int ,scalar_t__,int ,int *) ;
 struct fman_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*) ;
 scalar_t__ FUNC_7 (struct resource*) ;
 scalar_t__ FUNC_8 (struct resource*,int *) ;
 int FUNC_9 (struct resource*,int ) ;
 int FUNC_10 (struct resource*,int ) ;

int
FUNC_11(device_t VAR_2, device_t VAR_3, int VAR_4, int VAR_5,
    struct resource *VAR_6)
{
 struct fman_softc *VAR_7;
 bus_space_tag_t VAR_8;
 bus_space_handle_t VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = FUNC_2(VAR_2);
 if (VAR_4 != VAR_1) {
  for (VAR_10 = 0; VAR_10 < VAR_7->sc_base.nranges; VAR_10++) {
   if (FUNC_8(VAR_6, &VAR_7->rman) != 0) {
    VAR_8 = FUNC_5(VAR_7->mem_res);
    VAR_11 = FUNC_1(VAR_8,
        FUNC_4(VAR_7->mem_res),
        FUNC_7(VAR_6) -
        FUNC_7(VAR_7->mem_res),
        FUNC_6(VAR_6), &VAR_9);
    if (VAR_11 != 0)
     return (VAR_11);
    FUNC_10(VAR_6, VAR_8);
    FUNC_9(VAR_6, VAR_9);
    return (FUNC_3(VAR_6));
   }
  }
  return (VAR_0);
 }
 return (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6));
}
