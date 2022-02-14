
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct rl_softc {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct rl_softc*,int ,int ) ;
 int FUNC_1 (struct rl_softc*,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct rl_softc*,int,int *) ;

__attribute__((used)) static void
FUNC_4(struct rl_softc *VAR_3, caddr_t VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 u_int16_t VAR_8 = 0, *VAR_9;

 FUNC_1(VAR_3, VAR_0, VAR_1);

        FUNC_2(100);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  FUNC_1(VAR_3, VAR_0, VAR_2);
  FUNC_3(VAR_3, VAR_5 + VAR_7, &VAR_8);
  FUNC_0(VAR_3, VAR_0, VAR_2);
  VAR_9 = (u_int16_t *)(VAR_4 + (VAR_7 * 2));
                *VAR_9 = VAR_8;
 }

 FUNC_0(VAR_3, VAR_0, VAR_1);
}
