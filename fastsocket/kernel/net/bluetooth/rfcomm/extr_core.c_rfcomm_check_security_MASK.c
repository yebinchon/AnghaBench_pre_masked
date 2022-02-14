
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int dummy; } ;
struct rfcomm_dlc {int sec_level; TYPE_2__* session; } ;
typedef int __u8 ;
struct TYPE_8__ {TYPE_3__* conn; } ;
struct TYPE_7__ {int hcon; } ;
struct TYPE_6__ {TYPE_1__* sock; } ;
struct TYPE_5__ {struct sock* sk; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_4__* FUNC_1 (struct sock*) ;

__attribute__((used)) static inline int FUNC_2(struct rfcomm_dlc *VAR_3)
{
 struct sock *VAR_4 = VAR_3->session->sock->sk;
 __u8 VAR_5;

 switch (VAR_3->sec_level) {
 case 129:
  VAR_5 = VAR_1;
  break;
 case 128:
  VAR_5 = VAR_0;
  break;
 default:
  VAR_5 = VAR_2;
  break;
 }

 return FUNC_0(FUNC_1(VAR_4)->conn->hcon, VAR_3->sec_level,
        VAR_5);
}
