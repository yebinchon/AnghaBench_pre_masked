
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* XML_Parser ;
typedef int XML_Char ;
struct TYPE_9__ {int minBytesPerChar; } ;
struct TYPE_8__ {int m_tempPool; int m_handlerArg; int (* m_commentHandler ) (int ,int *) ;scalar_t__ m_defaultHandler; } ;
typedef TYPE_2__ ENCODING ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,TYPE_2__ const*,char const*,char const*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__ const*,char const*,char const*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(XML_Parser VAR_0, const ENCODING *VAR_1,
              const char *VAR_2, const char *VAR_3)
{
  XML_Char *VAR_4;
  if (!VAR_0->m_commentHandler) {
    if (VAR_0->m_defaultHandler)
      FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
    return 1;
  }
  VAR_4 = FUNC_2(&VAR_0->m_tempPool,
                         VAR_1,
                         VAR_2 + VAR_1->minBytesPerChar * 4,
                         VAR_3 - VAR_1->minBytesPerChar * 3);
  if (!VAR_4)
    return 0;
  FUNC_0(VAR_4);
  VAR_0->m_commentHandler(VAR_0->m_handlerArg, VAR_4);
  FUNC_1(&VAR_0->m_tempPool);
  return 1;
}
