
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * le_prev; } ;
struct callout {TYPE_1__ entry; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct callout *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0);
 VAR_2 = (VAR_1->entry.le_prev != ((void*)0));
 FUNC_1(&VAR_0);

 return (VAR_2);
}
