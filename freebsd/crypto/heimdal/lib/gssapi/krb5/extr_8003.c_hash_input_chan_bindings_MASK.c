
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef int num ;
typedef int krb5_error_code ;
typedef TYPE_4__* gss_channel_bindings_t ;
struct TYPE_8__ {int length; int * value; } ;
struct TYPE_7__ {int length; int * value; } ;
struct TYPE_6__ {int length; int * value; } ;
struct TYPE_9__ {int initiator_addrtype; int acceptor_addrtype; TYPE_3__ application_data; TYPE_2__ acceptor_address; TYPE_1__ initiator_address; } ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_7 (const gss_channel_bindings_t VAR_0,
     u_char *VAR_1)
{
  u_char VAR_2[4];
  EVP_MD_CTX *VAR_3;

  VAR_3 = FUNC_3();
  FUNC_1(VAR_3, FUNC_5(), ((void*)0));

  FUNC_6 (VAR_0->initiator_addrtype, VAR_2);
  FUNC_2(VAR_3, VAR_2, sizeof(VAR_2));
  FUNC_6 (VAR_0->initiator_address.length, VAR_2);
  FUNC_2(VAR_3, VAR_2, sizeof(VAR_2));
  if (VAR_0->initiator_address.length)
      FUNC_2(VAR_3,
         VAR_0->initiator_address.value,
         VAR_0->initiator_address.length);
  FUNC_6 (VAR_0->acceptor_addrtype, VAR_2);
  FUNC_2(VAR_3, VAR_2, sizeof(VAR_2));
  FUNC_6 (VAR_0->acceptor_address.length, VAR_2);
  FUNC_2(VAR_3, VAR_2, sizeof(VAR_2));
  if (VAR_0->acceptor_address.length)
      FUNC_2(VAR_3,
         VAR_0->acceptor_address.value,
         VAR_0->acceptor_address.length);
  FUNC_6 (VAR_0->application_data.length, VAR_2);
  FUNC_2(VAR_3, VAR_2, sizeof(VAR_2));
  if (VAR_0->application_data.length)
      FUNC_2(VAR_3,
         VAR_0->application_data.value,
         VAR_0->application_data.length);
  FUNC_0(VAR_3, VAR_1, ((void*)0));
  FUNC_4(VAR_3);

  return 0;
}
