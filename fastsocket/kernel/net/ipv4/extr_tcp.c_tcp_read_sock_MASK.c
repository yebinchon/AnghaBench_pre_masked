
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct tcp_sock {size_t copied_seq; size_t urg_seq; scalar_t__ urg_data; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {size_t len; } ;
typedef int (* sk_read_actor_t ) (TYPE_1__*,struct sk_buff*,size_t,size_t) ;
struct TYPE_6__ {int count; } ;
typedef TYPE_1__ read_descriptor_t ;
struct TYPE_7__ {scalar_t__ fin; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_1 (struct sock*,int) ;
 TYPE_5__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 struct sk_buff* FUNC_4 (struct sock*,size_t,size_t*) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;

int FUNC_6(struct sock *VAR_2, read_descriptor_t *VAR_3,
    sk_read_actor_t VAR_4)
{
 struct sk_buff *VAR_5;
 struct tcp_sock *VAR_6 = FUNC_5(VAR_2);
 u32 VAR_7 = VAR_6->copied_seq;
 u32 VAR_8;
 int VAR_9 = 0;

 if (VAR_2->sk_state == VAR_1)
  return -VAR_0;
 while ((VAR_5 = FUNC_4(VAR_2, VAR_7, &VAR_8)) != ((void*)0)) {
  if (VAR_8 < VAR_5->len) {
   int VAR_10;
   size_t VAR_11;

   VAR_11 = VAR_5->len - VAR_8;

   if (VAR_6->urg_data) {
    u32 VAR_12 = VAR_6->urg_seq - VAR_7;
    if (VAR_12 < VAR_11)
     VAR_11 = VAR_12;
    if (!VAR_11)
     break;
   }
   VAR_10 = VAR_4(VAR_3, VAR_5, VAR_8, VAR_11);
   if (VAR_10 < 0) {
    if (!VAR_9)
     VAR_9 = VAR_10;
    break;
   } else if (VAR_10 <= VAR_11) {
    VAR_7 += VAR_10;
    VAR_9 += VAR_10;
    VAR_8 += VAR_10;
   }






   VAR_5 = FUNC_4(VAR_2, VAR_7-1, &VAR_8);
   if (!VAR_5 || (VAR_8+1 != VAR_5->len))
    break;
  }
  if (FUNC_2(VAR_5)->fin) {
   FUNC_0(VAR_2, VAR_5, 0);
   ++VAR_7;
   break;
  }
  FUNC_0(VAR_2, VAR_5, 0);
  if (!VAR_3->count)
   break;
  VAR_6->copied_seq = VAR_7;
 }
 VAR_6->copied_seq = VAR_7;

 FUNC_3(VAR_2);


 if (VAR_9 > 0)
  FUNC_1(VAR_2, VAR_9);
 return VAR_9;
}
