
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int ) ;

void
FUNC_2 (CORE_ADDR VAR_3, ptid_t VAR_4)
{
  int VAR_5 = (int) (VAR_3 & 0xf) / VAR_2;
  CORE_ADDR VAR_6 = FUNC_0 (VAR_1, VAR_4);
  VAR_6 &= ~(3LL << 41);
  VAR_6 |= (CORE_ADDR)(VAR_5 & 0x3) << 41;

  VAR_3 &= ~0xfLL;

  FUNC_1 (VAR_1, VAR_6, VAR_4);
  FUNC_1 (VAR_0, VAR_3, VAR_4);
}
