
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_stdenc {scalar_t__ ce_module; struct _citrus_stdenc* ce_traits; struct _citrus_stdenc* ce_ops; int (* eo_uninit ) (struct _citrus_stdenc*) ;scalar_t__ ce_closure; } ;


 struct _citrus_stdenc VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct _citrus_stdenc*) ;
 int FUNC_2 (struct _citrus_stdenc*) ;

void
FUNC_3(struct _citrus_stdenc *VAR_1)
{

 if (VAR_1 == &VAR_0)
  return;

 if (VAR_1->ce_module) {
  if (VAR_1->ce_ops) {
   if (VAR_1->ce_closure && VAR_1->ce_ops->eo_uninit)
    (*VAR_1->ce_ops->eo_uninit)(VAR_1);
   FUNC_1(VAR_1->ce_ops);
  }
  FUNC_1(VAR_1->ce_traits);
  FUNC_0(VAR_1->ce_module);
 }
 FUNC_1(VAR_1);
}
