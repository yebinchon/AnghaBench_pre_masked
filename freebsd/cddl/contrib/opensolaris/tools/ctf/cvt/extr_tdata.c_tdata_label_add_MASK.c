
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int td_nextid; int td_labels; } ;
typedef TYPE_1__ tdata_t ;
struct TYPE_7__ {int le_idx; int le_name; } ;
typedef TYPE_2__ labelent_t ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

void
FUNC_3(tdata_t *VAR_1, const char *VAR_2, int VAR_3)
{
 labelent_t *VAR_4 = FUNC_1(sizeof (*VAR_4));

 VAR_4->le_name = FUNC_2(VAR_2);
 VAR_4->le_idx = (VAR_3 == -1 ? VAR_1->td_nextid - 1 : VAR_3);

 FUNC_0(&VAR_1->td_labels, VAR_4, VAR_0);
}
