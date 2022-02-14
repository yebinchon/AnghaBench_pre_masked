
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct chipc_softc {int dummy; } ;
struct chipc_region {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 struct chipc_region* FUNC_1 (struct chipc_softc*,int ,int ) ;
 struct rman* FUNC_2 (struct chipc_softc*,int) ;
 int FUNC_3 (struct chipc_softc*,struct chipc_region*,int ) ;
 struct chipc_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (struct resource*,struct rman*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2, device_t VAR_3, int VAR_4,
    int VAR_5, struct resource *VAR_6)
{
 struct chipc_softc *VAR_7;
 struct chipc_region *VAR_8;
 struct rman *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_4(VAR_2);


 VAR_9 = FUNC_2(VAR_7, VAR_4);
 if (VAR_9 == ((void*)0) || !FUNC_8(VAR_6, VAR_9)) {
  return (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6));
 }


 VAR_8 = FUNC_1(VAR_7, FUNC_7(VAR_6), FUNC_6(VAR_6));
 if (VAR_8 == ((void*)0))
  return (VAR_0);


 if ((VAR_10 = FUNC_5(VAR_6)))
  return (VAR_10);


 FUNC_3(VAR_7, VAR_8, VAR_1);

 return (0);
}
