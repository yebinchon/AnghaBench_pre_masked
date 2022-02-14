
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int td_labels; } ;
typedef TYPE_1__ tdata_t ;
struct TYPE_6__ {int le_idx; char* le_name; } ;
typedef TYPE_2__ labelent_t ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int VAR_0 ;

int
FUNC_3(tdata_t *VAR_1, char *VAR_2)
{
 labelent_t VAR_3;
 labelent_t *VAR_4;

 if (FUNC_2(VAR_2, "BASE")) {
  VAR_4 = (labelent_t *)FUNC_1(VAR_1->td_labels);
  return (VAR_4 ? VAR_4->le_idx : -1);
 }

 VAR_3.le_name = VAR_2;

 if (!(VAR_4 = (labelent_t *)FUNC_0(VAR_1->td_labels, &VAR_3,
     VAR_0)))
  return (-1);

 return (VAR_4->le_idx);
}
