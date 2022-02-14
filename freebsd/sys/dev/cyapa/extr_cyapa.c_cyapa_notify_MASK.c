
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct cyapa_softc {TYPE_1__ selinfo; scalar_t__ isselect; scalar_t__ blocked; int rfifo; scalar_t__ data_signal; } ;


 int FUNC_0 (struct cyapa_softc*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct cyapa_softc*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_5(struct cyapa_softc *VAR_0)
{

 FUNC_0(VAR_0);

 if (VAR_0->data_signal || !FUNC_2(VAR_0, &VAR_0->rfifo)) {
  FUNC_1(&VAR_0->selinfo.si_note, 0);
  if (VAR_0->blocked || VAR_0->isselect) {
   if (VAR_0->blocked) {
       VAR_0->blocked = 0;
       FUNC_4(&VAR_0->blocked);
   }
   if (VAR_0->isselect) {
       VAR_0->isselect = 0;
       FUNC_3(&VAR_0->selinfo);
   }
  }
 }
}
