
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobj {int dummy; } ;
struct iconv_xlat {TYPE_1__* d_csp; } ;
struct TYPE_2__ {int cp_refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobj*,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1)
{
 struct iconv_xlat *VAR_2 = VAR_1;

 VAR_2->d_csp->cp_refcount--;
 FUNC_0((struct kobj*)VAR_1, VAR_0);
 return 0;
}
