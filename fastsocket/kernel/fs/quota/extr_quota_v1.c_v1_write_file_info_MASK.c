
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v1_disk_dqblk {int dqb_btime; int dqb_itime; } ;
struct super_block {TYPE_2__* s_op; } ;
struct quota_info {TYPE_1__* info; } ;
struct TYPE_4__ {int (* quota_read ) (struct super_block*,int,char*,int,int ) ;int (* quota_write ) (struct super_block*,int,char*,int,int ) ;} ;
struct TYPE_3__ {int dqi_bgrace; int dqi_igrace; int dqi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct quota_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int,char*,int,int ) ;
 int FUNC_2 (struct super_block*,int,char*,int,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_2, int VAR_3)
{
 struct quota_info *VAR_4 = FUNC_0(VAR_2);
 struct v1_disk_dqblk VAR_5;
 int VAR_6;

 VAR_4->info[VAR_3].dqi_flags &= ~VAR_0;
 VAR_6 = VAR_2->s_op->quota_read(VAR_2, VAR_3, (char *)&VAR_5,
    sizeof(struct v1_disk_dqblk), FUNC_3(0));
 if (VAR_6 != sizeof(struct v1_disk_dqblk)) {
  if (VAR_6 >= 0)
   VAR_6 = -VAR_1;
  goto out;
 }
 VAR_5.dqb_itime = VAR_4->info[VAR_3].dqi_igrace;
 VAR_5.dqb_btime = VAR_4->info[VAR_3].dqi_bgrace;
 VAR_6 = VAR_2->s_op->quota_write(VAR_2, VAR_3, (char *)&VAR_5,
       sizeof(struct v1_disk_dqblk), FUNC_3(0));
 if (VAR_6 == sizeof(struct v1_disk_dqblk))
  VAR_6 = 0;
 else if (VAR_6 > 0)
  VAR_6 = -VAR_1;
out:
 return VAR_6;
}
