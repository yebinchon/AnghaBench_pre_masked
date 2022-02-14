
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ecore_mcast_ramrod_params {int dummy; } ;
struct ecore_mcast_obj {int dummy; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 int FUNC_2 (struct ecore_mcast_obj*,int) ;

__attribute__((used)) static inline void FUNC_3(struct bxe_softc *VAR_0,
 struct ecore_mcast_obj *VAR_1, struct ecore_mcast_ramrod_params *VAR_2,
 uint32_t *VAR_3)
{
 int VAR_4;

 for (VAR_4 = FUNC_2(VAR_1, 0);
      VAR_4 >= 0;
      VAR_4 = FUNC_2(VAR_1, VAR_4 + 1)) {
  FUNC_0(VAR_3, VAR_4);
  FUNC_1(VAR_0, "About to set bin %d\n", VAR_4);
 }
}
