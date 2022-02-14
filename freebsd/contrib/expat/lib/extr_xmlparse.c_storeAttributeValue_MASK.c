
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum XML_Error { ____Placeholder_XML_Error } XML_Error ;
typedef int XML_Parser ;
typedef int XML_Bool ;
typedef int STRING_POOL ;
typedef int ENCODING ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int ,int const*,int ,char const*,char const*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static enum XML_Error
FUNC_6(XML_Parser VAR_2, const ENCODING *VAR_3, XML_Bool VAR_4,
                    const char *VAR_5, const char *VAR_6,
                    STRING_POOL *VAR_7)
{
  enum XML_Error VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
                                               VAR_6, VAR_7);
  if (VAR_8)
    return VAR_8;
  if (!VAR_4 && FUNC_5(VAR_7) && FUNC_4(VAR_7) == 0x20)
    FUNC_3(VAR_7);
  if (!FUNC_2(VAR_7, FUNC_0('\0')))
    return VAR_1;
  return VAR_0;
}
