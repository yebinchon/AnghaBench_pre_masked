
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct zy7_slcr_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct zy7_slcr_softc*,int ) ;
 int FUNC_1 (struct zy7_slcr_softc*) ;
 int FUNC_2 (struct zy7_slcr_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct zy7_slcr_softc* VAR_2 ;

int
FUNC_3(void)
{
 struct zy7_slcr_softc *VAR_3 = VAR_2;

 uint32_t VAR_4;

 if (!VAR_3)
  return (-1);

 FUNC_1(VAR_3);
 VAR_4 = FUNC_0(VAR_3, VAR_0);
 FUNC_2(VAR_3);

 return (VAR_4 == VAR_1);
}
