
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int refCount; } ;
typedef TYPE_1__ Path ;


 TYPE_1__* FUNC_0 (int *,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

void
FUNC_2(const char *VAR_1)
{
    Path *VAR_2;

    if (VAR_1 != ((void*)0)) {




 if ((VAR_2 = FUNC_0(((void*)0), VAR_1))) {
     VAR_2->refCount += 1;
     if (VAR_0 && VAR_0 != VAR_2) {



  VAR_0->refCount -= 1;
  FUNC_1(VAR_0);
     }
     VAR_0 = VAR_2;
 }
    }
}
