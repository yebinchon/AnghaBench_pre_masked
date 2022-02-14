
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cyapa_softc {int dummy; } ;
struct cyapa_fifo {size_t windex; scalar_t__ rindex; int * buf; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cyapa_softc*) ;

__attribute__((used)) static void
FUNC_1(struct cyapa_softc *VAR_2, struct cyapa_fifo *VAR_3, uint8_t VAR_4)
{

 FUNC_0(VAR_2);

 if (VAR_3->windex - VAR_3->rindex < VAR_1) {
  VAR_3->buf[VAR_3->windex & VAR_0] = VAR_4;
  ++VAR_3->windex;
 }
}
