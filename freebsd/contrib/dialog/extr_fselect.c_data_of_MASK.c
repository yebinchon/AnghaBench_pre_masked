
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** data; size_t choice; } ;
typedef TYPE_1__ LIST ;



__attribute__((used)) static char *
FUNC_0(LIST * VAR_0)
{
    if (VAR_0 != 0
 && VAR_0->data != 0)
 return VAR_0->data[VAR_0->choice];
    return 0;
}
