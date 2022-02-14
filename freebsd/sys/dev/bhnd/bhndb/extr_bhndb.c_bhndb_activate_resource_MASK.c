
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct bhndb_softc {int parent_dev; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int * FUNC_1 (struct bhndb_softc*,int ,int) ;
 int FUNC_2 (struct bhndb_softc*,int ,int,int,struct resource*,int *) ;
 int FUNC_3 (int ) ;
 struct bhndb_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3,
    struct resource *VAR_4)
{
 struct bhndb_softc *VAR_5 = FUNC_4(VAR_0);



 if (FUNC_1(VAR_5, VAR_1, VAR_2) == ((void*)0)) {
  return (FUNC_0(FUNC_3(VAR_5->parent_dev),
      VAR_1, VAR_2, VAR_3, VAR_4));
 }

 return (FUNC_2(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4, ((void*)0)));
}
