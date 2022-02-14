
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dw_t ;
typedef int ds_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int ) ;

ds_t
FUNC_3 (ds_t VAR_7, ds_t VAR_8)
{
  ds_t VAR_9, VAR_10;

  FUNC_0 ((VAR_7 & VAR_5) && (VAR_8 & VAR_5));

  VAR_9 = (VAR_7 & VAR_0) | (VAR_8 & VAR_0);

  VAR_10 = VAR_1;
  do
    {
      if ((VAR_7 & VAR_10) && !(VAR_8 & VAR_10))
 VAR_9 |= VAR_7 & VAR_10;
      else if (!(VAR_7 & VAR_10) && (VAR_8 & VAR_10))
 VAR_9 |= VAR_8 & VAR_10;
      else if ((VAR_7 & VAR_10) && (VAR_8 & VAR_10))
 {
   ds_t VAR_11;

   VAR_11 = ((ds_t) FUNC_1 (VAR_7, VAR_10)) * ((ds_t) FUNC_1 (VAR_8, VAR_10));
   VAR_11 /= VAR_3;
   if (VAR_11 < VAR_4)
     VAR_11 = VAR_4;

   VAR_9 = FUNC_2 (VAR_9, VAR_10, (dw_t) VAR_11);
 }

      if (VAR_10 == VAR_2)
 break;
      VAR_10 <<= VAR_6;
    }
  while (1);

  return VAR_9;
}
