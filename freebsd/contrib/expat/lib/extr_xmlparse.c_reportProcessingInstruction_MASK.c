
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* XML_Parser ;
typedef int XML_Char ;
struct TYPE_11__ {int minBytesPerChar; } ;
struct TYPE_10__ {int m_tempPool; int m_handlerArg; int (* m_processingInstructionHandler ) (int ,int const*,int *) ;scalar_t__ m_defaultHandler; } ;
typedef TYPE_2__ ENCODING ;


 int FUNC_0 (TYPE_2__ const*,char const*) ;
 char const* FUNC_1 (TYPE_2__ const*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *,TYPE_2__ const*,char const*,char const*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__ const*,char const*,char const*) ;
 int FUNC_7 (int ,int const*,int *) ;

__attribute__((used)) static int
FUNC_8(XML_Parser VAR_0, const ENCODING *VAR_1,
                            const char *VAR_2, const char *VAR_3)
{
  const XML_Char *VAR_4;
  XML_Char *VAR_5;
  const char *VAR_6;
  if (!VAR_0->m_processingInstructionHandler) {
    if (VAR_0->m_defaultHandler)
      FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3);
    return 1;
  }
  VAR_2 += VAR_1->minBytesPerChar * 2;
  VAR_6 = VAR_2 + FUNC_0(VAR_1, VAR_2);
  VAR_4 = FUNC_5(&VAR_0->m_tempPool, VAR_1, VAR_2, VAR_6);
  if (!VAR_4)
    return 0;
  FUNC_4(&VAR_0->m_tempPool);
  VAR_5 = FUNC_5(&VAR_0->m_tempPool, VAR_1,
                        FUNC_1(VAR_1, VAR_6),
                        VAR_3 - VAR_1->minBytesPerChar*2);
  if (!VAR_5)
    return 0;
  FUNC_2(VAR_5);
  VAR_0->m_processingInstructionHandler(VAR_0->m_handlerArg, VAR_4, VAR_5);
  FUNC_3(&VAR_0->m_tempPool);
  return 1;
}
