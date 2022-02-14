
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_pinctrl_softc {int dummy; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,void**) ;
 int FUNC_1 (int ) ;
 struct rk_pinctrl_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct rk_pinctrl_softc*,int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, phandle_t VAR_2)
{
 struct rk_pinctrl_softc *VAR_3;
 phandle_t VAR_4;
 uint32_t *VAR_5;
 int VAR_6, VAR_7;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_1(VAR_2);

 VAR_7 = FUNC_0(VAR_4, "rockchip,pins", sizeof(*VAR_5),
     (void **)&VAR_5);
 if (VAR_7 <= 0)
  return (VAR_0);

 for (VAR_6 = 0; VAR_6 != VAR_7; VAR_6 += 4)
  FUNC_3(VAR_3, VAR_5 + VAR_6);

 return (0);
}
