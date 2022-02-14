
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum XML_Error { ____Placeholder_XML_Error } XML_Error ;
typedef int encodingBuf ;
typedef TYPE_1__* XML_Parser ;
struct TYPE_4__ {int* m_protocolEncodingName; int m_encoding; int m_initEncoding; scalar_t__ m_ns; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,char const*) ;
 scalar_t__ FUNC_1 (int *,int *,char const*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (int *,int *,char const*) ;

__attribute__((used)) static enum XML_Error
FUNC_4(XML_Parser VAR_1)
{
  const char *VAR_2;
  VAR_2 = VAR_1->m_protocolEncodingName;

  if ((VAR_1->m_ns ? FUNC_1 : FUNC_0)(&VAR_1->m_initEncoding, &VAR_1->m_encoding, VAR_2))
    return VAR_0;
  return FUNC_2(VAR_1, VAR_1->m_protocolEncodingName);
}
