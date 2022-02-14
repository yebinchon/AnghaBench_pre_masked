
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int des_key_schedule ;
typedef int DES_LONG ;


 int FUNC_0 (unsigned char const*,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ,unsigned char*) ;

void FUNC_4(unsigned char *VAR_0, unsigned char *VAR_1,
             des_key_schedule VAR_2, des_key_schedule VAR_3, des_key_schedule VAR_4,
             int VAR_5)
{
 register DES_LONG VAR_6,VAR_7;
 DES_LONG VAR_8[2];
 const unsigned char *VAR_9 = VAR_0;
 unsigned char *VAR_10 = VAR_1;

 FUNC_0(VAR_9,VAR_6);
 FUNC_0(VAR_9,VAR_7);
 VAR_8[0]=VAR_6;
 VAR_8[1]=VAR_7;

 if (VAR_5)
  FUNC_2(VAR_8,VAR_2,VAR_3,VAR_4);
 else
  FUNC_1(VAR_8,VAR_2,VAR_3,VAR_4);

 VAR_6=VAR_8[0];
 VAR_7=VAR_8[1];
 FUNC_3(VAR_6,VAR_10);
 FUNC_3(VAR_7,VAR_10);
}
