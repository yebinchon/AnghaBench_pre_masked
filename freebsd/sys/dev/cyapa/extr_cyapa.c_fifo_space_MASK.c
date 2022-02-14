
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa_softc {int dummy; } ;
struct cyapa_fifo {size_t windex; size_t rindex; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct cyapa_softc*) ;

__attribute__((used)) static size_t
FUNC_1(struct cyapa_softc *VAR_2, struct cyapa_fifo *VAR_3)
{
 size_t VAR_4;

 FUNC_0(VAR_2);

 VAR_4 = VAR_1 - (VAR_3->windex & VAR_0);
 if (VAR_4 > (size_t)(VAR_1 - (VAR_3->windex - VAR_3->rindex)))
  VAR_4 = (size_t)(VAR_1 - (VAR_3->windex - VAR_3->rindex));
 return (VAR_4);
}
