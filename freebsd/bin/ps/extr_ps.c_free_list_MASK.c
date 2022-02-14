
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ptr; } ;
struct listinfo {TYPE_1__ l; int * lname; int * addelem; scalar_t__ maxcount; scalar_t__ elemsize; scalar_t__ count; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct listinfo *VAR_0)
{

 VAR_0->count = VAR_0->elemsize = VAR_0->maxcount = 0;
 if (VAR_0->l.ptr != ((void*)0))
  FUNC_0(VAR_0->l.ptr);
 VAR_0->addelem = ((void*)0);
 VAR_0->lname = ((void*)0);
 VAR_0->l.ptr = ((void*)0);
}
