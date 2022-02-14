
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
 int FUNC_0 (int) ;
 int FUNC_1 () ;

dw_t
FUNC_2 (ds_t VAR_6, ds_t VAR_7)
{
  VAR_6 = VAR_6 & VAR_7;
  switch (VAR_7)
    {
    case 130: VAR_6 >>= VAR_1; break;
    case 128: VAR_6 >>= VAR_3; break;
    case 131: VAR_6 >>= VAR_0; break;
    case 129: VAR_6 >>= VAR_2; break;
    default: FUNC_1 ();
    }

  FUNC_0 (VAR_5 <= VAR_6 && VAR_6 <= VAR_4);
  return (dw_t) VAR_6;
}
