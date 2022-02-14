
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct chipc_softc {int dummy; } ;
struct chipc_region {scalar_t__ cr_addr; scalar_t__ cr_end; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,struct resource*,scalar_t__,scalar_t__) ;
 struct chipc_region* FUNC_1 (struct chipc_softc*,int ,int ) ;
 struct rman* FUNC_2 (struct chipc_softc*,int) ;
 struct chipc_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct resource*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*,struct rman*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1, device_t VAR_2, int VAR_3,
    struct resource *VAR_4, rman_res_t VAR_5, rman_res_t VAR_6)
{
 struct chipc_softc *VAR_7;
 struct chipc_region *VAR_8;
 struct rman *VAR_9;

 VAR_7 = FUNC_3(VAR_1);


 VAR_9 = FUNC_2(VAR_7, VAR_3);
 if (VAR_9 == ((void*)0) || !FUNC_7(VAR_4, VAR_9)) {
  return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6));
 }


 VAR_8 = FUNC_1(VAR_7, FUNC_6(VAR_4), FUNC_5(VAR_4));
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 if (VAR_6 <= VAR_5)
  return (VAR_0);

 if (VAR_5 < VAR_8->cr_addr || VAR_6 > VAR_8->cr_end)
  return (VAR_0);


 return (FUNC_4(VAR_4, VAR_5, VAR_6));
}
