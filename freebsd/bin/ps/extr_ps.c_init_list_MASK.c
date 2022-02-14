
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ptr; } ;
struct listinfo {int elemsize; char const* lname; TYPE_1__ l; int addelem; scalar_t__ maxcount; scalar_t__ count; } ;
typedef int addelem_rtn ;



__attribute__((used)) static void
FUNC_0(struct listinfo *VAR_0, addelem_rtn VAR_1, int VAR_2,
    const char *VAR_3)
{

 VAR_0->count = VAR_0->maxcount = 0;
 VAR_0->elemsize = VAR_2;
 VAR_0->addelem = VAR_1;
 VAR_0->lname = VAR_3;
 VAR_0->l.ptr = ((void*)0);
}
