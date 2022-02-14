
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2cap_conn {int tx_ident; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline u8 FUNC_2(struct l2cap_conn *VAR_0)
{
 u8 VAR_1;







 FUNC_0(&VAR_0->lock);

 if (++VAR_0->tx_ident > 128)
  VAR_0->tx_ident = 1;

 VAR_1 = VAR_0->tx_ident;

 FUNC_1(&VAR_0->lock);

 return VAR_1;
}
