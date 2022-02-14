
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct srej_list {int list; int tx_seq; } ;
struct sock {int dummy; } ;
struct l2cap_pinfo {int expected_tx_seq; int conn_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sock*) ;
 struct srej_list* FUNC_1 (int,int ) ;
 struct l2cap_pinfo* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct l2cap_pinfo*,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_5, u8 VAR_6)
{
 struct l2cap_pinfo *VAR_7 = FUNC_2(VAR_5);
 struct srej_list *VAR_8;
 u16 VAR_9;

 while (VAR_6 != VAR_7->expected_tx_seq) {
  VAR_9 = VAR_4;
  VAR_9 |= VAR_7->expected_tx_seq << VAR_3;
  if (VAR_7->conn_state & VAR_1) {
   VAR_9 |= VAR_2;
   VAR_7->conn_state &= ~VAR_1;
  }
  FUNC_3(VAR_7, VAR_9);

  VAR_8 = FUNC_1(sizeof(struct srej_list), VAR_0);
  VAR_8->tx_seq = VAR_7->expected_tx_seq++;
  FUNC_4(&VAR_8->list, FUNC_0(VAR_5));
 }
 VAR_7->expected_tx_seq++;
}
