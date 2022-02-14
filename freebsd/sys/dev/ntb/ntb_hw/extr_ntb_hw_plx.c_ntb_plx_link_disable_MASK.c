
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ntb_plx_softc {int port; int conf_res; scalar_t__ link; } ;
typedef int device_t ;


 int FUNC_0 (struct ntb_plx_softc*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 struct ntb_plx_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct ntb_plx_softc *VAR_1 = FUNC_3(VAR_0);
 uint32_t VAR_2, VAR_3;


 if (VAR_1->link)
  return (0);

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = FUNC_1(VAR_1->conf_res, VAR_2);
 VAR_3 |= (1 << (VAR_1->port & 7));
 FUNC_2(VAR_1->conf_res, VAR_2, VAR_3);
 return (0);
}
