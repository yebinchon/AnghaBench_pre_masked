
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ima_measure_rule_entry {TYPE_1__* lsm; } ;
struct TYPE_2__ {int type; scalar_t__ rule; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct ima_measure_rule_entry *VAR_2,
        char *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_2->lsm[VAR_4].rule)
  return -VAR_1;

 VAR_2->lsm[VAR_4].type = VAR_5;
 VAR_6 = FUNC_0(VAR_2->lsm[VAR_4].type,
        VAR_0, VAR_3,
        &VAR_2->lsm[VAR_4].rule);
 if (!VAR_2->lsm[VAR_4].rule)
  return -VAR_1;
 return VAR_6;
}
