
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r92c_tx_desc {int txdw1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

void
FUNC_1(void *VAR_2, int VAR_3)
{
 struct r92c_tx_desc *VAR_4 = (struct r92c_tx_desc *)VAR_2;

 if (VAR_3)
  VAR_4->txdw1 |= FUNC_0(VAR_1);
 else
  VAR_4->txdw1 |= FUNC_0(VAR_0);
}
