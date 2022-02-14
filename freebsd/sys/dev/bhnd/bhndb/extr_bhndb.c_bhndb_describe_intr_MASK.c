
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
 int FUNC_2 (int ,int ,int ,int ,char const*) ;
 struct bhndb_intr_handler* FUNC_3 (int ,void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct bhndb_softc* FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,void*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_0, device_t VAR_1, struct resource *VAR_2,
    void *VAR_3, const char *VAR_4)
{
 struct bhndb_softc *VAR_5;
 struct bhndb_intr_handler *VAR_6;
 struct bhndb_intr_isrc *VAR_7;

 VAR_5 = FUNC_6(VAR_0);




 FUNC_0(VAR_5);

 VAR_6 = FUNC_3(VAR_5->bus_res, VAR_3);
 if (VAR_6 == ((void*)0)) {
  FUNC_7("%s requested invalid cookiep %p",
      FUNC_4(VAR_1), VAR_3);
 }

 VAR_7 = VAR_6->ih_isrc;

 FUNC_1(VAR_5);


 return (FUNC_2(FUNC_5(VAR_7->is_owner),
     VAR_7->is_owner, VAR_7->is_res, VAR_6->ih_cookiep, VAR_4));
}
