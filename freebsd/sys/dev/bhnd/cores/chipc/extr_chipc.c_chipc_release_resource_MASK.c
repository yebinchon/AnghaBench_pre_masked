
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct resource_list_entry {int * res; } ;
struct resource {int dummy; } ;
struct chipc_softc {int dummy; } ;
struct chipc_region {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int,int,struct resource*) ;
 struct chipc_region* FUNC_3 (struct chipc_softc*,int ,int ) ;
 struct rman* FUNC_4 (struct chipc_softc*,int) ;
 int FUNC_5 (struct chipc_softc*,struct chipc_region*,int ) ;
 struct chipc_softc* FUNC_6 (int ) ;
 struct resource_list_entry* FUNC_7 (int ,int,int) ;
 int FUNC_8 (struct resource*) ;
 int FUNC_9 (struct resource*) ;
 int FUNC_10 (struct resource*) ;
 int FUNC_11 (struct resource*,struct rman*) ;
 int FUNC_12 (struct resource*) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_3, device_t VAR_4, int VAR_5, int VAR_6,
    struct resource *VAR_7)
{
 struct chipc_softc *VAR_8;
 struct chipc_region *VAR_9;
 struct rman *VAR_10;
 struct resource_list_entry *VAR_11;
 int VAR_12;

 VAR_8 = FUNC_6(VAR_3);


 VAR_10 = FUNC_4(VAR_8, VAR_5);
 if (VAR_10 == ((void*)0) || !FUNC_11(VAR_7, VAR_10)) {
  return (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7));
 }


 VAR_9 = FUNC_3(VAR_8, FUNC_10(VAR_7), FUNC_8(VAR_7));
 if (VAR_9 == ((void*)0))
  return (VAR_0);


 if (FUNC_9(VAR_7) & VAR_1) {
  VAR_12 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  if (VAR_12)
   return (VAR_12);
 }

 if ((VAR_12 = FUNC_12(VAR_7)))
  return (VAR_12);


 FUNC_5(VAR_8, VAR_9, VAR_2);


 VAR_11 = FUNC_7(FUNC_1(VAR_3, VAR_4), VAR_5, VAR_6);
 if (VAR_11 != ((void*)0))
  VAR_11->res = ((void*)0);

 return (0);
}
