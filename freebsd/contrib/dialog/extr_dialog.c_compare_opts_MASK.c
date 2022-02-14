
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
typedef TYPE_1__ Options ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
    Options *const *VAR_2 = (Options * const *) VAR_0;
    Options *const *VAR_3 = (Options * const *) VAR_1;
    return FUNC_0((*VAR_2)->name, (*VAR_3)->name);
}
