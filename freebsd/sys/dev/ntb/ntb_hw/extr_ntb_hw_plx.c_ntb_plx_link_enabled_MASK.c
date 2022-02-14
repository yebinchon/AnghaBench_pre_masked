
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ntb_plx_softc {int port; int conf_res; scalar_t__ link; } ;
typedef int device_t ;


 int FUNC_0 (struct ntb_plx_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 struct ntb_plx_softc* FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(device_t VAR_1)
{
 struct ntb_plx_softc *VAR_2 = FUNC_2(VAR_1);
 uint32_t VAR_3, VAR_4;


 if (VAR_2->link)
  return (VAR_0);

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_1(VAR_2->conf_res, VAR_3);
 return ((VAR_4 & (1 << (VAR_2->port & 7))) == 0);
}
