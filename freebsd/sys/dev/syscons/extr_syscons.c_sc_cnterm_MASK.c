
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct consdev {int dummy; } ;
struct TYPE_2__ {int (* te_term ) (int *,void**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *,void**) ;

__attribute__((used)) static void
FUNC_5(struct consdev *VAR_7)
{
    void *VAR_8;
    int VAR_9;



    if (VAR_4 < 0)
 return;






    if (VAR_6 != ((void*)0)) {
 for (VAR_9 = 0; VAR_9 <= VAR_2; VAR_9++) {
     VAR_8 = VAR_5[VAR_9];
     VAR_5[VAR_9] = ((void*)0);
     (*VAR_6->te_term)(VAR_3, &VAR_8);
     FUNC_0(VAR_8, VAR_0);
 }
 VAR_6 = ((void*)0);
    }
    FUNC_3(VAR_4, VAR_1);
    VAR_4 = -1;
    VAR_3 = ((void*)0);
}
