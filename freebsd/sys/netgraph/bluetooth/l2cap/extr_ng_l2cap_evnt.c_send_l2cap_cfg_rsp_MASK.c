
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int16_t ;
struct mbuf {int dummy; } ;
typedef int ng_l2cap_con_p ;
typedef TYPE_1__* ng_l2cap_cmd_p ;
struct TYPE_5__ {int * aux; int ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,int ,int ,struct mbuf*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(ng_l2cap_con_p VAR_3, u_int8_t VAR_4, u_int16_t VAR_5,
  u_int16_t VAR_6, struct mbuf *VAR_7)
{
 ng_l2cap_cmd_p VAR_8 = ((void*)0);

 VAR_8 = FUNC_5(VAR_3, ((void*)0), VAR_4, VAR_2, 0);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_7);

  return (VAR_1);
 }

 FUNC_1(VAR_8->aux, VAR_8->ident, VAR_5, 0, VAR_6, VAR_7);
 if (VAR_8->aux == ((void*)0)) {
  FUNC_2(VAR_8);

  return (VAR_0);
 }


 FUNC_3(VAR_3, VAR_8);
 FUNC_4(VAR_3);

 return (0);
}
