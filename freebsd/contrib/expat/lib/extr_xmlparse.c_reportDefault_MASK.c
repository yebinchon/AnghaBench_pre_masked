
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum XML_Convert_Result { ____Placeholder_XML_Convert_Result } XML_Convert_Result ;
typedef TYPE_2__* XML_Parser ;
typedef int XML_Char ;
struct TYPE_5__ {char* m_eventPtr; char* m_eventEndPtr; int m_handlerArg; int (* m_defaultHandler ) (int ,int *,int) ;int * m_dataBuf; scalar_t__ m_dataBufEnd; TYPE_1__* m_openInternalEntities; int const* m_encoding; } ;
struct TYPE_4__ {char* internalEventPtr; char* internalEventEndPtr; } ;
typedef int ICHAR ;
typedef int ENCODING ;


 scalar_t__ FUNC_0 (int const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*,char const**,char const*,int **,int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_4(XML_Parser VAR_2, const ENCODING *VAR_3,
              const char *VAR_4, const char *VAR_5)
{
  if (FUNC_0(VAR_3, VAR_4)) {
    enum XML_Convert_Result VAR_6;
    const char **VAR_7;
    const char **VAR_8;
    if (VAR_3 == VAR_2->m_encoding) {
      VAR_7 = &VAR_2->m_eventPtr;
      VAR_8 = &VAR_2->m_eventEndPtr;
    }
    else {
      VAR_7 = &(VAR_2->m_openInternalEntities->internalEventPtr);
      VAR_8 = &(VAR_2->m_openInternalEntities->internalEventEndPtr);

    }
    do {
      ICHAR *VAR_9 = (ICHAR *)VAR_2->m_dataBuf;
      VAR_6 = FUNC_1(VAR_3, &VAR_4, VAR_5, &VAR_9, (ICHAR *)VAR_2->m_dataBufEnd);
      *VAR_8 = VAR_4;
      VAR_2->m_defaultHandler(VAR_2->m_handlerArg, VAR_2->m_dataBuf, (int)(VAR_9 - (ICHAR *)VAR_2->m_dataBuf));
      *VAR_7 = VAR_4;
    } while ((VAR_6 != VAR_0) && (VAR_6 != VAR_1));
  }
  else
    VAR_2->m_defaultHandler(VAR_2->m_handlerArg, (XML_Char *)VAR_4, (int)((XML_Char *)VAR_5 - (XML_Char *)VAR_4));
}
