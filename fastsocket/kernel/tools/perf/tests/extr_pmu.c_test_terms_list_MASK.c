
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {int list; } ;
typedef struct list_head LIST_HEAD ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,struct list_head*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static struct list_head *FUNC_1(void)
{
 static LIST_HEAD(VAR_2);
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(&VAR_1[VAR_3].list, &VAR_2);

 return &VAR_2;
}
