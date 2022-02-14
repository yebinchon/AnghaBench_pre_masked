
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct jme_desc* jme_rx_ring; } ;
struct jme_softc {TYPE_1__ jme_rdata; } ;
struct jme_desc {void* buflen; void* flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static __inline void
FUNC_1(struct jme_softc *VAR_4, int VAR_5)
{
 struct jme_desc *VAR_6;

 VAR_6 = &VAR_4->jme_rdata.jme_rx_ring[VAR_5];
 VAR_6->flags = FUNC_0(VAR_2 | VAR_1 | VAR_0);
 VAR_6->buflen = FUNC_0(VAR_3);
}
