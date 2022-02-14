
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct bhndb_softc {int bus_res; } ;
struct bhndb_intr_isrc {int is_res; int is_owner; } ;
struct bhndb_intr_handler {int ih_cookiep; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;


 int FUNC_0 (struct bhndb_softc*) ;
 int FUNC_1 (int ,struct resource*,struct bhndb_intr_isrc**) ;
 int FUNC_2 (struct bhndb_softc*) ;
 int VAR_0 ;
 struct bhndb_intr_handler* FUNC_3 (int ,struct resource*,struct bhndb_intr_isrc*) ;
 int FUNC_4 (struct bhndb_intr_handler*) ;
 int FUNC_5 (int ,struct bhndb_intr_handler*) ;
 int FUNC_6 (int ,int ,int,int ,int ,void*,int *) ;
 struct bhndb_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_1, device_t VAR_2, struct resource *VAR_3,
    int VAR_4, driver_filter_t VAR_5, driver_intr_t VAR_6, void *VAR_7,
    void **VAR_8)
{
 struct bhndb_softc *VAR_9;
 struct bhndb_intr_isrc *VAR_10;
 struct bhndb_intr_handler *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_7(VAR_1);


 if ((VAR_12 = FUNC_1(VAR_1, VAR_3, &VAR_10))) {
  FUNC_8(VAR_1, "failed to fetch isrc: %d\n", VAR_12);
  return (VAR_12);
 }


 VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_10);
 if (VAR_11 == ((void*)0))
  return (VAR_0);


 VAR_12 = FUNC_6(VAR_10->is_owner, VAR_10->is_res, VAR_4, VAR_5,
     VAR_6, VAR_7, &VAR_11->ih_cookiep);
 if (VAR_12) {
  FUNC_4(VAR_11);
  return (VAR_12);
 }


 FUNC_0(VAR_9);
 FUNC_5(VAR_9->bus_res, VAR_11);
 FUNC_2(VAR_9);


 *VAR_8 = VAR_11;
 return (0);
}
