
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int ,unsigned char,unsigned char,void*) ;
 int FUNC_2 (int ,int,int,void*) ;
 int FUNC_3 (int ,unsigned char,void*) ;
 int FUNC_4 (int ,int ,unsigned char,void*) ;
 int FUNC_5 (int ,unsigned char,void*) ;
 int FUNC_6 (int ,unsigned char*,void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static unsigned char *
FUNC_7 (unsigned char *VAR_14, unsigned char VAR_15, void *VAR_16)
{
  if ((VAR_15 & 0x10) == 0)
    {
      unsigned char VAR_17 = *VAR_14++;

      FUNC_1(VAR_0, ((VAR_15 & 0xf) << 1) | ((VAR_17 >> 7) & 1),
      (VAR_17 & 0x7f), VAR_16);
    }
  else if ((VAR_15 & 0x08) == 0)
    {
      unsigned char VAR_18 = *VAR_14++, VAR_19, VAR_20;

      VAR_19 = ((VAR_15 & 0x7) << 1) | ((VAR_18 >> 7) & 1);
      VAR_20 = (VAR_18 & 0x7f);
      switch (VAR_19)
 {
 case 0: FUNC_4(VAR_1, VAR_10, VAR_20, VAR_16); break;
 case 1: FUNC_4(VAR_1, VAR_12, VAR_20, VAR_16); break;
 case 2: FUNC_4(VAR_1, VAR_8, VAR_20, VAR_16); break;
 case 3: FUNC_4(VAR_1, VAR_9, VAR_20, VAR_16); break;
 case 4: FUNC_4(VAR_1, VAR_13, VAR_20, VAR_16); break;
 case 5: FUNC_4(VAR_1, VAR_7, VAR_20, VAR_16); break;
 case 6: FUNC_5(VAR_1, VAR_20, VAR_16); break;
 case 7: FUNC_4(VAR_1, VAR_11, VAR_20, VAR_16); break;
 case 8: FUNC_4(VAR_1, VAR_4, VAR_20, VAR_16); break;
 case 9: FUNC_4(VAR_1, VAR_5, VAR_20, VAR_16); break;
 case 10: FUNC_4(VAR_1, VAR_6, VAR_20, VAR_16); break;
 case 11: FUNC_3(VAR_1, VAR_20, VAR_16); break;
 default: FUNC_0(VAR_19); break;
 }
    }
  else if ((VAR_15 & 0x7) == 0)
    FUNC_6(VAR_2, VAR_14, VAR_16);
  else if ((VAR_15 & 0x7) == 1)
    {
      unw_word VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

      VAR_23 = *VAR_14++; VAR_24 = *VAR_14++; VAR_25 = *VAR_14++;
      VAR_21 = ((VAR_23 >> 4) & 0xf);
      VAR_22 = ((VAR_23 & 0xf) << 16) | (VAR_24 << 8) | VAR_25;
      FUNC_2(VAR_3, VAR_21, VAR_22, VAR_16);
    }
  else
    FUNC_0(VAR_15);
  return VAR_14;
}
