
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource_list_entry {int count; scalar_t__ end; scalar_t__ start; struct resource* res; } ;
struct resource {int dummy; } ;
struct bhndb_softc {int parent_dev; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 struct resource* FUNC_0 (int ,int ,int,int*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 struct rman* FUNC_3 (struct bhndb_softc*,int ,int) ;
 int FUNC_4 (int ,int,int,struct resource*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct bhndb_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int,int,int ,...) ;
 struct resource_list_entry* FUNC_9 (int ,int,int) ;
 scalar_t__ FUNC_10 (struct resource*) ;
 int FUNC_11 (struct resource*) ;
 scalar_t__ FUNC_12 (struct resource*) ;
 int FUNC_13 (struct resource*) ;
 struct resource* FUNC_14 (struct rman*,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_15 (struct resource*,int) ;
 scalar_t__ FUNC_16 (scalar_t__,int ) ;

__attribute__((used)) static struct resource *
FUNC_17(device_t VAR_1, device_t VAR_2, int VAR_3,
    int *VAR_4, rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{
 struct bhndb_softc *VAR_9;
 struct resource_list_entry *VAR_10;
 struct resource *VAR_11;
 struct rman *VAR_12;
 int VAR_13;
 bool VAR_14, VAR_15;

 VAR_9 = FUNC_7(VAR_1);
 VAR_14 = (FUNC_6(VAR_2) != VAR_1);
 VAR_15 = FUNC_2(VAR_5, VAR_6);
 VAR_10 = ((void*)0);


 VAR_12 = FUNC_3(VAR_9, VAR_2, VAR_3);
 if (VAR_12 == ((void*)0)) {


  return (FUNC_0(FUNC_6(VAR_9->parent_dev),
      VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));
 }


 if (!VAR_14 && VAR_15) {

  VAR_10 = FUNC_9(FUNC_1(VAR_1, VAR_2),
      VAR_3, *VAR_4);
  if (VAR_10 == ((void*)0)) {
   FUNC_8(VAR_1,
       "default resource %#x type %d for child %s "
       "not found\n", *VAR_4, VAR_3,
       FUNC_5(VAR_2));

   return (((void*)0));
  }

  if (VAR_10->res != ((void*)0)) {
   FUNC_8(VAR_1,
       "resource entry %#x type %d for child %s is busy\n",
       *VAR_4, VAR_3, FUNC_5(VAR_2));

   return (((void*)0));
  }

  VAR_5 = VAR_10->start;
  VAR_6 = VAR_10->end;
  VAR_7 = FUNC_16(VAR_7, VAR_10->count);
 }


 if (VAR_5 > VAR_6 || VAR_7 > ((VAR_6 - VAR_5) + 1))
  return (((void*)0));


 VAR_11 = FUNC_14(VAR_12, VAR_5, VAR_6, VAR_7, VAR_8 & ~VAR_0,
     VAR_2);
 if (VAR_11 == ((void*)0))
  return (((void*)0));

 FUNC_15(VAR_11, *VAR_4);


 if (VAR_8 & VAR_0) {
  VAR_13 = FUNC_4(VAR_2, VAR_3, *VAR_4, VAR_11);
  if (VAR_13) {
   FUNC_8(VAR_1,
       "failed to activate entry %#x type %d for "
    "child %s: %d\n",
        *VAR_4, VAR_3, FUNC_5(VAR_2), VAR_13);

   FUNC_13(VAR_11);

   return (((void*)0));
  }
 }


 if (VAR_10 != ((void*)0)) {
  VAR_10->res = VAR_11;
  VAR_10->start = FUNC_12(VAR_11);
  VAR_10->end = FUNC_10(VAR_11);
  VAR_10->count = FUNC_11(VAR_11);
 }

 return (VAR_11);
}
