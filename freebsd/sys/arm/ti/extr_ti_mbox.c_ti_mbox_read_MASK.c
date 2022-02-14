
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_mbox_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct ti_mbox_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct ti_mbox_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, int VAR_2, uint32_t *VAR_3)
{
 struct ti_mbox_softc *VAR_4;

 if (VAR_2 < 0 || VAR_2 > 7)
  return (VAR_0);
 VAR_4 = FUNC_1(VAR_1);

 return (FUNC_2(VAR_4, FUNC_0(VAR_2)));
}
