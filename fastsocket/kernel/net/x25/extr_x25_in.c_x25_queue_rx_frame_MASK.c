
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x25_sock {int fraglen; TYPE_1__* neighbour; int fragment_queue; } ;
struct sock {int (* sk_data_ready ) (struct sock*,int) ;int sk_receive_queue; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {scalar_t__ extended; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ,int) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,struct sock*) ;
 int FUNC_9 (struct sock*,int ) ;
 int FUNC_10 (struct sock*,int) ;
 struct x25_sock* FUNC_11 (struct sock*) ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_4, struct sk_buff *VAR_5, int VAR_6)
{
 struct sk_buff *VAR_7, *VAR_8 = VAR_5;
 struct x25_sock *VAR_9 = FUNC_11(VAR_4);

 if (VAR_6) {
  VAR_9->fraglen += VAR_5->len;
  FUNC_6(&VAR_9->fragment_queue, VAR_5);
  FUNC_8(VAR_5, VAR_4);
  return 0;
 }

 if (!VAR_6 && VAR_9->fraglen > 0) {
  int VAR_10 = VAR_9->fraglen + VAR_5->len;

  if ((VAR_8 = FUNC_0(VAR_10, VAR_0)) == ((void*)0)){
   FUNC_1(VAR_5);
   return 1;
  }

  FUNC_6(&VAR_9->fragment_queue, VAR_5);

  FUNC_7(VAR_8);

  VAR_7 = FUNC_3(&VAR_9->fragment_queue);
  FUNC_2(VAR_7, FUNC_5(VAR_8, VAR_7->len),
       VAR_7->len);
  FUNC_1(VAR_7);

  while ((VAR_7 =
   FUNC_3(&VAR_9->fragment_queue)) != ((void*)0)) {
   FUNC_4(VAR_7, (VAR_9->neighbour->extended) ?
     VAR_2 : VAR_3);
   FUNC_2(VAR_7,
        FUNC_5(VAR_8, VAR_7->len),
        VAR_7->len);
   FUNC_1(VAR_7);
  }

  VAR_9->fraglen = 0;
 }

 FUNC_8(VAR_8, VAR_4);
 FUNC_6(&VAR_4->sk_receive_queue, VAR_8);
 if (!FUNC_9(VAR_4, VAR_1))
  VAR_4->sk_data_ready(VAR_4, VAR_8->len);

 return 0;
}
