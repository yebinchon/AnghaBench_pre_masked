
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct bhndb_softc {int bus_res; } ;
struct bhndb_dw_alloc {int dummy; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bhndb_softc*) ;
 int FUNC_2 (struct bhndb_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bhndb_dw_alloc* FUNC_3 (int ,struct resource*) ;
 int FUNC_4 (int ,struct bhndb_dw_alloc*,struct resource*) ;
 struct bhndb_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,int ,int ) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_2, device_t VAR_3, int VAR_4,
    struct resource *VAR_5)
{
 struct bhndb_softc *VAR_6;
 struct bhndb_dw_alloc *VAR_7;

 VAR_6 = FUNC_5(VAR_2);


 if (VAR_4 != VAR_1)
  return;

 FUNC_1(VAR_6);
 VAR_7 = FUNC_3(VAR_6->bus_res, VAR_5);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_6);
  return;
 }

 if (FUNC_0(VAR_0))
  FUNC_6(VAR_3, "suspend resource type=%d 0x%jx+0x%jx\n",
      VAR_4, FUNC_8(VAR_5), FUNC_7(VAR_5));


 FUNC_4(VAR_6->bus_res, VAR_7, VAR_5);
 FUNC_2(VAR_6);
}
