
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int16_t ;
typedef int ng_l2cap_con_p ;
typedef TYPE_1__* ng_l2cap_cmd_p ;
struct TYPE_5__ {int * aux; int ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(ng_l2cap_con_p VAR_3, u_int8_t VAR_4,
       u_int16_t VAR_5)
{
 ng_l2cap_cmd_p VAR_6 = ((void*)0);

 VAR_6 = FUNC_4(VAR_3, ((void*)0), VAR_4,
          VAR_2,
          0);
 if (VAR_6 == ((void*)0)) {

  return (VAR_1);
 }

 FUNC_0(VAR_6->aux, VAR_6->ident, VAR_5);
 if (VAR_6->aux == ((void*)0)) {
  FUNC_1(VAR_6);

  return (VAR_0);
 }


 FUNC_2(VAR_3, VAR_6);
 FUNC_3(VAR_3);

 return (0);
}
