
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
 int VAR_1 ;
 int FUNC_1 (struct nct_softc*) ;
 int FUNC_2 (size_t) ;
 struct nct_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct nct_softc*,size_t,size_t) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 struct nct_softc *VAR_5;

 if (!FUNC_2(VAR_3))
  return (VAR_0);

 VAR_5 = FUNC_3(VAR_2);
 FUNC_0(VAR_5);
 if ((VAR_5->pins[VAR_3].gp_flags & VAR_1) == 0) {
  FUNC_1(VAR_5);
  return (VAR_0);
 }
 FUNC_4(VAR_5, VAR_3, VAR_4);
 FUNC_1(VAR_5);

 return (0);
}
