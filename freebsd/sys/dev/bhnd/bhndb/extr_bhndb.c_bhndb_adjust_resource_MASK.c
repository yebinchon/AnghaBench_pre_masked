
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct bhndb_softc {int bus_res; int parent_dev; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 int FUNC_0 (struct bhndb_softc*) ;
 int FUNC_1 (struct bhndb_softc*) ;
 int FUNC_2 (int ,int ,int,struct resource*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int,struct resource*,scalar_t__*,scalar_t__*) ;
 struct rman* FUNC_4 (struct bhndb_softc*,int ,int) ;
 int FUNC_5 (int ) ;
 struct bhndb_softc* FUNC_6 (int ) ;
 int FUNC_7 (struct resource*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct resource*) ;
 int FUNC_9 (struct resource*,struct rman*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_3, device_t VAR_4, int VAR_5,
    struct resource *VAR_6, rman_res_t VAR_7, rman_res_t VAR_8)
{
 struct bhndb_softc *VAR_9;
 struct rman *VAR_10;
 rman_res_t VAR_11, VAR_12;
 int VAR_13;

 VAR_9 = FUNC_6(VAR_3);
 VAR_13 = 0;



 VAR_10 = FUNC_4(VAR_9, VAR_4, VAR_5);
 if (VAR_10 == ((void*)0)) {
  return (FUNC_2(FUNC_5(VAR_9->parent_dev),
      VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));
 }


 if (VAR_8 <= VAR_7)
  return (VAR_0);

 if (!FUNC_9(VAR_6, VAR_10))
  return (VAR_1);

 FUNC_0(VAR_9);


 if (!(FUNC_8(VAR_6) & VAR_2))
  goto done;


 VAR_13 = FUNC_3(VAR_9->bus_res, VAR_5, VAR_6, &VAR_11,
     &VAR_12);
 if (VAR_13)
  goto done;

 if (VAR_7 < VAR_11 || VAR_8 > VAR_12) {
  VAR_13 = VAR_0;
  goto done;
 }


done:
 if (!VAR_13)
  VAR_13 = FUNC_7(VAR_6, VAR_7, VAR_8);

 FUNC_1(VAR_9);
 return (VAR_13);
}
