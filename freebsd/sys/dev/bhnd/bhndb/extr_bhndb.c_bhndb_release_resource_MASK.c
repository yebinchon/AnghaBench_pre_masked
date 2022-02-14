
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int * res; } ;
struct resource {int dummy; } ;
struct bhndb_softc {int parent_dev; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int,int,struct resource*) ;
 int VAR_0 ;
 int * FUNC_3 (struct bhndb_softc*,int ,int) ;
 int FUNC_4 (int ) ;
 struct bhndb_softc* FUNC_5 (int ) ;
 struct resource_list_entry* FUNC_6 (int ,int,int) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    struct resource *VAR_5)
{
 struct bhndb_softc *VAR_6;
 struct resource_list_entry *VAR_7;
 bool VAR_8;
 int VAR_9;

 VAR_6 = FUNC_5(VAR_1);
 VAR_8 = (FUNC_4(VAR_2) != VAR_1);



 if (FUNC_3(VAR_6, VAR_2, VAR_3) == ((void*)0)) {
  return (FUNC_2(FUNC_4(VAR_6->parent_dev),
      VAR_2, VAR_3, VAR_4, VAR_5));
 }


 if (FUNC_7(VAR_5) & VAR_0) {
  VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_9)
   return (VAR_9);
 }

 if ((VAR_9 = FUNC_8(VAR_5)))
  return (VAR_9);

 if (!VAR_8) {

  VAR_7 = FUNC_6(FUNC_1(VAR_1, VAR_2),
      VAR_3, VAR_4);
  if (VAR_7 != ((void*)0))
   VAR_7->res = ((void*)0);
 }

 return (0);
}
