
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource_list_entry {scalar_t__ start; scalar_t__ end; scalar_t__ count; struct resource* res; } ;
struct resource {int dummy; } ;
struct ofwbus_softc {struct rman sc_mem_rman; struct rman sc_intr_rman; } ;
typedef scalar_t__ rman_res_t ;
typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;


 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,int,int,struct resource*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct ofwbus_softc* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,char*,int,int) ;
 struct resource_list_entry* FUNC_6 (int ,int,int) ;
 scalar_t__ FUNC_7 (struct resource*) ;
 scalar_t__ FUNC_8 (struct resource*) ;
 int FUNC_9 (struct resource*) ;
 struct resource* FUNC_10 (struct rman*,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_11 (struct resource*,int) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct resource *
FUNC_13(device_t VAR_2, device_t VAR_3, int VAR_4, int *VAR_5,
    rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{
 struct ofwbus_softc *VAR_10;
 struct rman *VAR_11;
 struct resource *VAR_12;
 struct resource_list_entry *VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = FUNC_1(VAR_6, VAR_7);
 VAR_15 = (FUNC_3(VAR_3) != VAR_2);
 VAR_10 = FUNC_4(VAR_2);
 VAR_13 = ((void*)0);
 if (!VAR_15 && VAR_14) {
  VAR_13 = FUNC_6(FUNC_0(VAR_2, VAR_3),
      VAR_4, *VAR_5);
  if (VAR_13 == ((void*)0)) {
   if (VAR_1)
    FUNC_5(VAR_2, "no default resources for "
        "rid = %d, type = %d\n", *VAR_5, VAR_4);
   return (((void*)0));
  }
  VAR_6 = VAR_13->start;
  VAR_8 = FUNC_12(VAR_8, VAR_13->count);
  VAR_7 = FUNC_12(VAR_13->end, VAR_6 + VAR_8 - 1);
 }

 switch (VAR_4) {
 case 129:
  VAR_11 = &VAR_10->sc_intr_rman;
  break;
 case 128:
  VAR_11 = &VAR_10->sc_mem_rman;
  break;
 default:
  return (((void*)0));
 }

 VAR_12 = FUNC_10(VAR_11, VAR_6, VAR_7, VAR_8, VAR_9 & ~VAR_0,
     VAR_3);
 if (VAR_12 == ((void*)0))
  return (((void*)0));
 FUNC_11(VAR_12, *VAR_5);

 if ((VAR_9 & VAR_0) != 0 && FUNC_2(VAR_3, VAR_4,
     *VAR_5, VAR_12) != 0) {
  FUNC_9(VAR_12);
  return (((void*)0));
 }

 if (!VAR_15 && VAR_13 != ((void*)0)) {
  VAR_13->res = VAR_12;
  VAR_13->start = FUNC_8(VAR_12);
  VAR_13->end = FUNC_7(VAR_12);
  VAR_13->count = VAR_13->end - VAR_13->start + 1;
 }

 return (VAR_12);
}
