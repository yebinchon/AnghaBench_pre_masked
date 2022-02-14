
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_iconv_shared {scalar_t__ ci_module; struct _citrus_iconv_shared* ci_ops; int (* io_uninit_shared ) (struct _citrus_iconv_shared*) ;scalar_t__ ci_closure; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct _citrus_iconv_shared*) ;
 int FUNC_2 (struct _citrus_iconv_shared*) ;

__attribute__((used)) static __inline void
FUNC_3(struct _citrus_iconv_shared *VAR_0)
{

 if (VAR_0) {
  if (VAR_0->ci_module) {
   if (VAR_0->ci_ops) {
    if (VAR_0->ci_closure)
     (*VAR_0->ci_ops->io_uninit_shared)(VAR_0);
    FUNC_1(VAR_0->ci_ops);
   }
   FUNC_0(VAR_0->ci_module);
  }
  FUNC_1(VAR_0);
 }
}
