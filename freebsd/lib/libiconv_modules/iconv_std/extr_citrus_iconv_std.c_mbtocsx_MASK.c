
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iconv_hooks {int dummy; } ;
struct _citrus_iconv_std_encoding {int se_ps; int se_handle; } ;
typedef int _index_t ;
typedef int _csid_t ;


 int FUNC_0 (int ,int *,int *,char**,size_t,int ,size_t*,struct iconv_hooks*) ;

__attribute__((used)) static __inline int
FUNC_1(struct _citrus_iconv_std_encoding *VAR_0,
    _csid_t *VAR_1, _index_t *VAR_2, char **VAR_3, size_t VAR_4, size_t *VAR_5,
    struct iconv_hooks *VAR_6)
{

 return (FUNC_0(VAR_0->se_handle, VAR_1, VAR_2, VAR_3, VAR_4, VAR_0->se_ps,
         VAR_5, VAR_6));
}
