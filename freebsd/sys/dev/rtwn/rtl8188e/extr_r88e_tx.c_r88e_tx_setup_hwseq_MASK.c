
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r92c_tx_desc {int txdseq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void
FUNC_1(void *VAR_1)
{
 struct r92c_tx_desc *VAR_2 = (struct r92c_tx_desc *)VAR_1;

 VAR_2->txdseq |= FUNC_0(VAR_0);
}
