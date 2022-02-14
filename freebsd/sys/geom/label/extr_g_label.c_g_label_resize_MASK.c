
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct g_consumer {TYPE_1__* provider; TYPE_2__* geom; } ;
typedef int off_t ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int provider; } ;
struct TYPE_4__ {int sectorsize; int mediasize; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct g_consumer *VAR_1)
{

 FUNC_0(1, "Label %s resized.",
     FUNC_1(&VAR_1->geom->provider)->name);

 FUNC_2(VAR_1->geom, 0, VAR_0, (off_t)0,
     VAR_1->provider->mediasize, VAR_1->provider->sectorsize, "notused");
}
