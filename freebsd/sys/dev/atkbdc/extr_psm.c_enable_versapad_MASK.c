
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
 int FUNC_0 (int ,int*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct psm_softc *VAR_3, enum probearg VAR_4)
{
 KBDC VAR_5 = VAR_3->kbdc;
 int VAR_6[3];

 FUNC_1(VAR_5, VAR_1);
 FUNC_2(VAR_5, 100);
 FUNC_3(VAR_5, 1);
 FUNC_3(VAR_5, 1);
 FUNC_3(VAR_5, 1);
 FUNC_3(VAR_5, 1);
 if (FUNC_0(VAR_5, VAR_6, 0, 3) < 3)
  return (VAR_0);
 if (VAR_6[2] != 0xa || VAR_6[1] != 0 )
  return (VAR_0);
 FUNC_3(VAR_5, 1);

 return (VAR_2);
}
