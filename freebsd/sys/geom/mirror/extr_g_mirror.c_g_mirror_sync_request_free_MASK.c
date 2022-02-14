
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bio** ds_bios; } ;
struct g_mirror_disk {TYPE_1__ d_sync; } ;
struct bio {int bio_data; scalar_t__ bio_caller1; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bio*) ;

__attribute__((used)) static void
FUNC_3(struct g_mirror_disk *VAR_1, struct bio *VAR_2)
{
 int VAR_3;

 if (VAR_1 != ((void*)0) && VAR_1->d_sync.ds_bios != ((void*)0)) {
  VAR_3 = (int)(uintptr_t)VAR_2->bio_caller1;
  FUNC_0(VAR_1->d_sync.ds_bios[VAR_3] == VAR_2,
      ("unexpected sync BIO at %p:%d", VAR_1, VAR_3));
  VAR_1->d_sync.ds_bios[VAR_3] = ((void*)0);
 }
 FUNC_1(VAR_2->bio_data, VAR_0);
 FUNC_2(VAR_2);
}
