
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iconv_hooks {int dummy; } ;
struct _citrus_stdenc {TYPE_1__* ce_ops; } ;
typedef int _citrus_index_t ;
typedef int _citrus_csid_t ;
struct TYPE_2__ {int (* eo_mbtocs ) (struct _citrus_stdenc*,int *,int *,char**,size_t,void*,size_t*,struct iconv_hooks*) ;} ;


 int FUNC_0 (struct _citrus_stdenc*,int *,int *,char**,size_t,void*,size_t*,struct iconv_hooks*) ;

__attribute__((used)) static __inline int
FUNC_1(struct _citrus_stdenc * __restrict VAR_0,
    _citrus_csid_t * __restrict VAR_1, _citrus_index_t * __restrict VAR_2,
    char ** __restrict VAR_3, size_t VAR_4, void * __restrict VAR_5,
    size_t * __restrict VAR_6, struct iconv_hooks *VAR_7)
{

 return ((*VAR_0->ce_ops->eo_mbtocs)(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7));
}
