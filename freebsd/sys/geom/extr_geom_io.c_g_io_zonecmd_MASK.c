
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_consumer {int dummy; } ;
struct disk_zone_rep_entry {int dummy; } ;
struct TYPE_3__ {int entries_allocated; } ;
struct TYPE_4__ {TYPE_1__ report; } ;
struct disk_zone_args {scalar_t__ zone_cmd; TYPE_2__ zone_params; } ;
struct bio {int bio_length; struct disk_zone_args bio_zone; int * bio_done; int bio_cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct disk_zone_args*,struct disk_zone_args*,int) ;
 int FUNC_1 (struct bio*,char*) ;
 struct bio* FUNC_2 () ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,struct g_consumer*) ;
 int FUNC_5 (int ,char*,scalar_t__) ;

int
FUNC_6(struct disk_zone_args *VAR_3, struct g_consumer *VAR_4)
{
 struct bio *VAR_5;
 int VAR_6;

 FUNC_5(VAR_2, "bio_zone(%d)", VAR_3->zone_cmd);
 VAR_5 = FUNC_2();
 VAR_5->bio_cmd = VAR_0;
 VAR_5->bio_done = ((void*)0);



 FUNC_0(VAR_3, &VAR_5->bio_zone, sizeof(*VAR_3));
 if (VAR_3->zone_cmd == VAR_1)
  VAR_5->bio_length =
      VAR_3->zone_params.report.entries_allocated *
      sizeof(struct disk_zone_rep_entry);
 else
  VAR_5->bio_length = 0;

 FUNC_4(VAR_5, VAR_4);
 VAR_6 = FUNC_1(VAR_5, "gzone");
 FUNC_0(&VAR_5->bio_zone, VAR_3, sizeof(*VAR_3));
 FUNC_3(VAR_5);
 return (VAR_6);
}
