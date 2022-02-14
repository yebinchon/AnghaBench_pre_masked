
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int search_data ;
typedef int key_class ;
struct TYPE_5__ {scalar_t__ (* C_FindObjectsInit ) (int ,TYPE_1__*,scalar_t__) ;scalar_t__ (* C_FindObjects ) (int ,int ,int,scalar_t__*) ;scalar_t__ (* C_FindObjectsFinal ) (int ) ;} ;
struct TYPE_4__ {char* member_1; int member_2; int ulValueLen; int member_0; } ;
typedef scalar_t__ CK_ULONG ;
typedef int CK_SESSION_HANDLE ;
typedef scalar_t__ CK_RV ;
typedef int CK_OBJECT_HANDLE_PTR ;
typedef char CK_OBJECT_CLASS ;
typedef TYPE_1__ CK_ATTRIBUTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static CK_RV
FUNC_5(CK_SESSION_HANDLE VAR_4,
     char *VAR_5,
     CK_OBJECT_CLASS VAR_6,
     CK_OBJECT_HANDLE_PTR VAR_7)
{
    CK_ULONG VAR_8;
    CK_RV VAR_9;
    CK_ATTRIBUTE VAR_10[] = {
 {VAR_1, VAR_5, 0 },
 {VAR_0, &VAR_6, sizeof(VAR_6)}
    };
    CK_ULONG VAR_11 = sizeof(VAR_10)/sizeof(VAR_10[0]);

    VAR_10[0].ulValueLen = FUNC_1(VAR_5);

    VAR_9 = (*VAR_3->C_FindObjectsInit)(VAR_4, VAR_10, VAR_11);
    if (VAR_9 != VAR_2)
 return VAR_9;

    VAR_9 = (*VAR_3->C_FindObjects)(VAR_4, VAR_7, 1, &VAR_8);
    if (VAR_9 != VAR_2)
 return VAR_9;
    if (VAR_8 == 0) {
 FUNC_0("found no object\n");
 return 1;
    }

    VAR_9 = (*VAR_3->C_FindObjectsFinal)(VAR_4);
    if (VAR_9 != VAR_2)
 return VAR_9;

    return VAR_2;
}
