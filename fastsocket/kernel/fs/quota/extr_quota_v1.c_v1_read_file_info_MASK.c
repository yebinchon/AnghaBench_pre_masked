
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v1_disk_dqblk {scalar_t__ dqb_btime; scalar_t__ dqb_itime; } ;
struct super_block {TYPE_1__* s_op; } ;
struct quota_info {TYPE_2__* info; } ;
struct TYPE_4__ {int dqi_maxblimit; int dqi_maxilimit; scalar_t__ dqi_bgrace; scalar_t__ dqi_igrace; } ;
struct TYPE_3__ {int (* quota_read ) (struct super_block*,int,char*,int,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct quota_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int,char*,int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_3, int VAR_4)
{
 struct quota_info *VAR_5 = FUNC_0(VAR_3);
 struct v1_disk_dqblk VAR_6;
 int VAR_7;

 VAR_7 = VAR_3->s_op->quota_read(VAR_3, VAR_4, (char *)&VAR_6,
    sizeof(struct v1_disk_dqblk), FUNC_2(0));
 if (VAR_7 != sizeof(struct v1_disk_dqblk)) {
  if (VAR_7 >= 0)
   VAR_7 = -VAR_0;
  goto out;
 }
 VAR_7 = 0;

 VAR_5->info[VAR_4].dqi_maxblimit = 0xffffffff;
 VAR_5->info[VAR_4].dqi_maxilimit = 0xffffffff;
 VAR_5->info[VAR_4].dqi_igrace =
   VAR_6.dqb_itime ? VAR_6.dqb_itime : VAR_2;
 VAR_5->info[VAR_4].dqi_bgrace =
   VAR_6.dqb_btime ? VAR_6.dqb_btime : VAR_1;
out:
 return VAR_7;
}
