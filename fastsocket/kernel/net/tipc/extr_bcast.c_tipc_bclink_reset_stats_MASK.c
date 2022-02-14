
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(void)
{
 if (!VAR_2)
  return -VAR_0;

 FUNC_1(&VAR_1);
 FUNC_0(&VAR_2->stats, 0, sizeof(VAR_2->stats));
 FUNC_2(&VAR_1);
 return 0;
}
