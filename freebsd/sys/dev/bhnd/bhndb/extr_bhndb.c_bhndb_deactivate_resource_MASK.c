
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct bhndb_softc {int bus_res; int parent_dev; } ;
struct bhndb_dw_alloc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct bhndb_softc*) ;
 int FUNC_1 (struct bhndb_softc*) ;
 int FUNC_2 (int ,int ,int,int,struct resource*) ;
 int VAR_1 ;


 struct bhndb_dw_alloc* FUNC_3 (int ,struct resource*) ;
 int FUNC_4 (int ,struct bhndb_dw_alloc*,struct resource*) ;
 int FUNC_5 (struct bhndb_softc*,int ) ;
 struct rman* FUNC_6 (struct bhndb_softc*,int ,int) ;
 int FUNC_7 (int ) ;
 struct bhndb_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (struct resource*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_2, device_t VAR_3, int VAR_4,
    int VAR_5, struct resource *VAR_6)
{
 struct bhndb_dw_alloc *VAR_7;
 struct bhndb_softc *VAR_8;
 struct rman *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_8(VAR_2);



 VAR_9 = FUNC_6(VAR_8, VAR_3, VAR_4);
 if (VAR_9 == ((void*)0)) {
  return (FUNC_2(
      FUNC_7(VAR_8->parent_dev), VAR_3, VAR_4, VAR_5, VAR_6));
 }


 if ((VAR_10 = FUNC_10(VAR_6)))
  return (VAR_10);

 switch (VAR_4) {
 case 129:

  return (0);

 case 128:

  if (FUNC_5(VAR_8, VAR_3) == VAR_0) {
   FUNC_0(VAR_8);
   VAR_7 = FUNC_3(VAR_8->bus_res, VAR_6);
   if (VAR_7 != ((void*)0))
    FUNC_4(VAR_8->bus_res, VAR_7, VAR_6);
   FUNC_1(VAR_8);
  }

  return (0);

 default:
  FUNC_9(VAR_2, "unsupported resource type %d\n", VAR_4);
  return (VAR_1);
 }
}
