
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int XML_Parser ;
typedef int XML_Char ;
typedef scalar_t__ XML_Bool ;
struct TYPE_9__ {int maybeTokenized; int xmlns; } ;
struct TYPE_8__ {scalar_t__ isCdata; int const* value; TYPE_3__* id; } ;
struct TYPE_7__ {int nDefaultAtts; int allocDefaultAtts; TYPE_2__* defaultAtts; TYPE_3__* idAtt; } ;
typedef TYPE_1__ ELEMENT_TYPE ;
typedef TYPE_2__ DEFAULT_ATTRIBUTE ;
typedef TYPE_3__ ATTRIBUTE_ID ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(ELEMENT_TYPE *VAR_1, ATTRIBUTE_ID *VAR_2, XML_Bool VAR_3,
                XML_Bool VAR_4, const XML_Char *VAR_5, XML_Parser VAR_6)
{
  DEFAULT_ATTRIBUTE *VAR_7;
  if (VAR_5 || VAR_4) {


    int VAR_8;
    for (VAR_8 = 0; VAR_8 < VAR_1->nDefaultAtts; VAR_8++)
      if (VAR_2 == VAR_1->defaultAtts[VAR_8].id)
        return 1;
    if (VAR_4 && !VAR_1->idAtt && !VAR_2->xmlns)
      VAR_1->idAtt = VAR_2;
  }
  if (VAR_1->nDefaultAtts == VAR_1->allocDefaultAtts) {
    if (VAR_1->allocDefaultAtts == 0) {
      VAR_1->allocDefaultAtts = 8;
      VAR_1->defaultAtts = (DEFAULT_ATTRIBUTE *)FUNC_0(VAR_6, VAR_1->allocDefaultAtts
                            * sizeof(DEFAULT_ATTRIBUTE));
      if (!VAR_1->defaultAtts) {
        VAR_1->allocDefaultAtts = 0;
        return 0;
      }
    }
    else {
      DEFAULT_ATTRIBUTE *VAR_9;
      int VAR_10 = VAR_1->allocDefaultAtts * 2;
      VAR_9 = (DEFAULT_ATTRIBUTE *)
        FUNC_1(VAR_6, VAR_1->defaultAtts, (VAR_10 * sizeof(DEFAULT_ATTRIBUTE)));
      if (VAR_9 == ((void*)0))
        return 0;
      VAR_1->allocDefaultAtts = VAR_10;
      VAR_1->defaultAtts = VAR_9;
    }
  }
  VAR_7 = VAR_1->defaultAtts + VAR_1->nDefaultAtts;
  VAR_7->id = VAR_2;
  VAR_7->value = VAR_5;
  VAR_7->isCdata = VAR_3;
  if (!VAR_3)
    VAR_2->maybeTokenized = VAR_0;
  VAR_1->nDefaultAtts += 1;
  return 1;
}
