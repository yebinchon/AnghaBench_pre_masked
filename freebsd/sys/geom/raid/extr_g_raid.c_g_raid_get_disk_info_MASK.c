
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dumper; } ;
struct TYPE_6__ {TYPE_1__ di; int length; scalar_t__ offset; } ;
struct g_raid_disk {int d_softc; int d_candelete; TYPE_3__ d_kd; struct g_consumer* d_consumer; } ;
struct g_consumer {TYPE_2__* provider; } ;
struct TYPE_5__ {int name; } ;


 int FUNC_0 (int,int ,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct g_consumer*,int *) ;
 int FUNC_2 (char*,struct g_consumer*,int*,TYPE_3__*) ;

void
FUNC_3(struct g_raid_disk *VAR_1)
{
 struct g_consumer *VAR_2 = VAR_1->d_consumer;
 int VAR_3, VAR_4;


 VAR_1->d_kd.offset = 0;
 VAR_1->d_kd.length = VAR_0;
 VAR_4 = sizeof(VAR_1->d_kd);
 VAR_3 = FUNC_2("GEOM::kerneldump", VAR_2, &VAR_4, &VAR_1->d_kd);
 if (VAR_3)
  VAR_1->d_kd.di.dumper = ((void*)0);
 if (VAR_1->d_kd.di.dumper == ((void*)0))
  FUNC_0(2, VAR_1->d_softc,
      "Dumping not supported by %s: %d.",
      VAR_2->provider->name, VAR_3);


 VAR_3 = FUNC_1("GEOM::candelete", VAR_2, &VAR_1->d_candelete);
 if (VAR_3)
  VAR_1->d_candelete = 0;
 if (!VAR_1->d_candelete)
  FUNC_0(2, VAR_1->d_softc,
      "BIO_DELETE not supported by %s: %d.",
      VAR_2->provider->name, VAR_3);
}
