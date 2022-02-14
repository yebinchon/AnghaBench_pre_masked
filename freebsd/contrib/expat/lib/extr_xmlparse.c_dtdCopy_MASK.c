
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int XML_Parser ;
struct TYPE_10__ {scalar_t__ (* malloc_fcn ) (int) ;} ;
typedef TYPE_1__ XML_Memory_Handling_Suite ;
typedef int XML_Char ;
struct TYPE_15__ {int const* name; TYPE_2__* prefix; int xmlns; int maybeTokenized; } ;
struct TYPE_14__ {int const* value; int isCdata; TYPE_6__* id; } ;
struct TYPE_11__ {int const* name; } ;
struct TYPE_13__ {int scaffIndex; int scaffLevel; int scaffSize; int contentStringLen; int scaffold; int in_eldecl; int standalone; int hasParamEntityRefs; int keepProcessing; int paramEntityRead; int paramEntities; int pool; int generalEntities; int attributeIds; int prefixes; int elementTypes; TYPE_2__ defaultPrefix; } ;
struct TYPE_12__ {int nDefaultAtts; int allocDefaultAtts; TYPE_5__* defaultAtts; TYPE_2__* prefix; TYPE_6__* idAtt; int const* name; } ;
typedef TYPE_2__ PREFIX ;
typedef int HASH_TABLE_ITER ;
typedef TYPE_3__ ELEMENT_TYPE ;
typedef TYPE_4__ DTD ;
typedef TYPE_5__ DEFAULT_ATTRIBUTE ;
typedef TYPE_6__ ATTRIBUTE_ID ;


 int FUNC_0 (char) ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *,int const*,int) ;
 int FUNC_5 (int *,int ) ;
 void* FUNC_6 (int *,int const*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(XML_Parser VAR_0, DTD *VAR_1, const DTD *VAR_2, const XML_Memory_Handling_Suite *VAR_3)
{
  HASH_TABLE_ITER VAR_4;



  FUNC_2(&VAR_4, &(VAR_2->prefixes));
  for (;;) {
    const XML_Char *VAR_5;
    const PREFIX *VAR_6 = (PREFIX *)FUNC_3(&VAR_4);
    if (!VAR_6)
      break;
    VAR_5 = FUNC_6(&(VAR_1->pool), VAR_6->name);
    if (!VAR_5)
      return 0;
    if (!FUNC_4(VAR_0, &(VAR_1->prefixes), VAR_5, sizeof(PREFIX)))
      return 0;
  }

  FUNC_2(&VAR_4, &(VAR_2->attributeIds));



  for (;;) {
    ATTRIBUTE_ID *VAR_7;
    const XML_Char *VAR_8;
    const ATTRIBUTE_ID *VAR_9 = (ATTRIBUTE_ID *)FUNC_3(&VAR_4);

    if (!VAR_9)
      break;

    if (!FUNC_5(&(VAR_1->pool), FUNC_0('\0')))
      return 0;
    VAR_8 = FUNC_6(&(VAR_1->pool), VAR_9->name);
    if (!VAR_8)
      return 0;
    ++VAR_8;
    VAR_7 = (ATTRIBUTE_ID *)FUNC_4(VAR_0, &(VAR_1->attributeIds), VAR_8,
                                  sizeof(ATTRIBUTE_ID));
    if (!VAR_7)
      return 0;
    VAR_7->maybeTokenized = VAR_9->maybeTokenized;
    if (VAR_9->prefix) {
      VAR_7->xmlns = VAR_9->xmlns;
      if (VAR_9->prefix == &VAR_2->defaultPrefix)
        VAR_7->prefix = &VAR_1->defaultPrefix;
      else
        VAR_7->prefix = (PREFIX *)FUNC_4(VAR_0, &(VAR_1->prefixes),
                                        VAR_9->prefix->name, 0);
    }
  }



  FUNC_2(&VAR_4, &(VAR_2->elementTypes));

  for (;;) {
    int VAR_10;
    ELEMENT_TYPE *VAR_11;
    const XML_Char *VAR_12;
    const ELEMENT_TYPE *VAR_13 = (ELEMENT_TYPE *)FUNC_3(&VAR_4);
    if (!VAR_13)
      break;
    VAR_12 = FUNC_6(&(VAR_1->pool), VAR_13->name);
    if (!VAR_12)
      return 0;
    VAR_11 = (ELEMENT_TYPE *)FUNC_4(VAR_0, &(VAR_1->elementTypes), VAR_12,
                                  sizeof(ELEMENT_TYPE));
    if (!VAR_11)
      return 0;
    if (VAR_13->nDefaultAtts) {
      VAR_11->defaultAtts = (DEFAULT_ATTRIBUTE *)
          VAR_3->malloc_fcn(VAR_13->nDefaultAtts * sizeof(DEFAULT_ATTRIBUTE));
      if (!VAR_11->defaultAtts) {
        return 0;
      }
    }
    if (VAR_13->idAtt)
      VAR_11->idAtt = (ATTRIBUTE_ID *)
          FUNC_4(VAR_0, &(VAR_1->attributeIds), VAR_13->idAtt->name, 0);
    VAR_11->allocDefaultAtts = VAR_11->nDefaultAtts = VAR_13->nDefaultAtts;
    if (VAR_13->prefix)
      VAR_11->prefix = (PREFIX *)FUNC_4(VAR_0, &(VAR_1->prefixes),
                                      VAR_13->prefix->name, 0);
    for (VAR_10 = 0; VAR_10 < VAR_11->nDefaultAtts; VAR_10++) {
      VAR_11->defaultAtts[VAR_10].id = (ATTRIBUTE_ID *)
          FUNC_4(VAR_0, &(VAR_1->attributeIds), VAR_13->defaultAtts[VAR_10].id->name, 0);
      VAR_11->defaultAtts[VAR_10].isCdata = VAR_13->defaultAtts[VAR_10].isCdata;
      if (VAR_13->defaultAtts[VAR_10].value) {
        VAR_11->defaultAtts[VAR_10].value
            = FUNC_6(&(VAR_1->pool), VAR_13->defaultAtts[VAR_10].value);
        if (!VAR_11->defaultAtts[VAR_10].value)
          return 0;
      }
      else
        VAR_11->defaultAtts[VAR_10].value = ((void*)0);
    }
  }


  if (!FUNC_1(VAR_0,
                       &(VAR_1->generalEntities),
                       &(VAR_1->pool),
                       &(VAR_2->generalEntities)))
      return 0;
  VAR_1->keepProcessing = VAR_2->keepProcessing;
  VAR_1->hasParamEntityRefs = VAR_2->hasParamEntityRefs;
  VAR_1->standalone = VAR_2->standalone;


  VAR_1->in_eldecl = VAR_2->in_eldecl;
  VAR_1->scaffold = VAR_2->scaffold;
  VAR_1->contentStringLen = VAR_2->contentStringLen;
  VAR_1->scaffSize = VAR_2->scaffSize;
  VAR_1->scaffLevel = VAR_2->scaffLevel;
  VAR_1->scaffIndex = VAR_2->scaffIndex;

  return 1;
}
