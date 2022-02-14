
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_mapper {struct _citrus_mapper* cm_traits; scalar_t__ cm_module; struct _citrus_mapper* cm_ops; int (* mo_uninit ) (struct _citrus_mapper*) ;scalar_t__ cm_closure; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct _citrus_mapper*) ;
 int FUNC_2 (struct _citrus_mapper*) ;

__attribute__((used)) static void
FUNC_3(struct _citrus_mapper *VAR_0)
{
 if (VAR_0->cm_module) {
  if (VAR_0->cm_ops) {
   if (VAR_0->cm_closure)
    (*VAR_0->cm_ops->mo_uninit)(VAR_0);
   FUNC_1(VAR_0->cm_ops);
  }
  FUNC_0(VAR_0->cm_module);
 }
 FUNC_1(VAR_0->cm_traits);
 FUNC_1(VAR_0);
}
