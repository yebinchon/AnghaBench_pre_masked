
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource {int dummy; } ;
struct cbb_softc {int flags; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 struct resource* FUNC_0 (int ,int ,int,int*,int ,int ,int ,int ) ;
 struct resource* FUNC_1 (int ,int ,int,int*,int ,int ,int ,int ) ;
 struct cbb_softc* FUNC_2 (int ) ;

struct resource *
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{
 struct cbb_softc *VAR_9 = FUNC_2(VAR_1);

 if (VAR_9->flags & VAR_0)
  return (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7, VAR_8));
 else
  return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7, VAR_8));
}
