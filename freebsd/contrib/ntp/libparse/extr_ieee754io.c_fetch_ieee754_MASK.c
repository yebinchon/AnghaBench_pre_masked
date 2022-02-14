
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef int* offsets_t ;
struct TYPE_5__ {int l_ui; int l_uf; } ;
typedef TYPE_1__ l_fp ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_7 ;
 char* FUNC_2 (unsigned int,int,int,int) ;
 char* FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int*,int*) ;
 int FUNC_5 (char*,char*,char*,double,char*) ;

int
FUNC_6(
       unsigned char **VAR_8,
       int VAR_9,
       l_fp *VAR_10,
       offsets_t VAR_11
       )
{
  unsigned char *VAR_12 = *VAR_8;
  unsigned int VAR_13;
  unsigned int VAR_14;
  unsigned int VAR_15;
  int VAR_16;
  u_long VAR_17;
  u_long VAR_18;
  u_long VAR_19;
  long VAR_20;



  unsigned char VAR_21;
  int VAR_22 = 0;

  switch (VAR_9)
    {
    case 129:



      VAR_16 = 52;
      VAR_14 = 1023;
      VAR_15 = 2047;
      break;

    case 128:



      VAR_16 = 23;
      VAR_14 = 127;
      VAR_15 = 255;
      break;

    default:
      return VAR_0;
    }

  VAR_21 = FUNC_4(VAR_12, VAR_11, &VAR_22);

  VAR_13 = (VAR_21 & 0x80) != 0;
  VAR_19 = (VAR_21 & 0x7F);

  VAR_21 = FUNC_4(VAR_12, VAR_11, &VAR_22);

  switch (VAR_9)
    {
    case 128:
      VAR_19 <<= 1;
      VAR_19 |= (VAR_21 & 0x80) != 0;

      VAR_18 = 0;

      VAR_17 = (VAR_21 &0x7F) << 16;
      VAR_17 |= (u_long)FUNC_4(VAR_12, VAR_11, &VAR_22) << 8;
      VAR_17 |= FUNC_4(VAR_12, VAR_11, &VAR_22);
      break;

    case 129:
      VAR_19 <<= 4;
      VAR_19 |= (VAR_21 & 0xF0) >> 4;

      VAR_18 = (VAR_21 & 0x0F) << 16;
      VAR_18 |= (u_long)FUNC_4(VAR_12, VAR_11, &VAR_22) << 8;
      VAR_18 |= FUNC_4(VAR_12, VAR_11, &VAR_22);

      VAR_17 = (u_long)FUNC_4(VAR_12, VAR_11, &VAR_22) << 24;
      VAR_17 |= (u_long)FUNC_4(VAR_12, VAR_11, &VAR_22) << 16;
      VAR_17 |= (u_long)FUNC_4(VAR_12, VAR_11, &VAR_22) << 8;
      VAR_17 |= FUNC_4(VAR_12, VAR_11, &VAR_22);
      break;

    default:
      return VAR_0;
    }
  *VAR_8 += VAR_22;




  if (VAR_19 == VAR_15)
    {



      if (VAR_17 || VAR_18)
 {



   return VAR_1;
 }
      else
 {



   return VAR_13 ? VAR_2 : VAR_5;
 }
    }
  else
    {




      FUNC_0(VAR_10);




      VAR_20 = VAR_19 - VAR_14;

      if (VAR_20 > 31)
 {



   return VAR_13 ? VAR_3 : VAR_6;
 }
      else
 {
   int VAR_23;

   VAR_23 = VAR_16 - VAR_20;

   if (VAR_19 == 0)
     {



       return VAR_4;
     }
   else
     {



       if (VAR_16 > 31)
  VAR_18 |= 1 << (VAR_16 - 32);
       else
  VAR_17 |= 1 << VAR_16;





       if (VAR_23 > VAR_16)
  {
    VAR_10->l_ui = 0;
    VAR_23 -= VAR_16 + 1;
    if (VAR_16 > 31)
      {
        VAR_10->l_uf = VAR_18 << (63 - VAR_16);
        VAR_10->l_uf |= VAR_17 >> (VAR_16 - 33);
        VAR_10->l_uf >>= VAR_23;
      }
    else
      {
        VAR_10->l_uf = VAR_17 >> VAR_23;
      }
  }
       else
  {
    if (VAR_23 > 32)
      {



        VAR_10->l_ui = VAR_18 >> (VAR_23 - 32);
        VAR_10->l_uf = (VAR_18 & ((1 << (VAR_23 - 32)) - 1)) << (64 - VAR_23);
        VAR_10->l_uf |= VAR_17 >> (VAR_23 - 32);
      }
    else
      {



        VAR_10->l_ui = VAR_18 << (32 - VAR_23);
        VAR_10->l_ui |= (VAR_17 >> VAR_23) & ((1 << (32 - VAR_23)) - 1);
        VAR_10->l_uf = (VAR_17 & ((1 << VAR_23) - 1)) << (32 - VAR_23);
      }
  }




       if (VAR_13)
  {
    FUNC_1(VAR_10);
  }

       return VAR_4;
     }
 }
    }
}
