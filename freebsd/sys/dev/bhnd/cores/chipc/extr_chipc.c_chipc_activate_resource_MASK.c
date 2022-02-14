
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct chipc_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 struct rman* FUNC_1 (struct chipc_softc*,int) ;
 int FUNC_2 (struct chipc_softc*,int ,int,int,struct resource*,int) ;
 struct chipc_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct resource*,struct rman*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3,
    struct resource *VAR_4)
{
 struct chipc_softc *VAR_5;
 struct rman *VAR_6;

 VAR_5 = FUNC_3(VAR_0);


 VAR_6 = FUNC_1(VAR_5, VAR_2);
 if (VAR_6 == ((void*)0) || !FUNC_4(VAR_4, VAR_6)) {
  return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
      VAR_4));
 }


 return (FUNC_2(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4, 1));
}
