
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* gss_channel_bindings_t ;
typedef int bool_t ;
struct TYPE_13__ {int x_op; } ;
typedef TYPE_2__ XDR ;
struct TYPE_12__ {int application_data; int acceptor_address; int initiator_address; int acceptor_addrtype; int initiator_addrtype; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;



 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;

bool_t
FUNC_6(XDR *VAR_3, gss_channel_bindings_t *VAR_4)
{
 gss_channel_bindings_t VAR_5;
 bool_t VAR_6;

 switch (VAR_3->x_op) {
 case 129:
  VAR_5 = *VAR_4;
  if (VAR_5) {
   VAR_6 = VAR_0;
   if (!FUNC_3(VAR_3, &VAR_6)
       || !FUNC_5(VAR_3, &VAR_5->initiator_addrtype)
       || !FUNC_4(VAR_3,
    &VAR_5->initiator_address)
       || !FUNC_5(VAR_3, &VAR_5->acceptor_addrtype)
       || !FUNC_4(VAR_3,
    &VAR_5->acceptor_address)
       || !FUNC_4(VAR_3,
    &VAR_5->application_data))
    return (VAR_0);
  } else {
   VAR_6 = VAR_2;
   if (!FUNC_3(VAR_3, &VAR_6))
    return (VAR_0);
  }
  break;

 case 130:
  if (!FUNC_3(VAR_3, &VAR_6))
   return (VAR_0);
  if (VAR_6) {
   *VAR_4 = VAR_1;
  } else {
   VAR_5 = FUNC_0(sizeof(*VAR_5));
   FUNC_2(VAR_5, 0, sizeof(*VAR_5));
   if (!FUNC_5(VAR_3, &VAR_5->initiator_addrtype)
       || !FUNC_4(VAR_3,
    &VAR_5->initiator_address)
       || !FUNC_5(VAR_3, &VAR_5->acceptor_addrtype)
       || !FUNC_4(VAR_3,
    &VAR_5->acceptor_address)
       || !FUNC_4(VAR_3,
    &VAR_5->application_data)) {
    FUNC_1(VAR_5, sizeof(*VAR_5));
    return (VAR_0);
   }
   *VAR_4 = VAR_5;
  }
  break;

 case 128:
  VAR_5 = *VAR_4;
  if (VAR_5) {
   FUNC_4(VAR_3, &VAR_5->initiator_address);
   FUNC_4(VAR_3, &VAR_5->acceptor_address);
   FUNC_4(VAR_3, &VAR_5->application_data);
   FUNC_1(VAR_5, sizeof(*VAR_5));
  }
 }

 return (VAR_2);
}
