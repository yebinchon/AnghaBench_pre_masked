
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mn_softc {TYPE_1__* m32x; } ;
struct TYPE_2__ {int conf; int mode1; int mode2; int txpoll; int lconf; int imask; } ;



__attribute__((used)) static void
FUNC_0(struct mn_softc *VAR_0)
{

 VAR_0->m32x->conf = 0x00000000;
 VAR_0->m32x->mode1 = 0x81048000 + 1600;

 VAR_0->m32x->mode2 = 0x00000081;
 VAR_0->m32x->txpoll = 0xffffffff;






 VAR_0->m32x->lconf = 0x6060009B;
 VAR_0->m32x->imask = 0x00000000;
}
