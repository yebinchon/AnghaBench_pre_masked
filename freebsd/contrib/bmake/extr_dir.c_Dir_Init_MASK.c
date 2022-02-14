
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int refCount; int files; int name; scalar_t__ hits; } ;
typedef int Path ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 void* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;

void
FUNC_5(const char *VAR_6)
{
    if (!VAR_6) {
 VAR_1 = FUNC_2(VAR_0);
 VAR_5 = FUNC_2(VAR_0);
 FUNC_1(&VAR_4, 0);
 FUNC_1(&VAR_3, 0);
 return;
    }
    FUNC_0(VAR_6);

    VAR_2 = FUNC_3(sizeof(Path));
    VAR_2->refCount = 1;
    VAR_2->hits = 0;
    VAR_2->name = FUNC_4(".DOTLAST");
    FUNC_1(&VAR_2->files, -1);
}
