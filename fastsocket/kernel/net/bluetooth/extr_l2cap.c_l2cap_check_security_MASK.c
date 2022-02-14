
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct l2cap_conn {int hcon; } ;
typedef int __u8 ;
struct TYPE_2__ {scalar_t__ psm; int sec_level; struct l2cap_conn* conn; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ) ;
 TYPE_1__* FUNC_2 (struct sock*) ;

__attribute__((used)) static inline int FUNC_3(struct sock *VAR_6)
{
 struct l2cap_conn *VAR_7 = FUNC_2(VAR_6)->conn;
 __u8 VAR_8;

 if (FUNC_2(VAR_6)->psm == FUNC_0(0x0001)) {
  if (FUNC_2(VAR_6)->sec_level == 129)
   VAR_8 = VAR_5;
  else
   VAR_8 = VAR_4;

  if (FUNC_2(VAR_6)->sec_level == VAR_0)
   FUNC_2(VAR_6)->sec_level = VAR_1;
 } else {
  switch (FUNC_2(VAR_6)->sec_level) {
  case 129:
   VAR_8 = VAR_3;
   break;
  case 128:
   VAR_8 = VAR_2;
   break;
  default:
   VAR_8 = VAR_4;
   break;
  }
 }

 return FUNC_1(VAR_7->hcon, FUNC_2(VAR_6)->sec_level,
        VAR_8);
}
