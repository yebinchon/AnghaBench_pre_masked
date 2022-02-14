
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xmlnsNamespace ;
typedef int xmlNamespace ;
typedef enum XML_Error { ____Placeholder_XML_Error } XML_Error ;
typedef TYPE_2__* XML_Parser ;
typedef char XML_Char ;
typedef int XML_Bool ;
struct TYPE_15__ {int uriAlloc; char* uri; int uriLen; struct TYPE_15__* nextTagBinding; struct TYPE_15__* prevPrefixBinding; int const* attId; TYPE_3__* prefix; } ;
struct TYPE_14__ {scalar_t__* name; TYPE_4__* binding; } ;
struct TYPE_13__ {char m_namespaceSeparator; int m_handlerArg; int (* m_startNamespaceDeclHandler ) (int ,scalar_t__*,char const*) ;TYPE_1__* m_dtd; TYPE_4__* m_freeBindingList; } ;
struct TYPE_12__ {TYPE_3__ defaultPrefix; } ;
typedef TYPE_3__ PREFIX ;
typedef TYPE_4__ BINDING ;
typedef int ATTRIBUTE_ID ;
 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char const FUNC_3 (char const) ;
 int VAR_8 ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (int ,scalar_t__*,char const*) ;

__attribute__((used)) static enum XML_Error
FUNC_6(XML_Parser VAR_9, PREFIX *VAR_10, const ATTRIBUTE_ID *VAR_11,
           const XML_Char *VAR_12, BINDING **VAR_13)
{
  static const XML_Char VAR_14[] = {
    138, 130, 130, 133, 148, 144, 144,
    129, 129, 129, 145, 129, 151, 145,
    134, 132, 139, 144, 143, 146, 147,
    144, 153, 149, 149, 150, 144,
    135, 142, 136, 140, 131, 133, 142, 141,
    140, '\0'
  };
  static const int VAR_15 =
    (int)sizeof(VAR_14)/sizeof(XML_Char) - 1;
  static const XML_Char VAR_16[] = {
    138, 130, 130, 133, 148, 144, 144,
    129, 129, 129, 145, 129, 151, 145,
    134, 132, 139, 144, 152, 154, 154,
    154, 144, 128, 136, 137, 135, 131,
    144, '\0'
  };
  static const int VAR_17 =
    (int)sizeof(VAR_16)/sizeof(XML_Char) - 1;

  XML_Bool VAR_18 = VAR_7;
  XML_Bool VAR_19 = VAR_8;
  XML_Bool VAR_20 = VAR_8;

  BINDING *VAR_21;
  int VAR_22;


  if (*VAR_12 == FUNC_3('\0') && VAR_10->name)
    return VAR_6;

  if (VAR_10->name
      && VAR_10->name[0] == FUNC_3(128)
      && VAR_10->name[1] == FUNC_3(136)
      && VAR_10->name[2] == FUNC_3(137)) {


    if (VAR_10->name[3] == FUNC_3(135)
        && VAR_10->name[4] == FUNC_3(131)
        && VAR_10->name[5] == FUNC_3('\0'))
      return VAR_5;

    if (VAR_10->name[3] == FUNC_3('\0'))
      VAR_18 = VAR_8;
  }

  for (VAR_22 = 0; VAR_12[VAR_22]; VAR_22++) {
    if (VAR_19 && (VAR_22 > VAR_15 || VAR_12[VAR_22] != VAR_14[VAR_22]))
      VAR_19 = VAR_7;

    if (!VAR_18 && VAR_20
        && (VAR_22 > VAR_17 || VAR_12[VAR_22] != VAR_16[VAR_22]))
      VAR_20 = VAR_7;
  }
  VAR_19 = VAR_19 && VAR_22 == VAR_15;
  VAR_20 = VAR_20 && VAR_22 == VAR_17;

  if (VAR_18 != VAR_19)
    return VAR_18 ? VAR_4
                     : VAR_3;

  if (VAR_20)
    return VAR_3;

  if (VAR_9->m_namespaceSeparator)
    VAR_22++;
  if (VAR_9->m_freeBindingList) {
    VAR_21 = VAR_9->m_freeBindingList;
    if (VAR_22 > VAR_21->uriAlloc) {
      XML_Char *VAR_23 = (XML_Char *)FUNC_2(VAR_9, VAR_21->uri,
                          sizeof(XML_Char) * (VAR_22 + VAR_0));
      if (VAR_23 == ((void*)0))
        return VAR_2;
      VAR_21->uri = VAR_23;
      VAR_21->uriAlloc = VAR_22 + VAR_0;
    }
    VAR_9->m_freeBindingList = VAR_21->nextTagBinding;
  }
  else {
    VAR_21 = (BINDING *)FUNC_1(VAR_9, sizeof(BINDING));
    if (!VAR_21)
      return VAR_2;
    VAR_21->uri = (XML_Char *)FUNC_1(VAR_9, sizeof(XML_Char) * (VAR_22 + VAR_0));
    if (!VAR_21->uri) {
      FUNC_0(VAR_9, VAR_21);
      return VAR_2;
    }
    VAR_21->uriAlloc = VAR_22 + VAR_0;
  }
  VAR_21->uriLen = VAR_22;
  FUNC_4(VAR_21->uri, VAR_12, VAR_22 * sizeof(XML_Char));
  if (VAR_9->m_namespaceSeparator)
    VAR_21->uri[VAR_22 - 1] = VAR_9->m_namespaceSeparator;
  VAR_21->prefix = VAR_10;
  VAR_21->attId = VAR_11;
  VAR_21->prevPrefixBinding = VAR_10->binding;

  if (*VAR_12 == FUNC_3('\0') && VAR_10 == &VAR_9->m_dtd->defaultPrefix)
    VAR_10->binding = ((void*)0);
  else
    VAR_10->binding = VAR_21;
  VAR_21->nextTagBinding = *VAR_13;
  *VAR_13 = VAR_21;

  if (VAR_11 && VAR_9->m_startNamespaceDeclHandler)
    VAR_9->m_startNamespaceDeclHandler(VAR_9->m_handlerArg, VAR_10->name,
                              VAR_10->binding ? VAR_12 : 0);
  return VAR_1;
}
