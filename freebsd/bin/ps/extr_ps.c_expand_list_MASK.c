
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ptr; } ;
struct listinfo {int maxcount; int elemsize; TYPE_1__ l; int lname; } ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (int,char*,int,int ) ;

__attribute__((used)) static void *
FUNC_3(struct listinfo *VAR_0)
{
 void *VAR_1;
 int VAR_2;

 VAR_2 = (VAR_0->maxcount + 1) << 1;
 VAR_1 = FUNC_1(VAR_0->l.ptr, VAR_2 * VAR_0->elemsize);
 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0->l.ptr);
  FUNC_2(1, "realloc to %d %ss failed", VAR_2, VAR_0->lname);
 }
 VAR_0->maxcount = VAR_2;
 VAR_0->l.ptr = VAR_1;

 return (VAR_1);
}
