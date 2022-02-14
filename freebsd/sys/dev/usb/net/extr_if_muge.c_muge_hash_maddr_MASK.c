
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct muge_softc {int* sc_mchash_table; int sc_rfe_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct muge_softc*,int,int ) ;

__attribute__((used)) static u_int
FUNC_3(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 struct muge_softc *VAR_4 = VAR_1;
 uint32_t VAR_5;


 if (VAR_3 < 32 )
  FUNC_2(VAR_4, VAR_3 + 1, FUNC_0(VAR_2));
 else {
  VAR_5 = FUNC_1(FUNC_0(VAR_2));
  VAR_4->sc_mchash_table[VAR_5 / 32] |= (1 << (VAR_5 % 32));
  VAR_4->sc_rfe_ctl |= VAR_0;
 }

 return (1);
}
