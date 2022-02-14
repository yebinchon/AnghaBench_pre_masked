
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_object {int num_attributes; TYPE_2__* attrs; } ;
struct session_state {int dummy; } ;
struct TYPE_7__ {scalar_t__ type; size_t ulValueLen; scalar_t__ pValue; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ ulValueLen; int pValue; } ;
struct TYPE_6__ {scalar_t__ secret; TYPE_1__ attribute; } ;
typedef size_t CK_ULONG ;
typedef int CK_SESSION_HANDLE ;
typedef int CK_RV ;
typedef int CK_OBJECT_HANDLE ;
typedef TYPE_3__* CK_ATTRIBUTE_PTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,struct session_state**) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (int ,struct st_object**) ;
 int FUNC_5 (char*,unsigned long) ;

CK_RV
FUNC_6(CK_SESSION_HANDLE VAR_2,
      CK_OBJECT_HANDLE VAR_3,
      CK_ATTRIBUTE_PTR VAR_4,
      CK_ULONG VAR_5)
{
    struct session_state *VAR_6;
    struct st_object *VAR_7;
    CK_ULONG VAR_8;
    CK_RV VAR_9;
    int VAR_10;

    FUNC_1();

    FUNC_5("GetAttributeValue: %lx\n",
     (unsigned long)FUNC_0(VAR_3));
    FUNC_2(VAR_2, &VAR_6);

    if ((VAR_9 = FUNC_4(VAR_3, &VAR_7)) != VAR_0) {
 FUNC_5("object not found: %lx\n",
  (unsigned long)FUNC_0(VAR_3));
 return VAR_9;
    }

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
 FUNC_5("	getting 0x%08lx\n", (unsigned long)VAR_4[VAR_8].type);
 for (VAR_10 = 0; VAR_10 < VAR_7->num_attributes; VAR_10++) {
     if (VAR_7->attrs[VAR_10].secret) {
  VAR_4[VAR_8].ulValueLen = (CK_ULONG)-1;
  break;
     }
     if (VAR_4[VAR_8].type == VAR_7->attrs[VAR_10].attribute.type) {
  if (VAR_4[VAR_8].pValue != VAR_1 && VAR_7->attrs[VAR_10].secret == 0) {
      if (VAR_4[VAR_8].ulValueLen >= VAR_7->attrs[VAR_10].attribute.ulValueLen)
   FUNC_3(VAR_4[VAR_8].pValue, VAR_7->attrs[VAR_10].attribute.pValue,
          VAR_7->attrs[VAR_10].attribute.ulValueLen);
  }
  VAR_4[VAR_8].ulValueLen = VAR_7->attrs[VAR_10].attribute.ulValueLen;
  break;
     }
 }
 if (VAR_10 == VAR_7->num_attributes) {
     FUNC_5("key type: 0x%08lx not found\n", (unsigned long)VAR_4[VAR_8].type);
     VAR_4[VAR_8].ulValueLen = (CK_ULONG)-1;
 }

    }
    return VAR_0;
}
