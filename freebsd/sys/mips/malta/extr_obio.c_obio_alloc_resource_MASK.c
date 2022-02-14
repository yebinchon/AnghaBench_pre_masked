
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct obio_softc {int oba_addr; int oba_st; struct rman oba_rman; struct rman oba_irq_rman; } ;
typedef int rman_res_t ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;





 scalar_t__ FUNC_0 (int ,int,int,struct resource*) ;
 struct obio_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct resource*) ;
 struct resource* FUNC_3 (struct rman*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct resource*,int ) ;
 int FUNC_5 (struct resource*,int ) ;
 int FUNC_6 (struct resource*,int) ;

__attribute__((used)) static struct resource *
FUNC_7(device_t VAR_0, device_t VAR_1, int VAR_2, int *VAR_3,
    rman_res_t VAR_4, rman_res_t VAR_5, rman_res_t VAR_6, u_int VAR_7)
{
 struct resource *VAR_8;
 struct rman *VAR_9;
 bus_space_tag_t VAR_10 = 0;
 bus_space_handle_t VAR_11 = 0;
 struct obio_softc *VAR_12 = FUNC_1(VAR_0);

 switch (VAR_2) {
 case 129:
  VAR_9 = &VAR_12->oba_irq_rman;
  break;
 case 128:
  return (((void*)0));
 case 130:
  VAR_9 = &VAR_12->oba_rman;
  VAR_10 = VAR_12->oba_st;
  VAR_11 = VAR_12->oba_addr;
  VAR_4 = VAR_11;
  break;
 default:
  return (((void*)0));
 }


 VAR_8 = FUNC_3(VAR_9, VAR_4, VAR_5, VAR_6, VAR_7, VAR_1);
 if (VAR_8 == ((void*)0))
  return (((void*)0));
 if (VAR_2 == 129)
  return (VAR_8);
 FUNC_6(VAR_8, *VAR_3);
 FUNC_5(VAR_8, VAR_10);
 FUNC_4(VAR_8, VAR_11);

 if (0) {
  if (FUNC_0(VAR_1, VAR_2, *VAR_3, VAR_8)) {
   FUNC_2(VAR_8);
   return (((void*)0));
  }
 }
 return (VAR_8);

}
