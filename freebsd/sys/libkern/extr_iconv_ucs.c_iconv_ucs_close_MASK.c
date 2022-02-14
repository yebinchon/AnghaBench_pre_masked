
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobj {int dummy; } ;
struct iconv_ucs {int convtype; TYPE_2__* d_csp; TYPE_1__* d_cspf; scalar_t__ ctype; scalar_t__ t_ctp; scalar_t__ f_ctp; } ;
struct TYPE_4__ {int cp_refcount; } ;
struct TYPE_3__ {int cp_refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct kobj*,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_5)
{
 struct iconv_ucs *VAR_6 = VAR_5;

 if (VAR_6->f_ctp)
  FUNC_0(VAR_6->f_ctp);
 if (VAR_6->t_ctp)
  FUNC_0(VAR_6->t_ctp);
 if (VAR_6->ctype)
  FUNC_0(VAR_6->ctype);
 if (VAR_6->d_cspf)
  VAR_6->d_cspf->cp_refcount--;
 else if (VAR_6->convtype & (VAR_1 | VAR_0))
  VAR_6->d_csp->cp_refcount--;
 if (VAR_6->convtype & (VAR_3 | VAR_2))
  VAR_6->d_csp->cp_refcount--;
 FUNC_1((struct kobj*)VAR_5, VAR_4);
 return 0;
}
