
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iconv_hooks {int dummy; } ;
struct _citrus_iconv_std_encoding {int se_ps; int se_handle; } ;
typedef int _wc_t ;


 int FUNC_0 (int ,char*,size_t,int ,int ,size_t*,struct iconv_hooks*) ;

__attribute__((used)) static __inline int
FUNC_1(struct _citrus_iconv_std_encoding *VAR_0,
    char *VAR_1, size_t VAR_2, _wc_t VAR_3, size_t *VAR_4,
    struct iconv_hooks *VAR_5)
{

 return (FUNC_0(VAR_0->se_handle, VAR_1, VAR_2, VAR_3, VAR_0->se_ps, VAR_4,
        VAR_5));
}
