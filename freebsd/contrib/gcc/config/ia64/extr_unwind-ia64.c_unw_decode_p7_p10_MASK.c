
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned char,unsigned char,void*) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (int ,unsigned char,unsigned char,void*) ;
 int FUNC_3 (int ,int ,int ,void*) ;
 int FUNC_4 (int ,int ,void*) ;
 int FUNC_5 (int ,int ,void*) ;
 int FUNC_6 (int ,int ,void*) ;
 int FUNC_7 (int ,int ,void*) ;
 int FUNC_8 (int ,int ,void*) ;
 int FUNC_9 (int ,int ,int ,void*) ;
 int FUNC_10 (int ,int ,int ,void*) ;
 int FUNC_11 (int ,int ,int ,void*) ;
 int FUNC_12 (int ,int ,void*) ;
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
 int FUNC_13 (unsigned char**) ;
 unsigned char* FUNC_14 (unsigned char*,unsigned char,void*) ;
 unsigned char* FUNC_15 (unsigned char*,unsigned char,void*) ;
 unsigned char* FUNC_16 (unsigned char*,unsigned char,void*) ;
 unsigned char* FUNC_17 (unsigned char*,unsigned char,void*) ;

__attribute__((used)) static unsigned char *
FUNC_18 (unsigned char *VAR_14, unsigned char VAR_15, void *VAR_16)
{
  unsigned char VAR_17, VAR_18, VAR_19;
  unw_word VAR_20, VAR_21;

  if ((VAR_15 & 0x10) == 0)
    {
      VAR_17 = (VAR_15 & 0xf);
      VAR_20 = FUNC_13 (&VAR_14);
      switch (VAR_17)
 {
 case 0:
   VAR_21 = FUNC_13 (&VAR_14);
   FUNC_3(VAR_1, VAR_20, VAR_21, VAR_16);
   break;

 case 1: FUNC_4(VAR_1, VAR_20, VAR_16); break;
 case 2: FUNC_12(VAR_1, VAR_20, VAR_16); break;
 case 3: FUNC_10(VAR_1, VAR_10, VAR_20, VAR_16); break;
 case 4: FUNC_11(VAR_1, VAR_12, VAR_20, VAR_16); break;
 case 5: FUNC_9(VAR_1, VAR_12, VAR_20, VAR_16); break;
 case 6: FUNC_11(VAR_1, VAR_8, VAR_20, VAR_16); break;
 case 7: FUNC_9(VAR_1, VAR_8, VAR_20, VAR_16); break;
 case 8: FUNC_11(VAR_1, VAR_9, VAR_20, VAR_16); break;
 case 9: FUNC_9(VAR_1, VAR_9, VAR_20, VAR_16); break;
 case 10: FUNC_11(VAR_1, VAR_7, VAR_20, VAR_16); break;
 case 11: FUNC_9(VAR_1, VAR_7, VAR_20, VAR_16); break;
 case 12: FUNC_11(VAR_1, VAR_13, VAR_20, VAR_16); break;
 case 13: FUNC_9(VAR_1, VAR_13, VAR_20, VAR_16); break;
 case 14: FUNC_11(VAR_1, VAR_6, VAR_20, VAR_16); break;
 case 15: FUNC_9(VAR_1, VAR_6, VAR_20, VAR_16); break;
 default: FUNC_1(VAR_17); break;
 }
    }
  else
    {
      switch (VAR_15 & 0xf)
 {
 case 0x0:
   {
     VAR_17 = *VAR_14++;
     VAR_20 = FUNC_13 (&VAR_14);
     switch (VAR_17)
       {
       case 1: FUNC_10(VAR_2, VAR_12, VAR_20, VAR_16); break;
       case 2: FUNC_10(VAR_2, VAR_8, VAR_20, VAR_16); break;
       case 3: FUNC_10(VAR_2, VAR_9, VAR_20, VAR_16); break;
       case 4: FUNC_10(VAR_2, VAR_7, VAR_20, VAR_16); break;
       case 5: FUNC_10(VAR_2, VAR_13, VAR_20, VAR_16); break;
       case 6: FUNC_10(VAR_2, VAR_6, VAR_20, VAR_16); break;
       case 7: FUNC_11(VAR_2, VAR_4, VAR_20, VAR_16); break;
       case 8: FUNC_9(VAR_2, VAR_4, VAR_20, VAR_16); break;
       case 9: FUNC_10(VAR_2, VAR_4, VAR_20, VAR_16); break;
       case 10: FUNC_11(VAR_2, VAR_5, VAR_20, VAR_16); break;
       case 11: FUNC_9(VAR_2, VAR_5, VAR_20, VAR_16); break;
       case 12: FUNC_10(VAR_2, VAR_5, VAR_20, VAR_16); break;
       case 13: FUNC_11(VAR_2, VAR_11, VAR_20, VAR_16); break;
       case 14: FUNC_9(VAR_2, VAR_11, VAR_20, VAR_16); break;
       case 15: FUNC_10(VAR_2, VAR_11, VAR_20, VAR_16); break;
       case 16: FUNC_7(VAR_2, VAR_20, VAR_16); break;
       case 17: FUNC_5(VAR_2, VAR_20, VAR_16); break;
       case 18: FUNC_6(VAR_2, VAR_20, VAR_16); break;
       case 19: FUNC_8(VAR_2, VAR_20, VAR_16); break;
       default: FUNC_1(VAR_17); break;
     }
   }
   break;

 case 0x1:
   VAR_18 = *VAR_14++; VAR_19 = *VAR_14++;
   FUNC_2(VAR_3, (VAR_18 & 0xf), (VAR_19 & 0x7f), VAR_16);
   break;

 case 0xf:
   VAR_18 = *VAR_14++; VAR_19 = *VAR_14++;
   FUNC_0(VAR_0, VAR_18, VAR_19, VAR_16);
   break;

 case 0x9:
   return FUNC_14 (VAR_14, VAR_15, VAR_16);

 case 0xa:
   return FUNC_15 (VAR_14, VAR_15, VAR_16);

 case 0xb:
   return FUNC_16 (VAR_14, VAR_15, VAR_16);

 case 0xc:
   return FUNC_17 (VAR_14, VAR_15, VAR_16);

 default:
   FUNC_1(VAR_15);
   break;
 }
    }
  return VAR_14;
}
