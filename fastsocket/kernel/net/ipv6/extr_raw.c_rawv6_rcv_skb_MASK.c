
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_drops; scalar_t__ sk_filter; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ checksum; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_5(struct sock * VAR_1, struct sk_buff * VAR_2)
{
 if ((FUNC_2(VAR_1)->checksum || VAR_1->sk_filter) &&
     FUNC_3(VAR_2)) {
  FUNC_0(&VAR_1->sk_drops);
  FUNC_1(VAR_2);
  return VAR_0;
 }


 if (FUNC_4(VAR_1,VAR_2)<0) {
  FUNC_0(&VAR_1->sk_drops);
  FUNC_1(VAR_2);
  return VAR_0;
 }

 return 0;
}
