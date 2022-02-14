
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; int sk_socket; } ;
struct rfcomm_dlc {int dummy; } ;
struct TYPE_2__ {struct rfcomm_dlc* dlc; } ;






 int FUNC_0 (char*,struct sock*,int,int ) ;

 int VAR_0 ;
 int FUNC_1 (struct rfcomm_dlc*,int ) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1)
{
 struct rfcomm_dlc *VAR_2 = FUNC_2(VAR_1)->dlc;

 FUNC_0("sk %p state %d socket %p", VAR_1, VAR_1->sk_state, VAR_1->sk_socket);

 switch (VAR_1->sk_state) {
 case 128:
  FUNC_3(VAR_1);
  break;

 case 131:
 case 130:
 case 132:
 case 129:
  FUNC_1(VAR_2, 0);

 default:
  FUNC_4(VAR_1, VAR_0);
  break;
 }
}
