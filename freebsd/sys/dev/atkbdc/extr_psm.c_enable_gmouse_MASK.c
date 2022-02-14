
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psm_softc {int kbdc; } ;
typedef enum probearg { ____Placeholder_probearg } probearg ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int*) ;

__attribute__((used)) static int
FUNC_1(struct psm_softc *VAR_3, enum probearg VAR_4)
{
 KBDC VAR_5 = VAR_3->kbdc;
 int VAR_6[3];
 if (!FUNC_0(VAR_5, VAR_1, 1, VAR_6))
  return (VAR_0);
 if ((VAR_6[1] != '3') || (VAR_6[2] != 'U'))
  return (VAR_0);
 return (VAR_2);
}
