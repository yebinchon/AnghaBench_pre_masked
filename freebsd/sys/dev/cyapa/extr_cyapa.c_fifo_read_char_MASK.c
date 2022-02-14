
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct cyapa_softc {int dummy; } ;
struct cyapa_fifo {size_t rindex; size_t windex; scalar_t__* buf; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct cyapa_softc*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static uint8_t
FUNC_2(struct cyapa_softc *VAR_1, struct cyapa_fifo *VAR_2)
{
 uint8_t VAR_3;

 FUNC_0(VAR_1);

 if (VAR_2->rindex == VAR_2->windex) {
  FUNC_1("fifo_read_char: overflow\n");
  VAR_3 = 0;
 } else {
  VAR_3 = VAR_2->buf[VAR_2->rindex & VAR_0];
  ++VAR_2->rindex;
 }
 return (VAR_3);
}
