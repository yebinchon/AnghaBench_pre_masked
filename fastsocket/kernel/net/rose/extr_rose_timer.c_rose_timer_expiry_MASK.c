
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct rose_sock {int state; int condition; TYPE_1__* neighbour; } ;
struct TYPE_2__ {int use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ,int,int) ;
 int FUNC_3 (struct sock*) ;
 struct rose_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_3)
{
 struct sock *VAR_4 = (struct sock *)VAR_3;
 struct rose_sock *VAR_5 = FUNC_4(VAR_4);

 FUNC_0(VAR_4);
 switch (VAR_5->state) {
 case 131:
 case 128:
  FUNC_6(VAR_4, VAR_1);
  VAR_5->state = 130;
  FUNC_5(VAR_4);
  break;

 case 130:
  VAR_5->neighbour->use--;
  FUNC_2(VAR_4, VAR_0, -1, -1);
  break;

 case 129:
  if (VAR_5->condition & VAR_2) {
   VAR_5->condition &= ~VAR_2;
   FUNC_3(VAR_4);
  }
  break;
 }
 FUNC_1(VAR_4);
}
