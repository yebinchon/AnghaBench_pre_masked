
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XML_Char ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*) ;
 scalar_t__ FUNC_1 (int const*,int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_1, const void *VAR_2)
{
  const XML_Char *VAR_3 = *(const XML_Char **)VAR_1;
  const XML_Char *VAR_4 = *(const XML_Char **)VAR_2;
  int VAR_5 = (FUNC_1(VAR_3, VAR_0) != 0);
  int VAR_6 = (FUNC_1(VAR_3, VAR_0) != 0);
  if (VAR_5 != VAR_6)
    return VAR_5 - VAR_6;
  return FUNC_0(VAR_3, VAR_4);
}
