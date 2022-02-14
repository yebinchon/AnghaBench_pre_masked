
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobj {int dummy; } ;
struct iconv_xlat16 {void* f_ctp; void* t_ctp; TYPE_1__* d_csp; } ;
struct TYPE_2__ {int cp_refcount; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct kobj*,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1)
{
 struct iconv_xlat16 *VAR_2 = VAR_1;

 if (VAR_2->f_ctp && VAR_2->f_ctp != VAR_1)
  FUNC_0(VAR_2->f_ctp);
 if (VAR_2->t_ctp && VAR_2->t_ctp != VAR_1)
  FUNC_0(VAR_2->t_ctp);
 VAR_2->d_csp->cp_refcount--;
 FUNC_1((struct kobj*)VAR_1, VAR_0);
 return (0);
}
