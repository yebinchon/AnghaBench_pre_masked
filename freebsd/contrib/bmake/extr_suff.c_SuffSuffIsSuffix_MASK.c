
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nameLen; char* name; } ;
struct TYPE_5__ {scalar_t__ len; char* ename; } ;
typedef TYPE_1__ SuffixCmpData ;
typedef TYPE_2__ Suff ;



__attribute__((used)) static char *
FUNC_0(const Suff *VAR_0, const SuffixCmpData *VAR_1)
{
    char *VAR_2;
    char *VAR_3;

    if (VAR_1->len < VAR_0->nameLen)
 return ((void*)0);

    VAR_2 = VAR_0->name + VAR_0->nameLen;
    VAR_3 = VAR_1->ename;

    while (VAR_2 >= VAR_0->name && *VAR_2 == *VAR_3) {
 VAR_2--;
 VAR_3--;
    }

    return (VAR_2 == VAR_0->name - 1 ? VAR_3 : ((void*)0));
}
