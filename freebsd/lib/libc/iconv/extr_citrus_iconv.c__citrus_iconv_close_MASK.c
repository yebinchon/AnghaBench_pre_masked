
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct _citrus_iconv {TYPE_2__* cv_shared; } ;
struct TYPE_4__ {TYPE_1__* ci_ops; } ;
struct TYPE_3__ {int (* io_uninit_context ) (struct _citrus_iconv*) ;} ;


 int FUNC_0 (struct _citrus_iconv*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct _citrus_iconv*) ;

void
FUNC_3(struct _citrus_iconv *VAR_0)
{

 if (VAR_0) {
  (*VAR_0->cv_shared->ci_ops->io_uninit_context)(VAR_0);
  FUNC_1(VAR_0->cv_shared);
  FUNC_0(VAR_0);
 }
}
