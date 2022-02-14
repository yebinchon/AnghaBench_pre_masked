
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* XML_Parser ;
typedef int XML_Char ;
struct TYPE_4__ {int parsing; } ;
struct TYPE_5__ {scalar_t__ m_hash_secret_salt; int m_paramEntityParsing; void* m_useForeignDTD; void* m_isParamEntity; TYPE_1__ m_parsingStatus; int * m_parentParser; int * m_unknownEncodingData; int * m_unknownEncodingRelease; int * m_unknownEncodingMem; scalar_t__ m_nSpecifiedAtts; int * m_inheritedBindings; int * m_tagStack; scalar_t__ m_tagLevel; int m_defaultExpandInternalEntities; int * m_openInternalEntities; int * m_positionPtr; int * m_eventEndPtr; int * m_eventPtr; int m_errorCode; int m_position; void* m_declAttributeIsId; void* m_declAttributeIsCdata; int * m_declNotationPublicId; int * m_declNotationName; int * m_declAttributeType; int * m_doctypePubid; int * m_doctypeSysid; int * m_doctypeName; int * m_declEntity; int * m_declAttributeId; int * m_declElementType; int * m_parseEndPtr; scalar_t__ m_parseEndByteIndex; int m_buffer; int m_bufferEnd; int m_bufferPtr; int * m_xmlDeclHandler; int * m_entityDeclHandler; int * m_attlistDeclHandler; int * m_elementDeclHandler; int * m_skippedEntityHandler; struct TYPE_5__* m_externalEntityRefHandlerArg; int * m_externalEntityRefHandler; int * m_notStandaloneHandler; int * m_endNamespaceDeclHandler; int * m_startNamespaceDeclHandler; int * m_notationDeclHandler; int * m_unparsedEntityDeclHandler; int * m_endDoctypeDeclHandler; int * m_startDoctypeDeclHandler; int * m_defaultHandler; int * m_endCdataSectionHandler; int * m_startCdataSectionHandler; int * m_commentHandler; int * m_processingInstructionHandler; int * m_characterDataHandler; int * m_endElementHandler; int * m_startElementHandler; int * m_handlerArg; int * m_userData; int m_encoding; int m_initEncoding; int * m_curBase; int m_mem; int m_protocolEncodingName; int m_prologState; int m_processor; } ;
typedef int POSITION ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(XML_Parser VAR_6, const XML_Char *VAR_7)
{
  VAR_6->m_processor = VAR_5;
  FUNC_1(&VAR_6->m_prologState);
  if (VAR_7 != ((void*)0)) {
    VAR_6->m_protocolEncodingName = FUNC_2(VAR_7, &(VAR_6->m_mem));
  }
  VAR_6->m_curBase = ((void*)0);
  FUNC_0(&VAR_6->m_initEncoding, &VAR_6->m_encoding, 0);
  VAR_6->m_userData = ((void*)0);
  VAR_6->m_handlerArg = ((void*)0);
  VAR_6->m_startElementHandler = ((void*)0);
  VAR_6->m_endElementHandler = ((void*)0);
  VAR_6->m_characterDataHandler = ((void*)0);
  VAR_6->m_processingInstructionHandler = ((void*)0);
  VAR_6->m_commentHandler = ((void*)0);
  VAR_6->m_startCdataSectionHandler = ((void*)0);
  VAR_6->m_endCdataSectionHandler = ((void*)0);
  VAR_6->m_defaultHandler = ((void*)0);
  VAR_6->m_startDoctypeDeclHandler = ((void*)0);
  VAR_6->m_endDoctypeDeclHandler = ((void*)0);
  VAR_6->m_unparsedEntityDeclHandler = ((void*)0);
  VAR_6->m_notationDeclHandler = ((void*)0);
  VAR_6->m_startNamespaceDeclHandler = ((void*)0);
  VAR_6->m_endNamespaceDeclHandler = ((void*)0);
  VAR_6->m_notStandaloneHandler = ((void*)0);
  VAR_6->m_externalEntityRefHandler = ((void*)0);
  VAR_6->m_externalEntityRefHandlerArg = VAR_6;
  VAR_6->m_skippedEntityHandler = ((void*)0);
  VAR_6->m_elementDeclHandler = ((void*)0);
  VAR_6->m_attlistDeclHandler = ((void*)0);
  VAR_6->m_entityDeclHandler = ((void*)0);
  VAR_6->m_xmlDeclHandler = ((void*)0);
  VAR_6->m_bufferPtr = VAR_6->m_buffer;
  VAR_6->m_bufferEnd = VAR_6->m_buffer;
  VAR_6->m_parseEndByteIndex = 0;
  VAR_6->m_parseEndPtr = ((void*)0);
  VAR_6->m_declElementType = ((void*)0);
  VAR_6->m_declAttributeId = ((void*)0);
  VAR_6->m_declEntity = ((void*)0);
  VAR_6->m_doctypeName = ((void*)0);
  VAR_6->m_doctypeSysid = ((void*)0);
  VAR_6->m_doctypePubid = ((void*)0);
  VAR_6->m_declAttributeType = ((void*)0);
  VAR_6->m_declNotationName = ((void*)0);
  VAR_6->m_declNotationPublicId = ((void*)0);
  VAR_6->m_declAttributeIsCdata = VAR_1;
  VAR_6->m_declAttributeIsId = VAR_1;
  FUNC_3(&VAR_6->m_position, 0, sizeof(POSITION));
  VAR_6->m_errorCode = VAR_0;
  VAR_6->m_eventPtr = ((void*)0);
  VAR_6->m_eventEndPtr = ((void*)0);
  VAR_6->m_positionPtr = ((void*)0);
  VAR_6->m_openInternalEntities = ((void*)0);
  VAR_6->m_defaultExpandInternalEntities = VAR_4;
  VAR_6->m_tagLevel = 0;
  VAR_6->m_tagStack = ((void*)0);
  VAR_6->m_inheritedBindings = ((void*)0);
  VAR_6->m_nSpecifiedAtts = 0;
  VAR_6->m_unknownEncodingMem = ((void*)0);
  VAR_6->m_unknownEncodingRelease = ((void*)0);
  VAR_6->m_unknownEncodingData = ((void*)0);
  VAR_6->m_parentParser = ((void*)0);
  VAR_6->m_parsingStatus.parsing = VAR_2;





  VAR_6->m_hash_secret_salt = 0;
}
