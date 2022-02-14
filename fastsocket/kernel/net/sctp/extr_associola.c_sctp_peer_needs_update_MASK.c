
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sk; } ;
struct sctp_association {int state; int pathmtu; TYPE_2__ base; scalar_t__ a_rwnd; scalar_t__ rwnd; } ;
struct TYPE_3__ {int sk_rcvbuf; } ;






 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct sctp_association *VAR_2)
{
 switch (VAR_2->state) {
 case 131:
 case 130:
 case 129:
 case 128:
  if ((VAR_2->rwnd > VAR_2->a_rwnd) &&
      ((VAR_2->rwnd - VAR_2->a_rwnd) >= FUNC_0(VAR_0,
      (VAR_2->base.sk->sk_rcvbuf >> VAR_1),
      VAR_2->pathmtu)))
   return 1;
  break;
 default:
  break;
 }
 return 0;
}
