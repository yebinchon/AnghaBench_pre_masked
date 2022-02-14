
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct _citrus_iconv {TYPE_2__* cv_shared; } ;
struct TYPE_4__ {TYPE_1__* ci_ops; } ;
struct TYPE_3__ {int (* io_convert ) (struct _citrus_iconv*,char**,size_t*,char**,size_t*,int ,size_t*) ;} ;


 int FUNC_0 (struct _citrus_iconv*,char**,size_t*,char**,size_t*,int ,size_t*) ;

__attribute__((used)) static __inline int
FUNC_1(struct _citrus_iconv * __restrict VAR_0,
    char * __restrict * __restrict VAR_1, size_t * __restrict VAR_2,
    char * __restrict * __restrict VAR_3, size_t * __restrict VAR_4,
    uint32_t VAR_5, size_t * __restrict VAR_6)
{

 return (*VAR_0->cv_shared->ci_ops->io_convert)(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6);
}
