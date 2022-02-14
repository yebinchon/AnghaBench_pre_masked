
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa_softc {int dummy; } ;
struct cyapa_fifo {scalar_t__ windex; scalar_t__ rindex; } ;


 int FUNC_0 (struct cyapa_softc*) ;

__attribute__((used)) static void
FUNC_1(struct cyapa_softc *VAR_0, struct cyapa_fifo *VAR_1)
{

 FUNC_0(VAR_0);

 VAR_1->rindex = 0;
 VAR_1->windex = 0;
}
