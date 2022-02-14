
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_1)
{
 unsigned long VAR_2;

 FUNC_3(&VAR_0, VAR_2);

 if (VAR_1) {

  FUNC_2(0xB6, 0x43);

  FUNC_2(VAR_1 & 0xff, 0x42);
  FUNC_1((VAR_1 >> 8) & 0xff, 0x42);

  FUNC_2(FUNC_0(0x61) | 3, 0x61);
 } else {

  FUNC_1(FUNC_0(0x61) & 0xFC, 0x61);
 }

 FUNC_4(&VAR_0, VAR_2);
}
