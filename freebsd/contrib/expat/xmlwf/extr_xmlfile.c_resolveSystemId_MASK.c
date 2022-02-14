
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XML_Char ;


 scalar_t__ const FUNC_0 (char) ;
 scalar_t__ FUNC_1 (scalar_t__ const) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const*) ;
 int FUNC_4 (scalar_t__ const*) ;
 scalar_t__* FUNC_5 (scalar_t__*,scalar_t__ const) ;

__attribute__((used)) static const XML_Char *
FUNC_6(const XML_Char *VAR_0, const XML_Char *VAR_1,
                XML_Char **VAR_2)
{
  XML_Char *VAR_3;
  *VAR_2 = 0;
  if (!VAR_0
      || *VAR_1 == FUNC_0('/')




     )
    return VAR_1;
  *VAR_2 = (XML_Char *)FUNC_2((FUNC_4(VAR_0) + FUNC_4(VAR_1) + 2)
                               * sizeof(XML_Char));
  if (!*VAR_2)
    return VAR_1;
  FUNC_3(*VAR_2, VAR_0);
  VAR_3 = *VAR_2;
  if (FUNC_5(VAR_3, FUNC_0('/')))
    VAR_3 = FUNC_5(VAR_3, FUNC_0('/')) + 1;




  FUNC_3(VAR_3, VAR_1);
  return *VAR_2;
}
