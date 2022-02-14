
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {scalar_t__* data; } ;
struct pep_sock {scalar_t__ rx_fc; scalar_t__ tx_fc; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_0 (struct sk_buff*,int) ;
 scalar_t__* FUNC_1 (struct sk_buff*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 struct pep_sock* FUNC_2 (struct sock*) ;
 struct pnpipehdr* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct pep_sock *VAR_4 = FUNC_2(VAR_2);
 struct pnpipehdr *VAR_5 = FUNC_3(VAR_3);
 u8 VAR_6 = VAR_5->data[0];

 VAR_4->rx_fc = VAR_4->tx_fc = VAR_1;
 FUNC_0(VAR_3, sizeof(*VAR_5));
 while (VAR_6 > 0) {
  u8 VAR_7, VAR_8[2], VAR_9 = sizeof(VAR_8);
  u8 *VAR_10 = FUNC_1(VAR_3, &VAR_7, &VAR_9, VAR_8);

  if (VAR_10 == ((void*)0))
   return -VAR_0;
  switch (VAR_7) {
  case 128:
   if (VAR_9 < 2 || (VAR_10[0] | VAR_10[1]) > 3)
    break;
   VAR_4->tx_fc = VAR_10[0] & 3;
   VAR_4->rx_fc = VAR_10[1] & 3;
   break;
  }
  VAR_6--;
 }
 return 0;
}
