
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iconv_cspair {int dummy; } ;
struct iconv_converter_class {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,struct iconv_converter_class**) ;
 int FUNC_1 (char const*,char const*,struct iconv_converter_class*,int *,struct iconv_cspair**) ;

int
FUNC_2(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 struct iconv_converter_class *VAR_4;
 struct iconv_cspair *VAR_5;

 if (FUNC_0(VAR_1, &VAR_4) != 0)
  return VAR_0;

 return FUNC_1(VAR_2, VAR_3, VAR_4, ((void*)0), &VAR_5);
}
