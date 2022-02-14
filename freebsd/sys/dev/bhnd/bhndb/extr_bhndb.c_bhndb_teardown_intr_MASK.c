
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct bhndb_softc {int bus_res; } ;
struct bhndb_intr_isrc {int is_res; int is_owner; } ;
struct bhndb_intr_handler {int ih_cookiep; struct bhndb_intr_isrc* ih_isrc; } ;
typedef int device_t ;


 int FUNC_0 (struct bhndb_softc*) ;
 int FUNC_1 (struct bhndb_softc*) ;
 int FUNC_2 (int ,struct bhndb_intr_handler*) ;
 struct bhndb_intr_handler* FUNC_3 (int ,void*) ;
 int FUNC_4 (struct bhndb_intr_handler*) ;
 int FUNC_5 (int ,struct bhndb_intr_handler*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 struct bhndb_softc* FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,void*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_0, device_t VAR_1, struct resource *VAR_2,
    void *VAR_3)
{
 struct bhndb_softc *VAR_4;
 struct bhndb_intr_handler *VAR_5;
 struct bhndb_intr_isrc *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_8(VAR_0);


 FUNC_0(VAR_4);

 VAR_5 = FUNC_3(VAR_4->bus_res, VAR_3);
 if (VAR_5 == ((void*)0)) {
  FUNC_9("%s requested teardown of invalid cookiep %p",
      FUNC_7(VAR_1), VAR_3);
 }

 FUNC_2(VAR_4->bus_res, VAR_5);

 FUNC_1(VAR_4);


 VAR_6 = VAR_5->ih_isrc;
 VAR_7 = FUNC_6(VAR_6->is_owner, VAR_6->is_res, VAR_5->ih_cookiep);
 if (VAR_7) {


  FUNC_0(VAR_4);
  FUNC_5(VAR_4->bus_res, VAR_5);
  FUNC_1(VAR_4);

  return (VAR_7);
 }


 FUNC_4(VAR_5);
 return (0);
}
