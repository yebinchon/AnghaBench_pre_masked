
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct r12a_tx_desc {int txdw5; int txdw4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

uint8_t
FUNC_4(const void *VAR_4)
{
 const struct r12a_tx_desc *VAR_5 = VAR_4;
 uint8_t VAR_6, VAR_7;

 if (!(VAR_5->txdw5 & FUNC_2(VAR_3)))
  return (0);

 VAR_7 = FUNC_0(FUNC_3(VAR_5->txdw4), VAR_2);
 if (FUNC_1(VAR_7))
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_0;
 return (VAR_6);
}
