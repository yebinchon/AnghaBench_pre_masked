
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum protection_level { ____Placeholder_protection_level } protection_level ;
struct TYPE_2__ {int size; int (* end ) (int *) ;} ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;

void
FUNC_3(void)
{
    if (VAR_2 != ((void*)0)) {
 if(VAR_2->end)
     (*VAR_2->end)(VAR_0);
 if (VAR_0 != ((void*)0)) {
     FUNC_1(VAR_0, 0, VAR_2->size);
     FUNC_0(VAR_0);
     VAR_0 = ((void*)0);
 }
    }
    VAR_3 = 0;
    VAR_1 = (enum protection_level)0;
}
