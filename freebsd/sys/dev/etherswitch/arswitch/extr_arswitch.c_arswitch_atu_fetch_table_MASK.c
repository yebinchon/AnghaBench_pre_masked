
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int size; int count; TYPE_4__* entries; } ;
struct TYPE_7__ {int (* arswitch_atu_fetch_table ) (struct arswitch_softc*,TYPE_4__*,int) ;} ;
struct arswitch_softc {TYPE_2__ atu; TYPE_1__ hal; } ;
struct TYPE_9__ {int es_nitems; } ;
typedef TYPE_3__ etherswitch_atu_table_t ;
typedef int device_t ;
struct TYPE_10__ {int id; } ;


 int FUNC_0 (struct arswitch_softc*) ;
 int FUNC_1 (struct arswitch_softc*) ;
 struct arswitch_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct arswitch_softc*,TYPE_4__*,int) ;
 int FUNC_4 (struct arswitch_softc*,TYPE_4__*,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, etherswitch_atu_table_t *VAR_1)
{
 struct arswitch_softc *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2);

 VAR_4 = 0;
 VAR_3 = VAR_2->hal.arswitch_atu_fetch_table(VAR_2, ((void*)0), 0);


 while (VAR_3 == 0 && VAR_4 < VAR_2->atu.size) {
  VAR_3 = VAR_2->hal.arswitch_atu_fetch_table(VAR_2,
      &VAR_2->atu.entries[VAR_4], 1);
  if (VAR_3 == 0) {
   VAR_2->atu.entries[VAR_4].id = VAR_4;
   VAR_4++;
  }
 }
 VAR_2->atu.count = VAR_4;
 FUNC_1(VAR_2);

 VAR_1->es_nitems = VAR_4;

 return (0);
}
