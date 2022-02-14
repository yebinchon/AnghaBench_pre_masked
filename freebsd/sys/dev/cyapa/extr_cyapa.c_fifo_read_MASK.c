
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa_softc {int dummy; } ;
struct cyapa_fifo {size_t rindex; char* buf; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct cyapa_softc*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(struct cyapa_softc *VAR_2, struct cyapa_fifo *VAR_3, size_t VAR_4)
{
 char *VAR_5;

 FUNC_0(VAR_2);
 if (VAR_4 > (VAR_1 - (VAR_3->rindex & VAR_0))) {
  FUNC_1("fifo_read: overflow\n");
  return (VAR_3->buf);
 }
 VAR_5 = VAR_3->buf + (VAR_3->rindex & VAR_0);
 VAR_3->rindex += VAR_4;

 return (VAR_5);
}
