
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int VAR_3 ;
 int FUNC_4 (int ,int) ;

int
FUNC_5(unsigned int VAR_4)
{
 if (VAR_4 >= VAR_3)
  return (VAR_0);



 if(VAR_4 < 32) {
  FUNC_4(FUNC_2(0), (1 << VAR_4));
  FUNC_4(VAR_1, (1 << VAR_4));
  FUNC_4(FUNC_0(0), (1 << VAR_4));
 } else {
  FUNC_4(FUNC_3(0), 1 << (VAR_4 - 32));
  FUNC_4(VAR_2, 1 << (VAR_4 - 32));
  FUNC_4(FUNC_1(0), 1 << (VAR_4 - 32));
 }

 return 0;
}
