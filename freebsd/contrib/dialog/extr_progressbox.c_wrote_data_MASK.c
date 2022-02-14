
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* text; struct TYPE_4__* link; } ;
typedef TYPE_1__ WROTE ;
struct TYPE_5__ {TYPE_1__* wrote; } ;
typedef TYPE_2__ MY_OBJ ;



__attribute__((used)) static const char *
FUNC_0(MY_OBJ * VAR_0, int VAR_1)
{
    const char *VAR_2 = ((void*)0);
    WROTE *VAR_3 = VAR_0->wrote;
    while (VAR_3 != ((void*)0) && VAR_1 > 0) {
 VAR_2 = VAR_3->text;
 VAR_3 = VAR_3->link;
 VAR_1--;
    }
    return VAR_2;
}
