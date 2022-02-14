
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dquot {TYPE_1__* dq_sb; int dq_id; int dq_type; } ;
struct TYPE_2__ {int s_dev; } ;


 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (struct dquot*,char) ;
 int FUNC_1 (int ,int ,int ,char) ;
 int FUNC_2 (struct dquot*,char) ;

__attribute__((used)) static void FUNC_3(struct dquot *const *VAR_2, char *VAR_3)
{
 struct dquot *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = VAR_2[VAR_5];
  if (VAR_4 && VAR_3[VAR_5] != VAR_1 &&
      !FUNC_2(VAR_4, VAR_3[VAR_5])) {



   FUNC_1(VAR_4->dq_type, VAR_4->dq_id,
        VAR_4->dq_sb->s_dev, VAR_3[VAR_5]);
  }
 }
}
