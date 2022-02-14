
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r92c_tx_desc {int txdw1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

void
FUNC_2(void *VAR_1, int VAR_2)
{
 struct r92c_tx_desc *VAR_3 = (struct r92c_tx_desc *)VAR_1;

 VAR_3->txdw1 |= FUNC_1(FUNC_0(VAR_0, VAR_2));
}
