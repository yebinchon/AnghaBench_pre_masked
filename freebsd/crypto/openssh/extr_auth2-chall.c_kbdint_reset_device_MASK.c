
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* device; int * ctxt; } ;
struct TYPE_4__ {int (* free_ctx ) (int *) ;} ;
typedef TYPE_2__ KbdintAuthctxt ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(KbdintAuthctxt *VAR_0)
{
 if (VAR_0->ctxt) {
  VAR_0->device->free_ctx(VAR_0->ctxt);
  VAR_0->ctxt = ((void*)0);
 }
 VAR_0->device = ((void*)0);
}
