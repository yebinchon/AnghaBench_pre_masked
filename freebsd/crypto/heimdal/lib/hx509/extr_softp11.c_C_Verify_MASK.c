
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct st_object {int cert; } ;
struct session_state {int verify_object; TYPE_2__* verify_mechanism; } ;
struct TYPE_9__ {void* length; void* data; } ;
typedef TYPE_3__ heim_octet_string ;
struct TYPE_7__ {struct st_object** objs; } ;
struct TYPE_10__ {TYPE_1__ object; } ;
struct TYPE_8__ {int mechanism; } ;
typedef void* CK_ULONG ;
typedef int CK_SESSION_HANDLE ;
typedef int CK_RV ;
typedef void* CK_BYTE_PTR ;
typedef int AlgorithmIdentifier ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct session_state**) ;
 int FUNC_2 (int ,int ,int const*,TYPE_3__*,TYPE_3__*) ;
 int VAR_4 ;
 int * FUNC_3 () ;
 TYPE_4__ VAR_5 ;
 int FUNC_4 (char*) ;

CK_RV
FUNC_5(CK_SESSION_HANDLE VAR_6,
  CK_BYTE_PTR VAR_7,
  CK_ULONG VAR_8,
  CK_BYTE_PTR VAR_9,
  CK_ULONG VAR_10)
{
    struct session_state *VAR_11;
    struct st_object *VAR_12;
    const AlgorithmIdentifier *VAR_13;
    CK_RV VAR_14;
    int VAR_15;
    heim_octet_string VAR_16, VAR_17;

    FUNC_0();
    FUNC_4("Verify\n");
    FUNC_1(VAR_6, &VAR_11);

    if (VAR_11->verify_object == -1)
 return VAR_0;

    VAR_12 = VAR_5.object.objs[VAR_11->verify_object];

    switch(VAR_11->verify_mechanism->mechanism) {
    case 128:
 VAR_13 = FUNC_3();
 break;
    default:
 VAR_14 = VAR_1;
 goto out;
    }

    VAR_17.data = VAR_7;
    VAR_17.length = VAR_8;
    VAR_16.data = VAR_9;
    VAR_16.length = VAR_10;

    VAR_15 = FUNC_2(VAR_4,
       VAR_12->cert,
       VAR_13,
       &VAR_16,
       &VAR_17);
    if (VAR_15) {
 VAR_14 = VAR_2;
 goto out;
    }
    VAR_14 = VAR_3;

 out:
    return VAR_14;
}
