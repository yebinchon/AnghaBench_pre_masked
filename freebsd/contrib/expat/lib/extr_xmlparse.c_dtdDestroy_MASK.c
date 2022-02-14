
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int (* free_fcn ) (TYPE_3__*) ;} ;
typedef TYPE_1__ XML_Memory_Handling_Suite ;
typedef scalar_t__ XML_Bool ;
struct TYPE_12__ {struct TYPE_12__* scaffold; struct TYPE_12__* scaffIndex; int entityValuePool; int pool; int prefixes; int attributeIds; int elementTypes; int paramEntities; int generalEntities; } ;
struct TYPE_11__ {scalar_t__ allocDefaultAtts; TYPE_3__* defaultAtts; } ;
typedef int HASH_TABLE_ITER ;
typedef TYPE_2__ ELEMENT_TYPE ;
typedef TYPE_3__ DTD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_8(DTD *VAR_0, XML_Bool VAR_1, const XML_Memory_Handling_Suite *VAR_2)
{
  HASH_TABLE_ITER VAR_3;
  FUNC_1(&VAR_3, &(VAR_0->elementTypes));
  for (;;) {
    ELEMENT_TYPE *VAR_4 = (ELEMENT_TYPE *)FUNC_2(&VAR_3);
    if (!VAR_4)
      break;
    if (VAR_4->allocDefaultAtts != 0)
      VAR_2->free_fcn(VAR_4->defaultAtts);
  }
  FUNC_0(&(VAR_0->generalEntities));



  FUNC_0(&(VAR_0->elementTypes));
  FUNC_0(&(VAR_0->attributeIds));
  FUNC_0(&(VAR_0->prefixes));
  FUNC_3(&(VAR_0->pool));
  FUNC_3(&(VAR_0->entityValuePool));
  if (VAR_1) {
    VAR_2->free_fcn(VAR_0->scaffIndex);
    VAR_2->free_fcn(VAR_0->scaffold);
  }
  VAR_2->free_fcn(VAR_0);
}
