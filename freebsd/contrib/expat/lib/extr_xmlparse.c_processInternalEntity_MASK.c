
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef enum XML_Error { ____Placeholder_XML_Error } XML_Error ;
typedef TYPE_2__* XML_Parser ;
typedef int XML_Bool ;
struct TYPE_13__ {int processed; int open; scalar_t__ is_param; scalar_t__ textLen; scalar_t__ textPtr; } ;
struct TYPE_12__ {struct TYPE_12__* next; int * internalEventEndPtr; int * internalEventPtr; int betweenDecl; int startTagLevel; TYPE_4__* entity; } ;
struct TYPE_10__ {scalar_t__ parsing; } ;
struct TYPE_11__ {TYPE_3__* m_freeInternalEntities; TYPE_3__* m_openInternalEntities; int m_processor; TYPE_1__ m_parsingStatus; int m_internalEncoding; int m_tagLevel; } ;
typedef TYPE_3__ OPEN_INTERNAL_ENTITY ;
typedef TYPE_4__ ENTITY ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char const*,char const*,char const**) ;
 int FUNC_2 (TYPE_2__*,int ,int ,char const*,char const*,char const**,int ) ;
 int FUNC_3 (TYPE_2__*,int ,char const*,char const*,int,char const*,char const**,int ) ;
 int VAR_5 ;

__attribute__((used)) static enum XML_Error
FUNC_4(XML_Parser VAR_6, ENTITY *VAR_7,
                      XML_Bool VAR_8)
{
  const char *VAR_9, *VAR_10;
  const char *VAR_11;
  enum XML_Error VAR_12;
  OPEN_INTERNAL_ENTITY *VAR_13;

  if (VAR_6->m_freeInternalEntities) {
    VAR_13 = VAR_6->m_freeInternalEntities;
    VAR_6->m_freeInternalEntities = VAR_13->next;
  }
  else {
    VAR_13 = (OPEN_INTERNAL_ENTITY *)FUNC_0(VAR_6, sizeof(OPEN_INTERNAL_ENTITY));
    if (!VAR_13)
      return VAR_1;
  }
  VAR_7->open = VAR_4;
  VAR_7->processed = 0;
  VAR_13->next = VAR_6->m_openInternalEntities;
  VAR_6->m_openInternalEntities = VAR_13;
  VAR_13->entity = VAR_7;
  VAR_13->startTagLevel = VAR_6->m_tagLevel;
  VAR_13->betweenDecl = VAR_8;
  VAR_13->internalEventPtr = ((void*)0);
  VAR_13->internalEventEndPtr = ((void*)0);
  VAR_9 = (char *)VAR_7->textPtr;
  VAR_10 = (char *)(VAR_7->textPtr + VAR_7->textLen);

  VAR_11 = VAR_9;
    VAR_12 = FUNC_2(VAR_6, VAR_6->m_tagLevel, VAR_6->m_internalEncoding, VAR_9,
                       VAR_10, &VAR_11, VAR_2);

  if (VAR_12 == VAR_0) {
    if (VAR_10 != VAR_11 && VAR_6->m_parsingStatus.parsing == VAR_3) {
      VAR_7->processed = (int)(VAR_11 - VAR_9);
      VAR_6->m_processor = VAR_5;
    }
    else {
      VAR_7->open = VAR_2;
      VAR_6->m_openInternalEntities = VAR_13->next;

      VAR_13->next = VAR_6->m_freeInternalEntities;
      VAR_6->m_freeInternalEntities = VAR_13;
    }
  }
  return VAR_12;
}
