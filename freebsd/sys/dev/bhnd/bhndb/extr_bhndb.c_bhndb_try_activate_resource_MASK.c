
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct bhndb_softc {TYPE_2__* bus_res; int dev; } ;
struct bhndb_region {scalar_t__ priority; scalar_t__ static_regwin; } ;
struct bhndb_dw_alloc {TYPE_1__* win; struct resource* parent_res; scalar_t__ target; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;
typedef scalar_t__ bhndb_priority_t ;
struct TYPE_5__ {scalar_t__ min_prio; int res; } ;
struct TYPE_4__ {scalar_t__ win_size; scalar_t__ win_offset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bhndb_softc*) ;
 int FUNC_1 (struct bhndb_softc*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct bhndb_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,char*) ;
 int VAR_5 ;


 int FUNC_4 (struct bhndb_softc*,struct bhndb_region*,int ,int,int,struct resource*) ;
 int FUNC_5 (TYPE_2__*,struct bhndb_dw_alloc*,struct resource*) ;
 struct bhndb_region* FUNC_6 (TYPE_2__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct bhndb_softc*,int ) ;
 struct resource* FUNC_8 (int ,int,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct resource*,struct resource*,scalar_t__,scalar_t__) ;
 struct bhndb_dw_alloc* FUNC_10 (struct bhndb_softc*,struct resource*) ;
 int FUNC_11 (int ,char*,unsigned long long,...) ;
 int FUNC_12 (struct resource*) ;
 scalar_t__ FUNC_13 (struct resource*) ;
 scalar_t__ FUNC_14 (struct resource*) ;

__attribute__((used)) static int
FUNC_15(struct bhndb_softc *VAR_6, device_t VAR_7, int VAR_8,
    int VAR_9, struct resource *VAR_10, bool *VAR_11)
{
 struct bhndb_region *VAR_12;
 struct bhndb_dw_alloc *VAR_13;
 bhndb_priority_t VAR_14;
 rman_res_t VAR_15, VAR_16;
 rman_res_t VAR_17;
 int VAR_18;

 FUNC_1(VAR_6, VAR_5);

 if (VAR_11 != ((void*)0))
  *VAR_11 = 0;

 switch (VAR_8) {
 case 129:

  return (FUNC_12(VAR_10));

 case 128:

  break;

 default:
  FUNC_11(VAR_6->dev, "unsupported resource type %d\n", VAR_8);
  return (VAR_4);
 }


 FUNC_3(VAR_8 == 128, ("invalid type: %d", VAR_8));

 VAR_15 = FUNC_14(VAR_10);
 VAR_16 = FUNC_13(VAR_10);


 if (FUNC_7(VAR_6, VAR_7) == VAR_0) {
  struct resource *VAR_19;


  VAR_19 = FUNC_8(VAR_6->bus_res->res,
      VAR_8, VAR_15, VAR_16);
  if (VAR_19 == ((void*)0)) {
   FUNC_11(VAR_6->dev, "host resource not found "
        "for 0x%llx-0x%llx\n",
        (unsigned long long) VAR_15,
        (unsigned long long) VAR_15 + VAR_16 - 1);
   return (VAR_2);
  }


  VAR_18 = FUNC_9(VAR_10, VAR_19,
      VAR_15 - FUNC_14(VAR_19), VAR_16);
  if (VAR_18)
   return (VAR_18);


  return (FUNC_12(VAR_10));
 }


 VAR_14 = VAR_1;


 VAR_12 = FUNC_6(VAR_6->bus_res, VAR_15, VAR_16);
 if (VAR_12 != ((void*)0))
  VAR_14 = VAR_12->priority;


 if (VAR_12 && VAR_12->static_regwin) {
  VAR_18 = FUNC_4(VAR_6, VAR_12, VAR_7, VAR_8,
      VAR_9, VAR_10);
  if (VAR_18)
   FUNC_11(VAR_6->dev, "static window allocation "
        "for 0x%llx-0x%llx failed\n",
        (unsigned long long) VAR_15,
        (unsigned long long) VAR_15 + VAR_16 - 1);
  return (VAR_18);
 }



 if (VAR_14 < VAR_6->bus_res->min_prio) {
  if (VAR_11)
   *VAR_11 = 1;

  return (VAR_3);
 }


 FUNC_0(VAR_6); {
  VAR_13 = FUNC_10(VAR_6, VAR_10);
 } FUNC_2(VAR_6);

 if (VAR_13 == ((void*)0)) {
  if (VAR_11)
   *VAR_11 = 1;
  return (VAR_3);
 }


 VAR_17 = VAR_13->win->win_offset;
 VAR_17 += VAR_15 - VAR_13->target;

 VAR_18 = FUNC_9(VAR_10, VAR_13->parent_res, VAR_17,
     VAR_13->win->win_size);
 if (VAR_18)
  goto failed;


 if ((VAR_18 = FUNC_12(VAR_10)))
  goto failed;

 return (0);

failed:

 FUNC_0(VAR_6);
 FUNC_5(VAR_6->bus_res, VAR_13, VAR_10);
 FUNC_2(VAR_6);

 return (VAR_18);
}
