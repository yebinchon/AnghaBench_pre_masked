
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int DES_key_schedule ;
typedef int DES_cblock ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(const u8 *VAR_1, const u8 *VAR_2, u8 *VAR_3)
{
 u8 VAR_4[8], VAR_5, VAR_6;
 int VAR_7;
 DES_key_schedule VAR_8;


 VAR_5 = 0;
 for (VAR_7 = 0; VAR_7 < 7; VAR_7++) {
  VAR_6 = VAR_2[VAR_7];
  VAR_4[VAR_7] = (VAR_6 >> VAR_7) | VAR_5 | 1;
  VAR_5 = VAR_6 << (7 - VAR_7);
 }
 VAR_4[VAR_7] = VAR_5 | 1;

 FUNC_1((DES_cblock *) &VAR_4, &VAR_8);
 FUNC_0((DES_cblock *) VAR_1, (DES_cblock *) VAR_3, &VAR_8,
   VAR_0);
 return 0;
}
