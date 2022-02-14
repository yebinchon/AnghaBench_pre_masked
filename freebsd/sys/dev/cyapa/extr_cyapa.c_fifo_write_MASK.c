
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa_softc {int dummy; } ;
struct cyapa_fifo {char* buf; int windex; } ;


 int VAR_0 ;
 int FUNC_0 (struct cyapa_softc*) ;

__attribute__((used)) static char *
FUNC_1(struct cyapa_softc *VAR_1, struct cyapa_fifo *VAR_2, size_t VAR_3)
{
 char *VAR_4;

 FUNC_0(VAR_1);

 VAR_4 = VAR_2->buf + (VAR_2->windex & VAR_0);
 VAR_2->windex += VAR_3;

 return (VAR_4);
}
