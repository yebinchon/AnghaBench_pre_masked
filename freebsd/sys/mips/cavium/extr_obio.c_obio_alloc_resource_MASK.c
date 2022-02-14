
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct obio_softc {struct rman oba_rman; struct rman oba_irq_rman; } ;
typedef int rman_res_t ;
typedef int device_t ;
typedef int * bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ FUNC_1 (int ,int,int,struct resource*) ;
 struct obio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct resource*) ;
 struct resource* FUNC_5 (struct rman*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct resource*,int ) ;
 int FUNC_7 (struct resource*,int *) ;
 int FUNC_8 (struct resource*,int) ;

__attribute__((used)) static struct resource *
FUNC_9(device_t VAR_3, device_t VAR_4, int VAR_5, int *VAR_6,
    rman_res_t VAR_7, rman_res_t VAR_8, rman_res_t VAR_9, u_int VAR_10)
{
 struct resource *VAR_11;
 struct rman *VAR_12;
 bus_space_tag_t VAR_13 = 0;
 bus_space_handle_t VAR_14 = 0;
 struct obio_softc *VAR_15 = FUNC_2(VAR_3);

 switch (VAR_5) {
 case 129:
  switch (FUNC_3(VAR_4)) {
  case 0:
   VAR_7 = VAR_8 = VAR_0;
   break;
  case 1:
   VAR_7 = VAR_8 = VAR_1;
   break;
  default:
   return (((void*)0));
  }
  VAR_12 = &VAR_15->oba_irq_rman;
  break;
 case 128:
  return (((void*)0));
 case 130:
  VAR_12 = &VAR_15->oba_rman;
  VAR_13 = &VAR_2;
  VAR_14 = FUNC_0(FUNC_3(VAR_4));
  VAR_7 = VAR_14;
  break;
 default:
  return (((void*)0));
 }

 VAR_11 = FUNC_5(VAR_12, VAR_7, VAR_8, VAR_9, VAR_10, VAR_4);
 if (VAR_11 == ((void*)0)) {
  return (((void*)0));
        }
 if (VAR_5 == 129) {
  return (VAR_11);
        }
 FUNC_8(VAR_11, *VAR_6);
 FUNC_7(VAR_11, VAR_13);
 FUNC_6(VAR_11, VAR_14);

 if (0) {
  if (FUNC_1(VAR_4, VAR_5, *VAR_6, VAR_11)) {
   FUNC_4(VAR_11);
   return (((void*)0));
  }
 }
 return (VAR_11);

}
