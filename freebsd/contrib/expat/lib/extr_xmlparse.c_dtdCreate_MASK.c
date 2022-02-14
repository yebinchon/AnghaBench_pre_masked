
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ (* malloc_fcn ) (int) ;} ;
typedef TYPE_2__ XML_Memory_Handling_Suite ;
struct TYPE_8__ {int * binding; int * name; } ;
struct TYPE_10__ {void* standalone; void* hasParamEntityRefs; int keepProcessing; scalar_t__ contentStringLen; scalar_t__ scaffCount; scalar_t__ scaffSize; scalar_t__ scaffLevel; int * scaffold; int * scaffIndex; void* in_eldecl; TYPE_1__ defaultPrefix; int paramEntities; void* paramEntityRead; int prefixes; int attributeIds; int elementTypes; int generalEntities; int entityValuePool; int pool; } ;
typedef TYPE_3__ DTD ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__ const*) ;
 int FUNC_1 (int *,TYPE_2__ const*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static DTD *
FUNC_3(const XML_Memory_Handling_Suite *VAR_2)
{
  DTD *VAR_3 = (DTD *)VAR_2->malloc_fcn(sizeof(DTD));
  if (VAR_3 == ((void*)0))
    return VAR_3;
  FUNC_1(&(VAR_3->pool), VAR_2);
  FUNC_1(&(VAR_3->entityValuePool), VAR_2);
  FUNC_0(&(VAR_3->generalEntities), VAR_2);
  FUNC_0(&(VAR_3->elementTypes), VAR_2);
  FUNC_0(&(VAR_3->attributeIds), VAR_2);
  FUNC_0(&(VAR_3->prefixes), VAR_2);




  VAR_3->defaultPrefix.name = ((void*)0);
  VAR_3->defaultPrefix.binding = ((void*)0);

  VAR_3->in_eldecl = VAR_0;
  VAR_3->scaffIndex = ((void*)0);
  VAR_3->scaffold = ((void*)0);
  VAR_3->scaffLevel = 0;
  VAR_3->scaffSize = 0;
  VAR_3->scaffCount = 0;
  VAR_3->contentStringLen = 0;

  VAR_3->keepProcessing = VAR_1;
  VAR_3->hasParamEntityRefs = VAR_0;
  VAR_3->standalone = VAR_0;
  return VAR_3;
}
