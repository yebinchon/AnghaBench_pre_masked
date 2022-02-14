
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_char ;
struct g_eli_softc {int sc_akeyctx; } ;
typedef int offset ;
typedef int off_t ;
typedef int ctx ;
typedef int SHA256_CTX ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_3(struct g_eli_softc *VAR_0, off_t VAR_1, u_char *VAR_2)
{
 SHA256_CTX VAR_3;


 FUNC_2(&VAR_0->sc_akeyctx, &VAR_3, sizeof(VAR_3));
 FUNC_1(&VAR_3, (uint8_t *)&VAR_1, sizeof(VAR_1));
 FUNC_0(VAR_2, &VAR_3);
}
