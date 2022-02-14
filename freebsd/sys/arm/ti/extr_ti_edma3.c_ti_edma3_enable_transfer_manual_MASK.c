
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_1 ;
 int FUNC_2 (int ,int) ;

int
FUNC_3(unsigned int VAR_2)
{
 if (VAR_2 >= VAR_1)
  return (VAR_0);


 if (VAR_2 < 32) {
  FUNC_2(FUNC_0(0), 1 << VAR_2);
 } else {
  FUNC_2(FUNC_1(0), 1 << (VAR_2 - 32));
 }

 return 0;
}
