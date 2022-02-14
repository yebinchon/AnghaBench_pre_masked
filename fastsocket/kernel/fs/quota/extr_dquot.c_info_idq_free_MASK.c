
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dqb_curinodes; scalar_t__ dqb_isoftlimit; scalar_t__ dqb_ihardlimit; } ;
struct dquot {TYPE_1__ dq_dqb; int dq_type; int dq_sb; int dq_flags; } ;
typedef scalar_t__ qsize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct dquot *VAR_4, qsize_t VAR_5)
{
 qsize_t VAR_6;

 if (FUNC_1(VAR_0, &VAR_4->dq_flags) ||
     VAR_4->dq_dqb.dqb_curinodes <= VAR_4->dq_dqb.dqb_isoftlimit ||
     !FUNC_0(VAR_4->dq_sb, VAR_4->dq_type))
  return VAR_3;

 VAR_6 = VAR_4->dq_dqb.dqb_curinodes - VAR_5;
 if (VAR_6 <= VAR_4->dq_dqb.dqb_isoftlimit)
  return VAR_2;
 if (VAR_4->dq_dqb.dqb_curinodes >= VAR_4->dq_dqb.dqb_ihardlimit &&
     VAR_6 < VAR_4->dq_dqb.dqb_ihardlimit)
  return VAR_1;
 return VAR_3;
}
