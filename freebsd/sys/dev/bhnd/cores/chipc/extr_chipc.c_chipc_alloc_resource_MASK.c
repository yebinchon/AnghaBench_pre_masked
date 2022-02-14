
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource_list_entry {scalar_t__ start; scalar_t__ end; int count; struct resource* res; } ;
struct resource {int dummy; } ;
struct chipc_softc {struct chipc_region* core_region; } ;
struct chipc_region {scalar_t__ cr_addr; scalar_t__ cr_end; scalar_t__ cr_count; } ;
typedef scalar_t__ rman_res_t ;
typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int,struct resource*) ;
 struct resource* FUNC_3 (scalar_t__,scalar_t__,int,int*,scalar_t__,scalar_t__,scalar_t__,int) ;
 struct chipc_region* FUNC_4 (struct chipc_softc*,scalar_t__,scalar_t__) ;
 struct rman* FUNC_5 (struct chipc_softc*,int) ;
 int FUNC_6 (struct chipc_softc*,struct chipc_region*,int ) ;
 int FUNC_7 (struct chipc_softc*,struct chipc_region*,int ) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 struct chipc_softc* FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,char*,int,int,int ,...) ;
 struct resource_list_entry* FUNC_12 (int ,int,int) ;
 scalar_t__ FUNC_13 (struct resource*) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (struct resource*) ;
 scalar_t__ FUNC_16 (struct resource*) ;
 int FUNC_17 (struct resource*) ;
 struct resource* FUNC_18 (struct rman*,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_19 (struct resource*,int) ;
 scalar_t__ FUNC_20 (scalar_t__,int ) ;

__attribute__((used)) static struct resource *
FUNC_21(device_t VAR_2, device_t VAR_3, int VAR_4,
    int *VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{
 struct chipc_softc *VAR_10;
 struct chipc_region *VAR_11;
 struct resource_list_entry *VAR_12;
 struct resource *VAR_13;
 struct rman *VAR_14;
 int VAR_15;
 bool VAR_16, VAR_17;

 VAR_10 = FUNC_10(VAR_2);
 VAR_16 = (FUNC_9(VAR_3) != VAR_2);
 VAR_17 = FUNC_1(VAR_6, VAR_7);
 VAR_12 = ((void*)0);


 VAR_14 = FUNC_5(VAR_10, VAR_4);
 if (VAR_14 == ((void*)0)) {

  VAR_13 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8, VAR_9);
  return (VAR_13);
 }


 if (!VAR_16 && VAR_17) {

  VAR_12 = FUNC_12(FUNC_0(VAR_2, VAR_3),
      VAR_4, *VAR_5);
  if (VAR_12 == ((void*)0)) {
   FUNC_11(VAR_2,
       "default resource %#x type %d for child %s "
       "not found\n", *VAR_5, VAR_4,
       FUNC_8(VAR_3));
   return (((void*)0));
  }

  if (VAR_12->res != ((void*)0)) {
   FUNC_11(VAR_2,
       "resource entry %#x type %d for child %s is busy "
       "[%d]\n",
       *VAR_5, VAR_4, FUNC_8(VAR_3),
       FUNC_14(VAR_12->res));

   return (((void*)0));
  }

  VAR_6 = VAR_12->start;
  VAR_7 = VAR_12->end;
  VAR_8 = FUNC_20(VAR_8, VAR_12->count);
 }


 if ((VAR_11 = FUNC_4(VAR_10, VAR_6, VAR_7)) == ((void*)0)) {


  VAR_13 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8, VAR_9);
  return (VAR_13);
 }
 if (VAR_11 == VAR_10->core_region && VAR_11->cr_addr == VAR_6 &&
     VAR_11->cr_end == VAR_7 && VAR_11->cr_count == VAR_8)
 {
  VAR_13 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8, VAR_9);
  return (VAR_13);
 }


 if ((VAR_15 = FUNC_7(VAR_10, VAR_11, VAR_1)))
  return (((void*)0));


 VAR_13 = FUNC_18(VAR_14, VAR_6, VAR_7, VAR_8, VAR_9 & ~VAR_0,
     VAR_3);
 if (VAR_13 == ((void*)0)) {
  FUNC_6(VAR_10, VAR_11, VAR_1);
  return (((void*)0));
 }

 FUNC_19(VAR_13, *VAR_5);


 if (VAR_9 & VAR_0) {
  VAR_15 = FUNC_2(VAR_3, VAR_4, *VAR_5, VAR_13);
  if (VAR_15) {
   FUNC_11(VAR_2,
       "failed to activate entry %#x type %d for "
    "child %s: %d\n",
        *VAR_5, VAR_4, FUNC_8(VAR_3), VAR_15);

   FUNC_6(VAR_10, VAR_11, VAR_1);
   FUNC_17(VAR_13);

   return (((void*)0));
  }
 }


 if (VAR_12 != ((void*)0)) {
  VAR_12->res = VAR_13;
  VAR_12->start = FUNC_16(VAR_13);
  VAR_12->end = FUNC_13(VAR_13);
  VAR_12->count = FUNC_15(VAR_13);
 }

 return (VAR_13);
}
