
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int) ;
 int VAR_1 ;
 int FUNC_6 (unsigned int) ;
 unsigned int VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

int
FUNC_9(unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 uint32_t VAR_6;

 if (VAR_3 >= VAR_2)
  return (VAR_0);


 if (VAR_3 < 32) {
  VAR_6 = FUNC_7(FUNC_3(0));
  VAR_6 |= (0x01 << VAR_3);
  FUNC_8(FUNC_3(0), VAR_6);
 } else {
  VAR_6 = FUNC_7(FUNC_4(0));
  VAR_6 |= (0x01 << (VAR_3 - 32));
  FUNC_8(FUNC_4(0), VAR_6);
 }


 VAR_6 = FUNC_7(FUNC_0(VAR_3 >> 3));
 VAR_6 &= FUNC_1(VAR_3);
 VAR_6 |= FUNC_2((VAR_3), VAR_5);
 FUNC_8(FUNC_0(VAR_3 >> 3), VAR_6);


 VAR_6 = FUNC_7(FUNC_5(VAR_3));
 VAR_6 &= VAR_1;
 VAR_6 |= FUNC_6(VAR_3);
 FUNC_8(FUNC_5(VAR_3), VAR_6);

 return 0;
}
