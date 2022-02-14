
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dqb_curinodes; scalar_t__ dqb_ihardlimit; scalar_t__ dqb_isoftlimit; scalar_t__ dqb_itime; } ;
struct dquot {size_t dq_type; int dq_sb; TYPE_1__ dq_dqb; int dq_flags; } ;
typedef scalar_t__ qsize_t ;
struct TYPE_6__ {TYPE_2__* info; } ;
struct TYPE_5__ {scalar_t__ dqi_igrace; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct dquot*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct dquot *VAR_7, qsize_t VAR_8, char *VAR_9)
{
 qsize_t VAR_10 = VAR_7->dq_dqb.dqb_curinodes + VAR_8;

 *VAR_9 = VAR_5;
 if (!FUNC_3(VAR_7->dq_sb, VAR_7->dq_type) ||
     FUNC_4(VAR_0, &VAR_7->dq_flags))
  return VAR_6;

 if (VAR_7->dq_dqb.dqb_ihardlimit &&
     VAR_10 > VAR_7->dq_dqb.dqb_ihardlimit &&
            !FUNC_1(VAR_7)) {
  *VAR_9 = VAR_2;
  return VAR_1;
 }

 if (VAR_7->dq_dqb.dqb_isoftlimit &&
     VAR_10 > VAR_7->dq_dqb.dqb_isoftlimit &&
     VAR_7->dq_dqb.dqb_itime &&
     FUNC_0() >= VAR_7->dq_dqb.dqb_itime &&
            !FUNC_1(VAR_7)) {
  *VAR_9 = VAR_3;
  return VAR_1;
 }

 if (VAR_7->dq_dqb.dqb_isoftlimit &&
     VAR_10 > VAR_7->dq_dqb.dqb_isoftlimit &&
     VAR_7->dq_dqb.dqb_itime == 0) {
  *VAR_9 = VAR_4;
  VAR_7->dq_dqb.dqb_itime = FUNC_0() +
      FUNC_2(VAR_7->dq_sb)->info[VAR_7->dq_type].dqi_igrace;
 }

 return VAR_6;
}
