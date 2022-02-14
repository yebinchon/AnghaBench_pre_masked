
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct _citrus_iconv {int dummy; } ;
typedef scalar_t__ iconv_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct _citrus_iconv*,char**,size_t*,char**,size_t*,int ,size_t*) ;
 int VAR_1 ;

size_t
FUNC_2(iconv_t VAR_2, char **VAR_3, size_t *VAR_4, char **VAR_5,
    size_t *VAR_6, uint32_t VAR_7, size_t *VAR_8)
{
 size_t VAR_9;
 int VAR_10;

 if (FUNC_0(VAR_2)) {
  VAR_1 = VAR_0;
  return ((size_t)-1);
 }

 VAR_10 = FUNC_1((struct _citrus_iconv *)(void *)VAR_2,
     VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, &VAR_9);
 if (VAR_8)
  *VAR_8 = VAR_9;
 if (VAR_10) {
  VAR_1 = VAR_10;
  VAR_9 = (size_t)-1;
 }

 return (VAR_9);
}
