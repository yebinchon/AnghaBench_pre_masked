
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_softc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rtwn_softc*,int) ;
 int FUNC_3 (struct rtwn_softc*,int ) ;
 int FUNC_4 (struct rtwn_softc*,int ,int) ;

int
FUNC_5(struct rtwn_softc *VAR_7, uint32_t VAR_8, uint32_t VAR_9)
{
 int VAR_10, VAR_11;

 VAR_11 = FUNC_4(VAR_7, VAR_1,
     FUNC_1(VAR_4, VAR_6) |
     FUNC_1(VAR_2, VAR_8) |
     FUNC_1(VAR_3, VAR_9));
 if (VAR_11 != 0)
  return (VAR_11);

 for (VAR_10 = 0; VAR_10 < 20; VAR_10++) {
  if (FUNC_0(FUNC_3(VAR_7, VAR_1), VAR_4) ==
      VAR_5)
   return (0);
  FUNC_2(VAR_7, 10);
 }
 return (VAR_0);
}
