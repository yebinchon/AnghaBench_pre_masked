
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int sk_state; } ;
struct TYPE_2__ {int dccps_server_timewait; int dccps_role; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (char*,struct sock*) ;
 int FUNC_2 (struct sock*,int) ;
 int FUNC_3 (struct sock*,int ) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_5)
{
 u8 VAR_6 = VAR_1;

 switch (VAR_5->sk_state) {
 case 129:
 case 128:
  FUNC_0(VAR_5);
  break;
 case 130:
  FUNC_1("Stop PARTOPEN timer (%p)\n", VAR_5);
  FUNC_5(VAR_5, VAR_4);

 case 131:
  FUNC_2(VAR_5, 1);

  if (FUNC_4(VAR_5)->dccps_role == VAR_3 &&
      !FUNC_4(VAR_5)->dccps_server_timewait)
   VAR_6 = VAR_0;
  else
   VAR_6 = VAR_2;

 default:
  FUNC_3(VAR_5, VAR_6);
 }
}
