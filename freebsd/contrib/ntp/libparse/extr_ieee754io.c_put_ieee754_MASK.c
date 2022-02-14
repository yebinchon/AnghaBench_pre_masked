
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
typedef int offsets_t ;
struct TYPE_6__ {int l_ui; unsigned long l_uf; } ;
typedef TYPE_1__ l_fp ;


 int VAR_0 ;

 int VAR_1 ;

 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 char* FUNC_3 (unsigned int,int,int,int) ;
 int FUNC_4 (char*,char*) ;

int
FUNC_5(
     unsigned char **VAR_3,
     int VAR_4,
     l_fp *VAR_5,
     offsets_t VAR_6
     )
{
  l_fp VAR_7;





  int VAR_8;
  int VAR_9;
  u_long VAR_10 = 0;
  u_long VAR_11 = 0;





  unsigned long VAR_12;

  VAR_7 = *VAR_5;

  switch (VAR_4)
    {
    case 129:

      VAR_8 = 52;




      break;

    case 128:

      VAR_8 = 23;




      break;

    default:
      return VAR_0;
    }




  if (FUNC_0(&VAR_7))
    {
      FUNC_2(&VAR_7);



    }
  else
    {



    }

  if (FUNC_1(&VAR_7))
    {



    }
  else
    {



      VAR_12 = 0x80000000;
      if (VAR_7.l_ui)
 {
   VAR_9 = 63;
   while (VAR_12 && ((VAR_7.l_ui & VAR_12) == 0))
     {
       VAR_12 >>= 1;
       VAR_9--;
     }
 }
      else
 {
   VAR_9 = 31;
   while (VAR_12 && ((VAR_7.l_uf & VAR_12) == 0))
     {
       VAR_12 >>= 1;
       VAR_9--;
     }
 }

      switch (VAR_4)
 {
 case 128:
   VAR_11 = 0;
   if (VAR_9 >= 32)
     {
       VAR_10 = (VAR_7.l_ui & ((1 << (VAR_9 - 32)) - 1)) << (VAR_8 - (VAR_9 - 32));
       VAR_10 |= VAR_7.l_uf >> (VAR_8 - (VAR_9 - 32));
     }
   else
     {
       VAR_10 = (VAR_7.l_uf << (VAR_8 - VAR_9)) & ((1 << VAR_8) - 1);
     }
   break;

 case 129:
   if (VAR_9 >= 32)
     {
       VAR_11 = (VAR_7.l_ui << (VAR_8 - VAR_9)) & ((1 << (VAR_8 - 32)) - 1);
       VAR_11 |= VAR_7.l_uf >> (32 - (VAR_8 - VAR_9));
       VAR_10 = (VAR_7.l_ui & ((1 << (VAR_9 - VAR_8)) - 1)) << (32 - (VAR_9 - VAR_8));
       VAR_10 |= VAR_7.l_uf >> (VAR_9 - VAR_8);
     }
   else
     {
       VAR_11 = VAR_7.l_uf << (VAR_8 - 32 - VAR_9);
       VAR_10 = VAR_7.l_uf << (VAR_8 - 32);
     }
 }
    }
  return VAR_1;
}
