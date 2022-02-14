
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rman {int dummy; } ;
struct resource {int dummy; } ;
struct chipc_softc {int dummy; } ;
struct chipc_region {TYPE_1__* cr_res; scalar_t__ cr_addr; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;
typedef scalar_t__ bhnd_size_t ;
struct TYPE_2__ {int res; scalar_t__ direct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct chipc_region* FUNC_0 (struct chipc_softc*,scalar_t__,scalar_t__) ;
 struct rman* FUNC_1 (struct chipc_softc*,int) ;
 int FUNC_2 (struct resource*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct chipc_softc*,struct chipc_region*,int ) ;
 int FUNC_4 (struct chipc_softc*,struct chipc_region*,int ) ;
 int FUNC_5 (struct resource*) ;
 scalar_t__ FUNC_6 (struct resource*) ;
 scalar_t__ FUNC_7 (struct resource*) ;
 scalar_t__ FUNC_8 (struct resource*) ;
 int FUNC_9 (struct resource*,struct rman*) ;

__attribute__((used)) static int
FUNC_10(struct chipc_softc *VAR_3, device_t VAR_4, int VAR_5,
    int VAR_6, struct resource *VAR_7, bool VAR_8)
{
 struct rman *VAR_9;
 struct chipc_region *VAR_10;
 bhnd_size_t VAR_11;
 rman_res_t VAR_12, VAR_13, VAR_14;
 int VAR_15;

 VAR_9 = FUNC_1(VAR_3, VAR_5);
 if (VAR_9 == ((void*)0) || !FUNC_9(VAR_7, VAR_9))
  return (VAR_0);

 VAR_12 = FUNC_8(VAR_7);
 VAR_13 = FUNC_6(VAR_7);
 VAR_14 = FUNC_7(VAR_7);


 VAR_10 = FUNC_0(VAR_3, VAR_12, VAR_13);
 if (VAR_10 == ((void*)0))
  return (VAR_0);


 VAR_11 = VAR_12 - VAR_10->cr_addr;


 if ((VAR_15 = FUNC_4(VAR_3, VAR_10, VAR_2)))
  return (VAR_15);


 if (VAR_10->cr_res->direct) {
  VAR_15 = FUNC_2(VAR_7, VAR_10->cr_res->res,
      VAR_11, VAR_14);
  if (VAR_15)
   goto cleanup;


  if ((VAR_15 = FUNC_5(VAR_7)))
   goto cleanup;
 } else if (VAR_8) {
  VAR_15 = VAR_1;
  goto cleanup;
 }

 return (0);

cleanup:
 FUNC_3(VAR_3, VAR_10, VAR_2);
 return (VAR_15);
}
