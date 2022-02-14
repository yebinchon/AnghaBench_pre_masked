
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* free_fcn ) (int *) ;} ;
typedef TYPE_2__ XML_Memory_Handling_Suite ;
struct TYPE_7__ {int * binding; int * name; } ;
struct TYPE_10__ {void* standalone; void* hasParamEntityRefs; int keepProcessing; scalar_t__ contentStringLen; scalar_t__ scaffCount; scalar_t__ scaffSize; scalar_t__ scaffLevel; int * scaffold; int * scaffIndex; void* in_eldecl; TYPE_1__ defaultPrefix; int entityValuePool; int pool; int prefixes; int attributeIds; int elementTypes; int paramEntities; void* paramEntityRead; int generalEntities; } ;
struct TYPE_9__ {scalar_t__ allocDefaultAtts; int * defaultAtts; } ;
typedef int HASH_TABLE_ITER ;
typedef TYPE_3__ ELEMENT_TYPE ;
typedef TYPE_4__ DTD ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(DTD *VAR_2, const XML_Memory_Handling_Suite *VAR_3)
{
  HASH_TABLE_ITER VAR_4;
  FUNC_1(&VAR_4, &(VAR_2->elementTypes));
  for (;;) {
    ELEMENT_TYPE *VAR_5 = (ELEMENT_TYPE *)FUNC_2(&VAR_4);
    if (!VAR_5)
      break;
    if (VAR_5->allocDefaultAtts != 0)
      VAR_3->free_fcn(VAR_5->defaultAtts);
  }
  FUNC_0(&(VAR_2->generalEntities));




  FUNC_0(&(VAR_2->elementTypes));
  FUNC_0(&(VAR_2->attributeIds));
  FUNC_0(&(VAR_2->prefixes));
  FUNC_3(&(VAR_2->pool));
  FUNC_3(&(VAR_2->entityValuePool));
  VAR_2->defaultPrefix.name = ((void*)0);
  VAR_2->defaultPrefix.binding = ((void*)0);

  VAR_2->in_eldecl = VAR_0;

  VAR_3->free_fcn(VAR_2->scaffIndex);
  VAR_2->scaffIndex = ((void*)0);
  VAR_3->free_fcn(VAR_2->scaffold);
  VAR_2->scaffold = ((void*)0);

  VAR_2->scaffLevel = 0;
  VAR_2->scaffSize = 0;
  VAR_2->scaffCount = 0;
  VAR_2->contentStringLen = 0;

  VAR_2->keepProcessing = VAR_1;
  VAR_2->hasParamEntityRefs = VAR_0;
  VAR_2->standalone = VAR_0;
}
