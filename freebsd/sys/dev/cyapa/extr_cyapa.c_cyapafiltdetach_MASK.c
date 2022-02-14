
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {scalar_t__ kn_hook; } ;
struct knlist {int dummy; } ;
struct TYPE_2__ {struct knlist si_note; } ;
struct cyapa_softc {TYPE_1__ selinfo; } ;


 int FUNC_0 (struct knlist*,struct knote*,int ) ;

__attribute__((used)) static void
FUNC_1(struct knote *VAR_0)
{
 struct cyapa_softc *VAR_1;
 struct knlist *VAR_2;

 VAR_1 = (struct cyapa_softc *)VAR_0->kn_hook;

 VAR_2 = &VAR_1->selinfo.si_note;
 FUNC_0(VAR_2, VAR_0, 0);
}
