
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; int * entries; } ;
struct arswitch_softc {TYPE_1__ atu; } ;
struct TYPE_6__ {int id; } ;
typedef TYPE_2__ etherswitch_atu_entry_t ;
typedef int device_t ;


 int FUNC_0 (struct arswitch_softc*) ;
 int FUNC_1 (struct arswitch_softc*) ;
 int VAR_0 ;
 struct arswitch_softc* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int *,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, etherswitch_atu_entry_t *VAR_2)
{
 struct arswitch_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = VAR_2->id;

 FUNC_0(VAR_3);
 if (VAR_4 > VAR_3->atu.count) {
  FUNC_1(VAR_3);
  return (VAR_0);
 }

 FUNC_3(VAR_2, &VAR_3->atu.entries[VAR_4], sizeof(*VAR_2));
 FUNC_1(VAR_3);
 return (0);
}
