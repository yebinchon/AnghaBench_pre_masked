
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int next_object; int num_attributes; TYPE_4__* attributes; } ;
struct session_state {TYPE_1__ find; } ;
struct TYPE_8__ {int ulValueLen; int type; int * pValue; } ;
struct TYPE_7__ {int ulValueLen; int type; int pValue; } ;
typedef int CK_ULONG ;
typedef int CK_SESSION_HANDLE ;
typedef int CK_RV ;
typedef TYPE_2__* CK_ATTRIBUTE_PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct session_state**) ;
 int FUNC_2 (char*) ;
 TYPE_4__* FUNC_3 (int,int) ;
 int FUNC_4 (struct session_state*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (char*) ;

CK_RV
FUNC_9(CK_SESSION_HANDLE VAR_2,
    CK_ATTRIBUTE_PTR VAR_3,
    CK_ULONG VAR_4)
{
    struct session_state *VAR_5;

    FUNC_8("FindObjectsInit\n");

    FUNC_0();

    FUNC_1(VAR_2, &VAR_5);

    if (VAR_5->find.next_object != -1) {
 FUNC_2("application didn't do C_FindObjectsFinal\n");
 FUNC_4(VAR_5);
    }
    if (VAR_4) {
 CK_ULONG VAR_6;

 FUNC_7(VAR_3, VAR_4);

 VAR_5->find.attributes =
     FUNC_3(1, VAR_4 * sizeof(VAR_5->find.attributes[0]));
 if (VAR_5->find.attributes == ((void*)0))
     return VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
     VAR_5->find.attributes[VAR_6].pValue =
  FUNC_5(VAR_3[VAR_6].ulValueLen);
     if (VAR_5->find.attributes[VAR_6].pValue == ((void*)0)) {
  FUNC_4(VAR_5);
  return VAR_0;
     }
     FUNC_6(VAR_5->find.attributes[VAR_6].pValue,
     VAR_3[VAR_6].pValue, VAR_3[VAR_6].ulValueLen);
     VAR_5->find.attributes[VAR_6].type = VAR_3[VAR_6].type;
     VAR_5->find.attributes[VAR_6].ulValueLen = VAR_3[VAR_6].ulValueLen;
 }
 VAR_5->find.num_attributes = VAR_4;
 VAR_5->find.next_object = 0;
    } else {
 FUNC_8("find all objects\n");
 VAR_5->find.attributes = ((void*)0);
 VAR_5->find.num_attributes = 0;
 VAR_5->find.next_object = 0;
    }

    return VAR_1;
}
