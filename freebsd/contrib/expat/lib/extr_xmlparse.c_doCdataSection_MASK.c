
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum XML_Error { ____Placeholder_XML_Error } XML_Error ;
typedef enum XML_Convert_Result { ____Placeholder_XML_Convert_Result } XML_Convert_Result ;
typedef TYPE_3__* XML_Parser ;
typedef int (* XML_CharacterDataHandler ) (int ,int*,int) ;
typedef int XML_Char ;
typedef int XML_Bool ;
struct TYPE_7__ {int parsing; } ;
struct TYPE_8__ {char* m_eventPtr; char* m_eventEndPtr; int* m_dataBuf; TYPE_2__ m_parsingStatus; int m_defaultHandler; int m_handlerArg; scalar_t__ m_dataBufEnd; int (* m_characterDataHandler ) (int ,int*,int) ;int (* m_endCdataSectionHandler ) (int ) ;TYPE_1__* m_openInternalEntities; int const* m_encoding; } ;
struct TYPE_6__ {char* internalEventPtr; char* internalEventEndPtr; } ;
typedef int ICHAR ;
typedef int ENCODING ;


 int FUNC_0 (int const*,char const*) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int const*,char const*,char const*,char const**) ;
 int FUNC_2 (int const*,char const**,char const*,int **,int *) ;
 int FUNC_3 (TYPE_3__*,int const*,char const*,char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (int ,int*,int) ;

__attribute__((used)) static enum XML_Error
FUNC_7(XML_Parser VAR_8,
               const ENCODING *VAR_9,
               const char **VAR_10,
               const char *VAR_11,
               const char **VAR_12,
               XML_Bool VAR_13)
{
  const char *VAR_14 = *VAR_10;
  const char **VAR_15;
  const char **VAR_16;
  if (VAR_9 == VAR_8->m_encoding) {
    VAR_15 = &VAR_8->m_eventPtr;
    *VAR_15 = VAR_14;
    VAR_16 = &VAR_8->m_eventEndPtr;
  }
  else {
    VAR_15 = &(VAR_8->m_openInternalEntities->internalEventPtr);
    VAR_16 = &(VAR_8->m_openInternalEntities->internalEventEndPtr);
  }
  *VAR_15 = VAR_14;
  *VAR_10 = ((void*)0);

  for (;;) {
    const char *VAR_17;
    int VAR_18 = FUNC_1(VAR_9, VAR_14, VAR_11, &VAR_17);
    *VAR_16 = VAR_17;
    switch (VAR_18) {
    case 134:
      if (VAR_8->m_endCdataSectionHandler)
        VAR_8->m_endCdataSectionHandler(VAR_8->m_handlerArg);





      else if (VAR_8->m_defaultHandler)
        FUNC_3(VAR_8, VAR_9, VAR_14, VAR_17);
      *VAR_10 = VAR_17;
      *VAR_12 = VAR_17;
      if (VAR_8->m_parsingStatus.parsing == 136)
        return VAR_2;
      else
        return VAR_4;
    case 132:
      if (VAR_8->m_characterDataHandler) {
        XML_Char VAR_19 = 0xA;
        VAR_8->m_characterDataHandler(VAR_8->m_handlerArg, &VAR_19, 1);
      }
      else if (VAR_8->m_defaultHandler)
        FUNC_3(VAR_8, VAR_9, VAR_14, VAR_17);
      break;
    case 133:
      {
        XML_CharacterDataHandler VAR_20 = VAR_8->m_characterDataHandler;
        if (VAR_20) {
          if (FUNC_0(VAR_9, VAR_14)) {
            for (;;) {
              ICHAR *VAR_21 = (ICHAR *)VAR_8->m_dataBuf;
              const enum XML_Convert_Result VAR_22 = FUNC_2(VAR_9, &VAR_14, VAR_17, &VAR_21, (ICHAR *)VAR_8->m_dataBufEnd);
              *VAR_16 = VAR_17;
              VAR_20(VAR_8->m_handlerArg, VAR_8->m_dataBuf,
                              (int)(VAR_21 - (ICHAR *)VAR_8->m_dataBuf));
              if ((VAR_22 == VAR_0) || (VAR_22 == VAR_1))
                break;
              *VAR_15 = VAR_14;
            }
          }
          else
            VAR_20(VAR_8->m_handlerArg,
                            (XML_Char *)VAR_14,
                            (int)((XML_Char *)VAR_17 - (XML_Char *)VAR_14));
        }
        else if (VAR_8->m_defaultHandler)
          FUNC_3(VAR_8, VAR_9, VAR_14, VAR_17);
      }
      break;
    case 131:
      *VAR_15 = VAR_17;
      return VAR_3;
    case 128:
      if (VAR_13) {
        *VAR_12 = VAR_14;
        return VAR_4;
      }
      return VAR_5;
    case 129:
    case 130:
      if (VAR_13) {
        *VAR_12 = VAR_14;
        return VAR_4;
      }
      return VAR_6;
    default:







      *VAR_15 = VAR_17;
      return VAR_7;

    }

    *VAR_15 = VAR_14 = VAR_17;
    switch (VAR_8->m_parsingStatus.parsing) {
    case 135:
      *VAR_12 = VAR_17;
      return VAR_4;
    case 136:
      return VAR_2;
    default: ;
    }
  }

}
