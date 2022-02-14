
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_object {int num_attributes; TYPE_2__* attrs; } ;
struct TYPE_7__ {scalar_t__ ulValueLen; int type; int pValue; } ;
struct TYPE_5__ {scalar_t__ ulValueLen; int pValue; int type; } ;
struct TYPE_6__ {TYPE_1__ attribute; } ;
typedef size_t CK_ULONG ;
typedef TYPE_3__ CK_ATTRIBUTE ;


 scalar_t__ FUNC_0 (struct st_object const*) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(const struct st_object *VAR_0,
   const CK_ATTRIBUTE *VAR_1,
   CK_ULONG VAR_2)
{
    CK_ULONG VAR_3;
    int VAR_4;

    FUNC_2("attributes_match: %ld\n", (unsigned long)FUNC_0(VAR_0));

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
 int VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0->num_attributes; VAR_4++) {
     if (VAR_1[VAR_3].type == VAR_0->attrs[VAR_4].attribute.type &&
  VAR_1[VAR_3].ulValueLen == VAR_0->attrs[VAR_4].attribute.ulValueLen &&
  FUNC_1(VAR_1[VAR_3].pValue, VAR_0->attrs[VAR_4].attribute.pValue,
         VAR_1[VAR_3].ulValueLen) == 0) {
  VAR_5 = 1;
  break;
     }
 }
 if (VAR_5 == 0) {
     FUNC_2("type %d attribute have no match\n", VAR_1[VAR_3].type);
     return 0;
 }
    }
    FUNC_2("attribute matches\n");
    return 1;
}
