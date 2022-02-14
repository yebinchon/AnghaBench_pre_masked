
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v1_disk_dqblk {int dummy; } ;
struct TYPE_8__ {scalar_t__ dqb_bhardlimit; scalar_t__ dqb_bsoftlimit; scalar_t__ dqb_ihardlimit; scalar_t__ dqb_isoftlimit; } ;
struct dquot {int dq_type; int dq_flags; TYPE_2__ dq_dqb; int dq_id; TYPE_3__* dq_sb; } ;
struct TYPE_11__ {int reads; } ;
struct TYPE_10__ {int * files; } ;
struct TYPE_9__ {TYPE_1__* s_op; } ;
struct TYPE_7__ {int (* quota_read ) (TYPE_3__*,int,char*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_0 (struct v1_disk_dqblk*,int ,int) ;
 TYPE_4__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_3__*,int,char*,int,int ) ;
 int FUNC_4 (TYPE_2__*,struct v1_disk_dqblk*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct dquot *VAR_3)
{
 int VAR_4 = VAR_3->dq_type;
 struct v1_disk_dqblk VAR_5;

 if (!FUNC_1(VAR_3->dq_sb)->files[VAR_4])
  return -VAR_1;


 FUNC_0(&VAR_5, 0, sizeof(struct v1_disk_dqblk));
 VAR_3->dq_sb->s_op->quota_read(VAR_3->dq_sb, VAR_4, (char *)&VAR_5,
   sizeof(struct v1_disk_dqblk), FUNC_5(VAR_3->dq_id));

 FUNC_4(&VAR_3->dq_dqb, &VAR_5);
 if (VAR_3->dq_dqb.dqb_bhardlimit == 0 &&
     VAR_3->dq_dqb.dqb_bsoftlimit == 0 &&
     VAR_3->dq_dqb.dqb_ihardlimit == 0 &&
     VAR_3->dq_dqb.dqb_isoftlimit == 0)
  FUNC_2(VAR_0, &VAR_3->dq_flags);
 VAR_2.reads++;

 return 0;
}
