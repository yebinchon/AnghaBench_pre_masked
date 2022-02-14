
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct st_object {int cert; } ;
struct session_state {int sign_object; TYPE_2__* sign_mechanism; } ;
struct TYPE_10__ {scalar_t__ length; int * data; } ;
typedef TYPE_3__ heim_octet_string ;
struct TYPE_8__ {struct st_object** objs; } ;
struct TYPE_11__ {TYPE_1__ object; } ;
struct TYPE_9__ {int mechanism; } ;
typedef scalar_t__* CK_ULONG_PTR ;
typedef scalar_t__ CK_ULONG ;
typedef int CK_SESSION_HANDLE ;
typedef int CK_RV ;
typedef scalar_t__ CK_BYTE_PTR ;
typedef int AlgorithmIdentifier ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,struct session_state**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int const*,TYPE_3__*,int *,TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (scalar_t__,int *,scalar_t__) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 TYPE_4__ VAR_6 ;
 int FUNC_9 (char*) ;

CK_RV
FUNC_10(CK_SESSION_HANDLE VAR_7,
       CK_BYTE_PTR VAR_8,
       CK_ULONG VAR_9,
       CK_BYTE_PTR VAR_10,
       CK_ULONG_PTR VAR_11)
{
    struct session_state *VAR_12;
    struct st_object *VAR_13;
    CK_RV VAR_14;
    int VAR_15;
    const AlgorithmIdentifier *VAR_16;
    heim_octet_string VAR_17, VAR_18;

    FUNC_0();
    FUNC_9("Sign\n");
    FUNC_1(VAR_7, &VAR_12);

    VAR_17.data = ((void*)0);
    VAR_17.length = 0;

    if (VAR_12->sign_object == -1)
 return VAR_0;

    if (VAR_11 == ((void*)0)) {
 FUNC_9("signature len NULL\n");
 VAR_14 = VAR_0;
 goto out;
    }

    if (VAR_8 == VAR_4) {
 FUNC_9("data NULL\n");
 VAR_14 = VAR_0;
 goto out;
    }

    VAR_13 = VAR_6.object.objs[VAR_12->sign_object];

    if (FUNC_5(VAR_13->cert) == 0) {
 FUNC_9("private key NULL\n");
 return VAR_0;
    }

    switch(VAR_12->sign_mechanism->mechanism) {
    case 128:
 VAR_16 = FUNC_6();
 break;
    default:
 VAR_14 = VAR_2;
 goto out;
    }

    VAR_18.data = VAR_8;
    VAR_18.length = VAR_9;

    VAR_15 = FUNC_3(VAR_5,
       FUNC_2(VAR_13->cert),
       VAR_16,
       &VAR_18,
       ((void*)0),
       &VAR_17);
    if (VAR_15) {
 VAR_14 = VAR_1;
 goto out;
    }
    *VAR_11 = VAR_17.length;

    if (VAR_10 != VAR_4)
 FUNC_7(VAR_10, VAR_17.data, VAR_17.length);

    VAR_14 = VAR_3;
 out:
    if (VAR_17.data) {
 FUNC_8(VAR_17.data, 0, VAR_17.length);
 FUNC_4(&VAR_17);
    }
    return VAR_14;
}
