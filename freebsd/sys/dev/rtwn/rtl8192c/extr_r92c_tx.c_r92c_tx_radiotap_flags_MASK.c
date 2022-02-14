
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct r92c_tx_desc {int txdw4; int txdw5; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

uint8_t
FUNC_1(const void *VAR_4)
{
 const struct r92c_tx_desc *VAR_5 = VAR_4;
 uint8_t VAR_6;

 VAR_6 = 0;
 if (VAR_5->txdw4 & FUNC_0(VAR_2))
  VAR_6 |= VAR_1;
 if (VAR_5->txdw5 & FUNC_0(VAR_3))
  VAR_6 |= VAR_0;
 return (VAR_6);
}
