
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_neigh {scalar_t__ extended; } ;
struct sk_buff {int * sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 unsigned char* FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,struct x25_neigh*) ;

void FUNC_4(struct x25_neigh *VAR_6, unsigned int VAR_7,
    unsigned char VAR_8)
{
 unsigned char *VAR_9;
 int VAR_10 = VAR_4 + VAR_5 + 2;
 struct sk_buff *VAR_11 = FUNC_0(VAR_10, VAR_0);

 if (!VAR_11)
  return;

 FUNC_2(VAR_11, VAR_4);

 VAR_9 = FUNC_1(VAR_11, VAR_5 + 2);

 *VAR_9++ = ((VAR_7 >> 8) & 0x0F) | (VAR_6->extended ?
      VAR_2 :
      VAR_3);
 *VAR_9++ = (VAR_7 >> 0) & 0xFF;
 *VAR_9++ = VAR_1;
 *VAR_9++ = VAR_8;
 *VAR_9++ = 0x00;

 VAR_11->sk = ((void*)0);

 FUNC_3(VAR_11, VAR_6);
}
