
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtwn_softc*,int,int,int) ;

void
FUNC_1(struct rtwn_softc *VAR_1, int VAR_2, int VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = VAR_0;
 if (VAR_2 > 32)
  VAR_4 += 4;

 if (VAR_3)
  FUNC_0(VAR_1, VAR_4, 1 << (VAR_2 % 32), 0);
 else
  FUNC_0(VAR_1, VAR_4, 0, 1 << (VAR_2 % 32));


}
