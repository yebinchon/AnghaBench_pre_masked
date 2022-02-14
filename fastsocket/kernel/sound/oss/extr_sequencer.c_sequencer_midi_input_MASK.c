
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned char*,int) ;
 unsigned int VAR_4 ;

__attribute__((used)) static void FUNC_1(int VAR_5, unsigned char VAR_6)
{
 unsigned int VAR_7;
 unsigned char VAR_8[4];

 if (VAR_6 == 0xfe)
  return;

 VAR_7 = VAR_2 - VAR_4;

 if (VAR_7 != VAR_3)
 {
  VAR_7 = (VAR_7 << 8) | VAR_1;
  FUNC_0((unsigned char *) &VAR_7, 4);
  VAR_3 = VAR_7;
 }
 VAR_8[0] = VAR_0;
 VAR_8[1] = VAR_6;
 VAR_8[2] = VAR_5;
 VAR_8[3] = 0;

 FUNC_0(VAR_8, 4);
}
