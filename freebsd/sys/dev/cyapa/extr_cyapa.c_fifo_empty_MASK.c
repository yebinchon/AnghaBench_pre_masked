
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa_softc {int dummy; } ;
struct cyapa_fifo {scalar_t__ rindex; scalar_t__ windex; } ;


 int FUNC_0 (struct cyapa_softc*) ;

__attribute__((used)) static int
FUNC_1(struct cyapa_softc *VAR_0, struct cyapa_fifo *VAR_1)
{

 FUNC_0(VAR_0);

 return (VAR_1->rindex == VAR_1->windex);
}
