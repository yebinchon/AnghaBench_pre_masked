
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_sock {int state; int condition; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct sock*,int ,int ,int ) ;
 int FUNC_1 (struct sock*) ;
 struct x25_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static inline void FUNC_5(struct sock * VAR_3)
{
 struct x25_sock *VAR_4 = FUNC_2(VAR_3);

 switch (VAR_4->state) {

  case 129:
   if (VAR_4->condition & VAR_2) {
    VAR_4->condition &= ~VAR_2;
    FUNC_1(VAR_3);
   }
   break;

  case 131:
  case 128:
   FUNC_4(VAR_3, VAR_1);
   VAR_4->state = 130;
   FUNC_3(VAR_3);
   break;

  case 130:
   FUNC_0(VAR_3, VAR_0, 0, 0);
   break;
 }
}
