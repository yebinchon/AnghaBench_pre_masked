
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dtsec_softc* ext_arg2; void* ext_arg1; } ;
struct mbuf {TYPE_1__ m_ext; } ;
struct dtsec_softc {int sc_rx_pool; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (struct dtsec_softc*,void*,int *) ;

__attribute__((used)) static void
FUNC_3(struct mbuf *VAR_1)
{
 struct dtsec_softc *VAR_2;
 void *VAR_3;

 VAR_3 = VAR_1->m_ext.ext_arg1;
 VAR_2 = VAR_1->m_ext.ext_arg2;
 if (FUNC_0(VAR_2->sc_rx_pool) <= VAR_0)
  FUNC_1(VAR_2->sc_rx_pool, VAR_3);
 else
  FUNC_2(VAR_2, VAR_3, ((void*)0));
}
