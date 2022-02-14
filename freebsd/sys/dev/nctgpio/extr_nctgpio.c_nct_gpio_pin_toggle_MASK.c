
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct nct_softc {TYPE_1__* pins; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct nct_softc*) ;
 int FUNC_1 (struct nct_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct nct_softc*) ;
 int FUNC_3 (size_t) ;
 struct nct_softc* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct nct_softc*,size_t) ;
 int FUNC_6 (struct nct_softc*,size_t,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, uint32_t VAR_3)
{
 struct nct_softc *VAR_4;

 if (!FUNC_3(VAR_3))
  return (VAR_0);

 VAR_4 = FUNC_4(VAR_2);
 FUNC_0(VAR_4);
 FUNC_1(VAR_4);
 if ((VAR_4->pins[VAR_3].gp_flags & VAR_1) == 0) {
  FUNC_2(VAR_4);
  return (VAR_0);
 }
 if (FUNC_5(VAR_4, VAR_3))
  FUNC_6(VAR_4, VAR_3, 0);
 else
  FUNC_6(VAR_4, VAR_3, 1);

 FUNC_2(VAR_4);

 return (0);
}
