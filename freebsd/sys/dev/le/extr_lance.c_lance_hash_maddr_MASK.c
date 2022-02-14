
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct lance_softc {int dummy; } ;
struct lance_hash_maddr_ctx {int * af; struct lance_softc* sc; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr_dl*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static u_int
FUNC_3(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 struct lance_hash_maddr_ctx *VAR_4 = VAR_1;
 struct lance_softc *VAR_5 = VAR_4->sc;
 uint32_t VAR_6;

 VAR_6 = FUNC_2(FUNC_1(VAR_2), VAR_0);

 VAR_6 >>= 26;

 VAR_4->af[VAR_6 >> 4] |= FUNC_0(1 << (VAR_6 & 0xf));

 return (1);
}
