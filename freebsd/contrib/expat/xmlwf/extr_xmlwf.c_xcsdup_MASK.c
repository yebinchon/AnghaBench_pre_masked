
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XML_Char ;


 scalar_t__* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,scalar_t__ const*,int) ;

__attribute__((used)) static XML_Char *FUNC_2(const XML_Char *VAR_0)
{
  XML_Char *VAR_1;
  int VAR_2 = 0;
  int VAR_3;


  while (VAR_0[VAR_2++] != 0) {

  }
  VAR_3 = VAR_2 * sizeof(XML_Char);
  VAR_1 = FUNC_0(VAR_3);
  if (VAR_1 == ((void*)0))
    return ((void*)0);
  FUNC_1(VAR_1, VAR_0, VAR_3);
  return VAR_1;
}
