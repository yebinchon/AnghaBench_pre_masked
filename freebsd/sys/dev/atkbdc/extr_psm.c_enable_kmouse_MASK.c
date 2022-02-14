
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct psm_softc {int kbdc; } ;
typedef enum probearg { ____Placeholder_probearg } probearg ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int ,int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(struct psm_softc *VAR_3, enum probearg VAR_4)
{
 static u_char VAR_5[] = { 20, 60, 40, 20, 20, 60, 40, 20, 20 };
 KBDC VAR_6 = VAR_3->kbdc;
 int VAR_7[3];
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_6);
 if (FUNC_6(VAR_6, 10) != 10)
  return (VAR_0);




 VAR_9 = FUNC_2(VAR_6);
 if ((VAR_8 == VAR_9) || (VAR_9 != 2))
  return (VAR_0);

 if (FUNC_5(VAR_6, VAR_1) != VAR_1)
  return (VAR_0);
 for (VAR_10 = 0; VAR_10 < FUNC_4(VAR_5); ++VAR_10)
  if (FUNC_6(VAR_6, VAR_5[VAR_10]) != VAR_5[VAR_10])
   return (VAR_0);





 if (FUNC_3(VAR_6, VAR_7, 0, 3) < 3)
  return (VAR_0);
 if ((VAR_7[1] == VAR_1) || (VAR_7[2] == VAR_5[VAR_10 - 1]))
  return (VAR_0);


 FUNC_0(VAR_6);
 FUNC_1(VAR_6, 5);

 return (VAR_2);
}
