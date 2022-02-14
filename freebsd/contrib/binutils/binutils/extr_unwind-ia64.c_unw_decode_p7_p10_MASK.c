
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word ;


 int FUNC_0 (char*,unsigned char,unsigned char,void*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,unsigned char,unsigned char,void*) ;
 int FUNC_3 (char*,int ,int ,void*) ;
 int FUNC_4 (char*,int ,void*) ;
 int FUNC_5 (char*,int ,void*) ;
 int FUNC_6 (char*,int ,void*) ;
 int FUNC_7 (char*,int ,void*) ;
 int FUNC_8 (char*,int ,void*) ;
 int FUNC_9 (char*,int ,int ,void*) ;
 int FUNC_10 (char*,int ,int ,void*) ;
 int FUNC_11 (char*,int ,int ,void*) ;
 int FUNC_12 (char*,int ,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (unsigned char const**) ;
 unsigned char const* FUNC_14 (unsigned char const*,unsigned int,void*) ;
 unsigned char const* FUNC_15 (unsigned char const*,unsigned int,void*) ;
 unsigned char const* FUNC_16 (unsigned char const*,unsigned int,void*) ;
 unsigned char const* FUNC_17 (unsigned char const*,unsigned int,void*) ;

__attribute__((used)) static const unsigned char *
FUNC_18 (const unsigned char *VAR_10, unsigned int VAR_11, void *VAR_12)
{
  unsigned char VAR_13, VAR_14, VAR_15;
  unw_word VAR_16, VAR_17;

  if ((VAR_11 & 0x10) == 0)
    {
      VAR_13 = (VAR_11 & 0xf);
      VAR_16 = FUNC_13 (&VAR_10);
      switch (VAR_13)
 {
 case 0:
   VAR_17 = FUNC_13 (&VAR_10);
   FUNC_3 ("P7", VAR_16, VAR_17, VAR_12);
   break;

 case 1:
   FUNC_4 ("P7", VAR_16, VAR_12);
   break;
 case 2:
   FUNC_12 ("P7", VAR_16, VAR_12);
   break;
 case 3:
   FUNC_10 ("P7", VAR_6, VAR_16, VAR_12);
   break;
 case 4:
   FUNC_11 ("P7", VAR_8, VAR_16, VAR_12);
   break;
 case 5:
   FUNC_9 ("P7", VAR_8, VAR_16, VAR_12);
   break;
 case 6:
   FUNC_11 ("P7", VAR_4, VAR_16, VAR_12);
   break;
 case 7:
   FUNC_9 ("P7", VAR_4, VAR_16, VAR_12);
   break;
 case 8:
   FUNC_11 ("P7", VAR_5, VAR_16, VAR_12);
   break;
 case 9:
   FUNC_9 ("P7", VAR_5, VAR_16, VAR_12);
   break;
 case 10:
   FUNC_11 ("P7", VAR_3, VAR_16, VAR_12);
   break;
 case 11:
   FUNC_9 ("P7", VAR_3, VAR_16, VAR_12);
   break;
 case 12:
   FUNC_11 ("P7", VAR_9, VAR_16, VAR_12);
   break;
 case 13:
   FUNC_9 ("P7", VAR_9, VAR_16, VAR_12);
   break;
 case 14:
   FUNC_11 ("P7", VAR_2, VAR_16, VAR_12);
   break;
 case 15:
   FUNC_9 ("P7", VAR_2, VAR_16, VAR_12);
   break;
 default:
   FUNC_1 (VAR_13);
   break;
 }
    }
  else
    {
      switch (VAR_11 & 0xf)
 {
 case 0x0:
   {
     VAR_13 = *VAR_10++;
     VAR_16 = FUNC_13 (&VAR_10);
     switch (VAR_13)
       {
       case 1:
  FUNC_10 ("P8", VAR_8, VAR_16, VAR_12);
  break;
       case 2:
  FUNC_10 ("P8", VAR_4, VAR_16, VAR_12);
  break;
       case 3:
  FUNC_10 ("P8", VAR_5, VAR_16, VAR_12);
  break;
       case 4:
  FUNC_10 ("P8", VAR_3, VAR_16, VAR_12);
  break;
       case 5:
  FUNC_10 ("P8", VAR_9, VAR_16, VAR_12);
  break;
       case 6:
  FUNC_10 ("P8", VAR_2, VAR_16, VAR_12);
  break;
       case 7:
  FUNC_11 ("P8", VAR_0, VAR_16, VAR_12);
  break;
       case 8:
  FUNC_9 ("P8", VAR_0, VAR_16, VAR_12);
  break;
       case 9:
  FUNC_10 ("P8", VAR_0, VAR_16, VAR_12);
  break;
       case 10:
  FUNC_11 ("P8", VAR_1, VAR_16, VAR_12);
  break;
       case 11:
  FUNC_9 ("P8", VAR_1, VAR_16, VAR_12);
  break;
       case 12:
  FUNC_10 ("P8", VAR_1, VAR_16, VAR_12);
  break;
       case 13:
  FUNC_11 ("P8", VAR_7, VAR_16, VAR_12);
  break;
       case 14:
  FUNC_9 ("P8", VAR_7, VAR_16, VAR_12);
  break;
       case 15:
  FUNC_10 ("P8", VAR_7, VAR_16, VAR_12);
  break;
       case 16:
  FUNC_7 ("P8", VAR_16, VAR_12);
  break;
       case 17:
  FUNC_5 ("P8", VAR_16, VAR_12);
  break;
       case 18:
  FUNC_6 ("P8", VAR_16, VAR_12);
  break;
       case 19:
  FUNC_8 ("P8", VAR_16, VAR_12);
  break;
       default:
  FUNC_1 (VAR_13);
  break;
       }
   }
   break;

 case 0x1:
   VAR_14 = *VAR_10++;
   VAR_15 = *VAR_10++;
   FUNC_2 ("P9", (VAR_14 & 0xf), (VAR_15 & 0x7f), VAR_12);
   break;

 case 0xf:
   VAR_14 = *VAR_10++;
   VAR_15 = *VAR_10++;
   FUNC_0 ("P10", VAR_14, VAR_15, VAR_12);
   break;

 case 0x9:
   return FUNC_14 (VAR_10, VAR_11, VAR_12);

 case 0xa:
   return FUNC_15 (VAR_10, VAR_11, VAR_12);

 case 0xb:
   return FUNC_16 (VAR_10, VAR_11, VAR_12);

 case 0xc:
   return FUNC_17 (VAR_10, VAR_11, VAR_12);

 default:
   FUNC_1 (VAR_11);
   break;
 }
    }
  return VAR_10;
}
