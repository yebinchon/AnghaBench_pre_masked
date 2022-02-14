
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * le_prev; } ;
struct callout {int * c_arg; int * c_func; TYPE_1__ entry; } ;


 int FUNC_0 (struct callout*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct callout *VAR_2)
{
 FUNC_1(&VAR_1);

 if (VAR_2->entry.le_prev != ((void*)0)) {
  FUNC_0(VAR_2, VAR_0);
  VAR_2->entry.le_prev = ((void*)0);
 }
 FUNC_2(&VAR_1);

 VAR_2->c_func = ((void*)0);
 VAR_2->c_arg = ((void*)0);
}
