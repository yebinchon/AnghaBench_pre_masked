
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_2__* krb5_auth_context ;
typedef int krb5_address ;
typedef void* int16_t ;
typedef int initiator_addr ;
typedef TYPE_3__* gss_channel_bindings_t ;
typedef int acceptor_addr ;
struct TYPE_8__ {int length; int * value; } ;
struct TYPE_10__ {TYPE_1__ application_data; int initiator_address; int initiator_addrtype; int acceptor_address; int acceptor_addrtype; } ;
struct TYPE_9__ {void* local_port; void* remote_port; } ;
typedef scalar_t__ OM_uint32 ;


 TYPE_3__* const VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,void*,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static OM_uint32
FUNC_5 (krb5_context VAR_1,
        krb5_auth_context VAR_2,
        const gss_channel_bindings_t VAR_3)
{



    krb5_address VAR_4, VAR_5;
    krb5_error_code VAR_6;

    if (VAR_3 == VAR_0
 || VAR_3->application_data.length !=
 2 * sizeof(VAR_2->local_port))
 return 0;

    FUNC_4(&VAR_4, 0, sizeof(VAR_4));
    FUNC_4(&VAR_5, 0, sizeof(VAR_5));

    VAR_2->local_port =
 *(int16_t *) VAR_3->application_data.value;

    VAR_2->remote_port =
 *((int16_t *) VAR_3->application_data.value + 1);

    VAR_6 = FUNC_0(VAR_1,
      VAR_3->acceptor_addrtype,
      &VAR_3->acceptor_address,
      VAR_2->remote_port,
      &VAR_5);
    if (VAR_6)
 return VAR_6;

    VAR_6 = FUNC_0(VAR_1,
      VAR_3->initiator_addrtype,
      &VAR_3->initiator_address,
      VAR_2->local_port,
      &VAR_4);
    if (VAR_6) {
 FUNC_3 (VAR_1, &VAR_5);
 return VAR_6;
    }

    VAR_6 = FUNC_2(VAR_1,
      VAR_2,
      &VAR_4,
      &VAR_5);

    FUNC_3 (VAR_1, &VAR_4);
    FUNC_3 (VAR_1, &VAR_5);







    return VAR_6;
}
