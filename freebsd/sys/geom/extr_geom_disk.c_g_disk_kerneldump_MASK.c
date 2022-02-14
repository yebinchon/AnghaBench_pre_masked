
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mediaoffset; scalar_t__ mediasize; int maxiosize; int blocksize; struct disk* priv; int * dumper; } ;
struct g_kerneldump {scalar_t__ offset; scalar_t__ length; TYPE_2__ di; } ;
struct g_geom {int name; } ;
struct disk {scalar_t__ d_mediasize; int d_maxsize; int d_sectorsize; int * d_dump; } ;
struct bio {TYPE_1__* bio_to; scalar_t__ bio_data; } ;
typedef int intmax_t ;
struct TYPE_3__ {struct g_geom* geom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bio *VAR_2, struct disk *VAR_3)
{
 struct g_kerneldump *VAR_4;
 struct g_geom *VAR_5;

 VAR_4 = (struct g_kerneldump*)VAR_2->bio_data;
 VAR_5 = VAR_2->bio_to->geom;
 FUNC_1(VAR_1, "g_disk_kerneldump(%s, %jd, %jd)",
  VAR_5->name, (intmax_t)VAR_4->offset, (intmax_t)VAR_4->length);
 if (VAR_3->d_dump == ((void*)0)) {
  FUNC_0(VAR_2, VAR_0);
  return;
 }
 VAR_4->di.dumper = VAR_3->d_dump;
 VAR_4->di.priv = VAR_3;
 VAR_4->di.blocksize = VAR_3->d_sectorsize;
 VAR_4->di.maxiosize = VAR_3->d_maxsize;
 VAR_4->di.mediaoffset = VAR_4->offset;
 if ((VAR_4->offset + VAR_4->length) > VAR_3->d_mediasize)
  VAR_4->length = VAR_3->d_mediasize - VAR_4->offset;
 VAR_4->di.mediasize = VAR_4->length;
 FUNC_0(VAR_2, 0);
}
