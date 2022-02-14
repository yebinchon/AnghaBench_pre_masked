
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_iconv {int dummy; } ;
typedef scalar_t__ iconv_t ;
typedef int iconv_allocation_t ;


 scalar_t__ FUNC_0 (char const*,char const*,struct _citrus_iconv*) ;

int
FUNC_1(const char *VAR_0, const char *VAR_1, iconv_allocation_t *VAR_2)
{
 struct _citrus_iconv *VAR_3;

 VAR_3 = (struct _citrus_iconv *)VAR_2;
 return ((FUNC_0(VAR_0, VAR_1, VAR_3) == (iconv_t)-1) ? -1 : 0);
}
