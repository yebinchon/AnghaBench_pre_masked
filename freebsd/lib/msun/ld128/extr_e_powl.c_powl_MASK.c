
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int int32_t ;
struct TYPE_3__ {int mswhi; int mswlo; int lswhi; int lswlo; } ;
struct TYPE_4__ {long double value; TYPE_1__ parts32; } ;
typedef TYPE_2__ ieee_quad_shape_type ;


 long double* VAR_0 ;
 long double* VAR_1 ;
 long double* VAR_2 ;
 long double* VAR_3 ;
 long double* VAR_4 ;
 long double VAR_5 ;
 long double VAR_6 ;
 long double VAR_7 ;
 long double* VAR_8 ;
 long double* VAR_9 ;
 long double FUNC_0 (long double) ;
 long double FUNC_1 (long double) ;
 long double VAR_10 ;
 long double VAR_11 ;
 long double VAR_12 ;
 long double VAR_13 ;
 long double FUNC_2 (long double,long double) ;
 long double VAR_14 ;
 long double VAR_15 ;
 long double FUNC_3 (long double,int) ;
 long double FUNC_4 (long double) ;
 long double VAR_16 ;
 long double VAR_17 ;
 long double VAR_18 ;
 long double VAR_19 ;

long double
FUNC_5(long double VAR_20, long double VAR_21)
{
  long double VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
  long double VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
  long double VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
  int32_t VAR_42, VAR_43, VAR_44, VAR_45, VAR_46;
  u_int32_t VAR_47, VAR_48;
  int32_t VAR_49, VAR_50;
  ieee_quad_shape_type VAR_51, VAR_52, VAR_53;

  VAR_52.value = VAR_20;
  VAR_49 = VAR_52.parts32.mswhi;
  VAR_47 = VAR_49 & 0x7fffffff;

  VAR_53.value = VAR_21;
  VAR_50 = VAR_53.parts32.mswhi;
  VAR_48 = VAR_50 & 0x7fffffff;



  if ((VAR_48 | VAR_53.parts32.mswlo | VAR_53.parts32.lswhi | VAR_53.parts32.lswlo) == 0)
    return VAR_14;


  if (VAR_20 == VAR_14)
    return VAR_14;
  if (VAR_20 == -1.0L && VAR_48 == 0x7fff0000
      && (VAR_53.parts32.mswlo | VAR_53.parts32.lswhi | VAR_53.parts32.lswlo) == 0)
    return VAR_14;


  if ((VAR_47 > 0x7fff0000)
      || ((VAR_47 == 0x7fff0000)
   && ((VAR_52.parts32.mswlo | VAR_52.parts32.lswhi | VAR_52.parts32.lswlo) != 0))
      || (VAR_48 > 0x7fff0000)
      || ((VAR_48 == 0x7fff0000)
   && ((VAR_53.parts32.mswlo | VAR_53.parts32.lswhi | VAR_53.parts32.lswlo) != 0)))
    return FUNC_2(VAR_20, VAR_21);






  VAR_45 = 0;
  if (VAR_49 < 0)
    {
      if (VAR_48 >= 0x40700000)
 VAR_45 = 2;
      else if (VAR_48 >= 0x3fff0000)
 {
   if (FUNC_1 (VAR_21) == VAR_21)
     {
       VAR_22 = 0.5 * VAR_21;
       if (FUNC_1 (VAR_22) == VAR_22)
  VAR_45 = 2;
       else
  VAR_45 = 1;
     }
 }
    }


  if ((VAR_53.parts32.mswlo | VAR_53.parts32.lswhi | VAR_53.parts32.lswlo) == 0)
    {
      if (VAR_48 == 0x7fff0000)
 {
   if (((VAR_47 - 0x3fff0000) | VAR_52.parts32.mswlo | VAR_52.parts32.lswhi |
     VAR_52.parts32.lswlo) == 0)
     return VAR_21 - VAR_21;
   else if (VAR_47 >= 0x3fff0000)
     return (VAR_50 >= 0) ? VAR_21 : VAR_19;
   else
     return (VAR_50 < 0) ? -VAR_21 : VAR_19;
 }
      if (VAR_48 == 0x3fff0000)
 {
   if (VAR_50 < 0)
     return VAR_14 / VAR_20;
   else
     return VAR_20;
 }
      if (VAR_50 == 0x40000000)
 return VAR_20 * VAR_20;
      if (VAR_50 == 0x3ffe0000)
 {
   if (VAR_49 >= 0)
     return FUNC_4 (VAR_20);
 }
    }

  VAR_23 = FUNC_0 (VAR_20);

  if ((VAR_52.parts32.mswlo | VAR_52.parts32.lswhi | VAR_52.parts32.lswlo) == 0)
    {
      if (VAR_47 == 0x7fff0000 || VAR_47 == 0 || VAR_47 == 0x3fff0000)
 {
   VAR_22 = VAR_23;
   if (VAR_50 < 0)
     VAR_22 = VAR_14 / VAR_22;
   if (VAR_49 < 0)
     {
       if (((VAR_47 - 0x3fff0000) | VAR_45) == 0)
  {
    VAR_22 = (VAR_22 - VAR_22) / (VAR_22 - VAR_22);
  }
       else if (VAR_45 == 1)
  VAR_22 = -VAR_22;
     }
   return VAR_22;
 }
    }


  if (((((u_int32_t) VAR_49 >> 31) - 1) | VAR_45) == 0)
    return (VAR_20 - VAR_20) / (VAR_20 - VAR_20);




  if (VAR_48 > 0x401d654b)
    {

      if (VAR_48 > 0x407d654b)
 {
   if (VAR_47 <= 0x3ffeffff)
     return (VAR_50 < 0) ? VAR_10 * VAR_10 : VAR_16 * VAR_16;
   if (VAR_47 >= 0x3fff0000)
     return (VAR_50 > 0) ? VAR_10 * VAR_10 : VAR_16 * VAR_16;
 }

      if (VAR_47 < 0x3ffeffff)
 return (VAR_50 < 0) ? VAR_10 * VAR_10 : VAR_16 * VAR_16;
      if (VAR_47 > 0x3fff0000)
 return (VAR_50 > 0) ? VAR_10 * VAR_10 : VAR_16 * VAR_16;
    }

  VAR_46 = 0;

  if (VAR_47 < 0x00010000)
    {
      VAR_23 *= VAR_18;
      VAR_46 -= 113;
      VAR_51.value = VAR_23;
      VAR_47 = VAR_51.parts32.mswhi;
    }
  VAR_46 += ((VAR_47) >> 16) - 0x3fff;
  VAR_43 = VAR_47 & 0x0000ffff;

  VAR_47 = VAR_43 | 0x3fff0000;
  if (VAR_43 <= 0x3988)
    VAR_44 = 0;
  else if (VAR_43 < 0xbb67)
    VAR_44 = 1;
  else
    {
      VAR_44 = 0;
      VAR_46 += 1;
      VAR_47 -= 0x00010000;
    }

  VAR_51.value = VAR_23;
  VAR_51.parts32.mswhi = VAR_47;
  VAR_23 = VAR_51.value;


  VAR_34 = VAR_23 - VAR_4[VAR_44];
  VAR_35 = VAR_14 / (VAR_23 + VAR_4[VAR_44]);
  VAR_32 = VAR_34 * VAR_35;
  VAR_38 = VAR_32;

  VAR_51.value = VAR_38;
  VAR_51.parts32.lswlo = 0;
  VAR_51.parts32.lswhi &= 0xf8000000;
  VAR_38 = VAR_51.value;

  VAR_40 = VAR_23 + VAR_4[VAR_44];
  VAR_51.value = VAR_40;
  VAR_51.parts32.lswlo = 0;
  VAR_51.parts32.lswhi &= 0xf8000000;
  VAR_40 = VAR_51.value;
  VAR_41 = VAR_23 - (VAR_40 - VAR_4[VAR_44]);
  VAR_39 = VAR_35 * ((VAR_34 - VAR_38 * VAR_40) - VAR_38 * VAR_41);

  VAR_37 = VAR_32 * VAR_32;
  VAR_34 = VAR_1[0] + VAR_37 * (VAR_1[1] + VAR_37 * (VAR_1[2] + VAR_37 * (VAR_1[3] + VAR_37 * VAR_1[4])));
  VAR_35 = VAR_0[0] + VAR_37 * (VAR_0[1] + VAR_37 * (VAR_0[2] + VAR_37 * (VAR_0[3] + VAR_37 * (VAR_0[4] + VAR_37))));
  VAR_31 = VAR_37 * VAR_37 * VAR_34 / VAR_35;
  VAR_31 += VAR_39 * (VAR_38 + VAR_32);
  VAR_37 = VAR_38 * VAR_38;
  VAR_40 = 3.0 + VAR_37 + VAR_31;
  VAR_51.value = VAR_40;
  VAR_51.parts32.lswlo = 0;
  VAR_51.parts32.lswhi &= 0xf8000000;
  VAR_40 = VAR_51.value;
  VAR_41 = VAR_31 - ((VAR_40 - 3.0) - VAR_37);

  VAR_34 = VAR_38 * VAR_40;
  VAR_35 = VAR_39 * VAR_40 + VAR_41 * VAR_32;

  VAR_26 = VAR_34 + VAR_35;
  VAR_51.value = VAR_26;
  VAR_51.parts32.lswlo = 0;
  VAR_51.parts32.lswhi &= 0xf8000000;
  VAR_26 = VAR_51.value;
  VAR_27 = VAR_35 - (VAR_26 - VAR_34);
  VAR_24 = VAR_6 * VAR_26;
  VAR_25 = VAR_7 * VAR_26 + VAR_27 * VAR_5 + VAR_9[VAR_44];

  VAR_33 = (long double) VAR_46;
  VAR_29 = (((VAR_24 + VAR_25) + VAR_8[VAR_44]) + VAR_33);
  VAR_51.value = VAR_29;
  VAR_51.parts32.lswlo = 0;
  VAR_51.parts32.lswhi &= 0xf8000000;
  VAR_29 = VAR_51.value;
  VAR_30 = VAR_25 - (((VAR_29 - VAR_33) - VAR_8[VAR_44]) - VAR_24);


  VAR_32 = VAR_14;
  if (((((u_int32_t) VAR_49 >> 31) - 1) | (VAR_45 - 1)) == 0)
    VAR_32 = -VAR_14;


  VAR_28 = VAR_21;
  VAR_51.value = VAR_28;
  VAR_51.parts32.lswlo = 0;
  VAR_51.parts32.lswhi &= 0xf8000000;
  VAR_28 = VAR_51.value;
  VAR_27 = (VAR_21 - VAR_28) * VAR_29 + VAR_21 * VAR_30;
  VAR_26 = VAR_28 * VAR_29;
  VAR_22 = VAR_27 + VAR_26;
  VAR_51.value = VAR_22;
  VAR_43 = VAR_51.parts32.mswhi;
  if (VAR_43 >= 0x400d0000)
    {

      if (((VAR_43 - 0x400d0000) | VAR_51.parts32.mswlo | VAR_51.parts32.lswhi |
 VAR_51.parts32.lswlo) != 0)
 return VAR_32 * VAR_10 * VAR_10;
      else
 {
   if (VAR_27 + VAR_15 > VAR_22 - VAR_26)
     return VAR_32 * VAR_10 * VAR_10;
 }
    }
  else if ((VAR_43 & 0x7fffffff) >= 0x400d01b9)
    {

      if (((VAR_43 - 0xc00d01bc) | VAR_51.parts32.mswlo | VAR_51.parts32.lswhi |
 VAR_51.parts32.lswlo)
   != 0)
 return VAR_32 * VAR_16 * VAR_16;
      else
 {
   if (VAR_27 <= VAR_22 - VAR_26)
     return VAR_32 * VAR_16 * VAR_16;
 }
    }

  VAR_42 = VAR_43 & 0x7fffffff;
  VAR_44 = (VAR_42 >> 16) - 0x3fff;
  VAR_46 = 0;
  if (VAR_42 > 0x3ffe0000)
    {
      VAR_46 = FUNC_1 (VAR_22 + 0.5L);
      VAR_33 = VAR_46;
      VAR_26 -= VAR_33;
    }
  VAR_33 = VAR_27 + VAR_26;
  VAR_51.value = VAR_33;
  VAR_51.parts32.lswlo = 0;
  VAR_51.parts32.lswhi &= 0xf8000000;
  VAR_33 = VAR_51.value;
  VAR_34 = VAR_33 * VAR_12;
  VAR_35 = (VAR_27 - (VAR_33 - VAR_26)) * VAR_11 + VAR_33 * VAR_13;
  VAR_22 = VAR_34 + VAR_35;
  VAR_36 = VAR_35 - (VAR_22 - VAR_34);

  VAR_33 = VAR_22 * VAR_22;
  VAR_34 = VAR_3[0] + VAR_33 * (VAR_3[1] + VAR_33 * (VAR_3[2] + VAR_33 * (VAR_3[3] + VAR_33 * VAR_3[4])));
  VAR_35 = VAR_2[0] + VAR_33 * (VAR_2[1] + VAR_33 * (VAR_2[2] + VAR_33 * (VAR_2[3] + VAR_33)));
  VAR_29 = VAR_22 - VAR_33 * VAR_34 / VAR_35;
  VAR_31 = (VAR_22 * VAR_29) / (VAR_29 - VAR_17) - (VAR_36 + VAR_22 * VAR_36);
  VAR_22 = VAR_14 - (VAR_31 - VAR_22);
  VAR_51.value = VAR_22;
  VAR_43 = VAR_51.parts32.mswhi;
  VAR_43 += (VAR_46 << 16);
  if ((VAR_43 >> 16) <= 0)
    VAR_22 = FUNC_3 (VAR_22, VAR_46);
  else
    {
      VAR_51.parts32.mswhi = VAR_43;
      VAR_22 = VAR_51.value;
    }
  return VAR_32 * VAR_22;
}
