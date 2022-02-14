
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int ) ;
 unsigned int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

int
FUNC_6(unsigned int VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
 uint32_t VAR_7;

 if (VAR_4 >= VAR_3)
  return (VAR_0);


 VAR_7 = FUNC_4(FUNC_3(0));
 VAR_7 |= (0x01 << VAR_4);
 FUNC_5(FUNC_3(0), VAR_7);


 VAR_7 = FUNC_4(VAR_2);
 VAR_7 |= FUNC_2(VAR_4, VAR_6);
 FUNC_5(VAR_2, VAR_7);


 VAR_7 = FUNC_4(FUNC_0(VAR_4));
 VAR_7 &= VAR_1;
 VAR_7 |= FUNC_1(VAR_4);
 FUNC_5(FUNC_0(VAR_4), VAR_7);

 return 0;
}
