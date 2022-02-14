
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_object {int dummy; } ;
struct session_state {int verify_object; int verify_mechanism; } ;
typedef int mechs ;
typedef int bool_true ;
typedef int attr ;
struct TYPE_3__ {int member_2; int * member_1; int member_0; } ;
typedef int CK_SESSION_HANDLE ;
typedef scalar_t__ CK_RV ;
typedef int CK_OBJECT_HANDLE ;
typedef int CK_MECHANISM_TYPE ;
typedef int CK_MECHANISM_PTR ;
typedef int CK_BBOOL ;
typedef TYPE_1__ CK_ATTRIBUTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct st_object*) ;
 int FUNC_2 (int ,struct session_state**) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int *,int,int ,int ,struct st_object**) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (char*) ;

CK_RV
FUNC_6(CK_SESSION_HANDLE VAR_4,
      CK_MECHANISM_PTR VAR_5,
      CK_OBJECT_HANDLE VAR_6)
{
    struct session_state *VAR_7;
    CK_MECHANISM_TYPE VAR_8[] = { VAR_1 };
    CK_BBOOL VAR_9 = VAR_3;
    CK_ATTRIBUTE VAR_10[] = {
 { VAR_0, &VAR_9, sizeof(VAR_9) }
    };
    struct st_object *VAR_11;
    CK_RV VAR_12;

    FUNC_0();
    FUNC_5("VerifyInit\n");
    FUNC_2(VAR_4, &VAR_7);

    VAR_12 = FUNC_3(VAR_10, sizeof(VAR_10)/sizeof(VAR_10[0]),
       VAR_8, sizeof(VAR_8)/sizeof(VAR_8[0]),
       VAR_5, VAR_6, &VAR_11);
    if (VAR_12)
 return VAR_12;

    VAR_12 = FUNC_4(&VAR_7->verify_mechanism, VAR_5);
    if (VAR_12 == VAR_2)
 VAR_7->verify_object = FUNC_1(VAR_11);

    return VAR_12;
}
