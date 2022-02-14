
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sector_size; int nr_sectors; } ;
struct cf_priv {TYPE_2__* cf_provider; TYPE_1__ drive_param; TYPE_3__* cf_geom; int dev; } ;
struct TYPE_8__ {int name; struct cf_priv* softc; } ;
struct TYPE_7__ {int sectorsize; int mediasize; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_2 (int *,char*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,char*,int ) ;

__attribute__((used)) static void FUNC_4 (void *VAR_1, int VAR_2)
{
 struct cf_priv *VAR_3;

 VAR_3 = (struct cf_priv *) VAR_1;
 VAR_3->cf_geom = FUNC_2(&VAR_0, "cf%d", FUNC_0(VAR_3->dev));
 VAR_3->cf_geom->softc = VAR_3;
 VAR_3->cf_provider = FUNC_3(VAR_3->cf_geom, "%s",
     VAR_3->cf_geom->name);
 VAR_3->cf_provider->sectorsize = VAR_3->drive_param.sector_size;
 VAR_3->cf_provider->mediasize = VAR_3->drive_param.nr_sectors * VAR_3->cf_provider->sectorsize;
        FUNC_1(VAR_3->cf_provider, 0);
}
