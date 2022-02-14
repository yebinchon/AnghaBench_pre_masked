
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_4__ {scalar_t__ dqb_curspace; scalar_t__ dqb_rsvspace; scalar_t__ dqb_bhardlimit; scalar_t__ dqb_bsoftlimit; scalar_t__ dqb_btime; } ;
struct dquot {size_t dq_type; TYPE_1__ dq_dqb; int dq_flags; struct super_block* dq_sb; } ;
typedef scalar_t__ qsize_t ;
struct TYPE_6__ {TYPE_2__* info; } ;
struct TYPE_5__ {scalar_t__ dqi_bgrace; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct dquot*) ;
 TYPE_3__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,size_t) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct dquot *VAR_7, qsize_t VAR_8, int VAR_9, char *VAR_10)
{
 qsize_t VAR_11;
 struct super_block *VAR_12 = VAR_7->dq_sb;

 *VAR_10 = VAR_5;
 if (!FUNC_3(VAR_12, VAR_7->dq_type) ||
     FUNC_4(VAR_0, &VAR_7->dq_flags))
  return VAR_6;

 VAR_11 = VAR_7->dq_dqb.dqb_curspace + VAR_7->dq_dqb.dqb_rsvspace
  + VAR_8;

 if (VAR_7->dq_dqb.dqb_bhardlimit &&
     VAR_11 > VAR_7->dq_dqb.dqb_bhardlimit &&
            !FUNC_1(VAR_7)) {
  if (!VAR_9)
   *VAR_10 = VAR_2;
  return VAR_1;
 }

 if (VAR_7->dq_dqb.dqb_bsoftlimit &&
     VAR_11 > VAR_7->dq_dqb.dqb_bsoftlimit &&
     VAR_7->dq_dqb.dqb_btime &&
     FUNC_0() >= VAR_7->dq_dqb.dqb_btime &&
            !FUNC_1(VAR_7)) {
  if (!VAR_9)
   *VAR_10 = VAR_3;
  return VAR_1;
 }

 if (VAR_7->dq_dqb.dqb_bsoftlimit &&
     VAR_11 > VAR_7->dq_dqb.dqb_bsoftlimit &&
     VAR_7->dq_dqb.dqb_btime == 0) {
  if (!VAR_9) {
   *VAR_10 = VAR_4;
   VAR_7->dq_dqb.dqb_btime = FUNC_0() +
       FUNC_2(VAR_12)->info[VAR_7->dq_type].dqi_bgrace;
  }
  else




   return VAR_1;
 }

 return VAR_6;
}
