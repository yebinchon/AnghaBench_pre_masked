
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sii_raid_conf {int total_sectors; int vendor_id; int version_major; int generation; int raid1_ident; void* raid_location; int type; void** timestamp; scalar_t__ version_minor; } ;
struct g_consumer {TYPE_1__* provider; } ;
struct TYPE_2__ {int mediasize; int sectorsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 () ;
 int FUNC_1 (struct sii_raid_conf*,int ) ;
 struct sii_raid_conf* FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct g_consumer*,struct sii_raid_conf*) ;

__attribute__((used)) static int
FUNC_4(struct g_consumer *VAR_4)
{
 struct sii_raid_conf *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);
 VAR_5->total_sectors = VAR_4->provider->mediasize /
     VAR_4->provider->sectorsize - 0x800;
 VAR_5->vendor_id = 0x1095;
 VAR_5->version_minor = 0;
 VAR_5->version_major = 2;
 VAR_5->timestamp[0] = FUNC_0();
 VAR_5->timestamp[1] = FUNC_0();
 VAR_5->timestamp[2] = FUNC_0();
 VAR_5->timestamp[3] = FUNC_0();
 VAR_5->timestamp[4] = FUNC_0();
 VAR_5->timestamp[5] = FUNC_0();
 VAR_5->type = VAR_3;
 VAR_5->generation = 1;
 VAR_5->raid1_ident = 0xff;
 VAR_5->raid_location = FUNC_0();
 VAR_6 = FUNC_3(VAR_4, VAR_5);
 FUNC_1(VAR_5, VAR_0);
 return (VAR_6);
}
