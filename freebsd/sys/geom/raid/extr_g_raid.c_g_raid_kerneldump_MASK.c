
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid_volume {scalar_t__ v_mediasize; int v_sectorsize; } ;
struct g_raid_softc {int dummy; } ;
struct g_provider {int name; struct g_raid_volume* private; } ;
struct TYPE_2__ {scalar_t__ mediaoffset; scalar_t__ mediasize; int maxiosize; int blocksize; struct g_raid_volume* priv; int dumper; } ;
struct g_kerneldump {scalar_t__ offset; scalar_t__ length; TYPE_1__ di; } ;
struct bio {struct g_provider* bio_to; scalar_t__ bio_data; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct g_raid_softc *VAR_3, struct bio *VAR_4)
{
 struct g_kerneldump *VAR_5;
 struct g_provider *VAR_6;
 struct g_raid_volume *VAR_7;

 VAR_5 = (struct g_kerneldump*)VAR_4->bio_data;
 VAR_6 = VAR_4->bio_to;
 VAR_7 = VAR_6->private;
 FUNC_1(VAR_1, "g_raid_kerneldump(%s, %jd, %jd)",
  VAR_6->name, (intmax_t)VAR_5->offset, (intmax_t)VAR_5->length);
 VAR_5->di.dumper = VAR_2;
 VAR_5->di.priv = VAR_7;
 VAR_5->di.blocksize = VAR_7->v_sectorsize;
 VAR_5->di.maxiosize = VAR_0;
 VAR_5->di.mediaoffset = VAR_5->offset;
 if ((VAR_5->offset + VAR_5->length) > VAR_7->v_mediasize)
  VAR_5->length = VAR_7->v_mediasize - VAR_5->offset;
 VAR_5->di.mediasize = VAR_5->length;
 FUNC_0(VAR_4, 0);
}
