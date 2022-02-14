
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interrupts; } ;
struct ioat_softc {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct ioat_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 struct ioat_softc *VAR_2 = VAR_1;

 VAR_2->stats.interrupts++;
 FUNC_0(VAR_2, VAR_0);
}
