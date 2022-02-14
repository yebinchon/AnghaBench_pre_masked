
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct sock {int dummy; } ;
struct sk_buff {unsigned int len; } ;
struct TYPE_2__ {unsigned int seq; unsigned int end_seq; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct sock*,struct sk_buff*,unsigned int,unsigned int) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_1, struct sk_buff *VAR_2,
     u32 VAR_3, u32 VAR_4)
{
 int VAR_5, VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;

 VAR_5 = !FUNC_1(VAR_3, FUNC_0(VAR_2)->seq) &&
    !FUNC_2(VAR_4, FUNC_0(VAR_2)->end_seq);

 if (FUNC_5(VAR_2) > 1 && !VAR_5 &&
     FUNC_1(FUNC_0(VAR_2)->end_seq, VAR_3)) {
  VAR_8 = FUNC_4(VAR_2);
  VAR_5 = !FUNC_1(VAR_3, FUNC_0(VAR_2)->seq);

  if (!VAR_5) {
   VAR_7 = VAR_3 - FUNC_0(VAR_2)->seq;
   if (VAR_7 < VAR_8)
    VAR_7 = VAR_8;
  } else {
   VAR_7 = VAR_4 - FUNC_0(VAR_2)->seq;
   if (VAR_7 < VAR_8)
    return -VAR_0;
  }




  if (VAR_7 > VAR_8) {
   unsigned int VAR_9 = (VAR_7 / VAR_8) * VAR_8;
   if (!VAR_5 && VAR_9 < VAR_7) {
    VAR_9 += VAR_8;
    if (VAR_9 > VAR_2->len)
     return 0;
   }
   VAR_7 = VAR_9;
  }
  VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_7, VAR_8);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return VAR_5;
}
