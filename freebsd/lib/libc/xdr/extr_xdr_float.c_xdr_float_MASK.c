
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct vax_single {int mantissa2; void* exp; int mantissa1; int sign; } ;
struct ieee_single {void* exp; int mantissa; int sign; } ;
struct sgl_limits {struct vax_single s; struct ieee_single ieee; } ;
typedef int int32_t ;
typedef int bool_t ;
struct TYPE_5__ {int x_op; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;



 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (struct sgl_limits*) ;
 struct sgl_limits* VAR_4 ;

bool_t
FUNC_3(XDR *VAR_5, float *VAR_6)
{

 struct ieee_single VAR_7;
 struct vax_single VAR_8, *VAR_9;
 struct sgl_limits *VAR_10;
 u_int VAR_11;

 switch (VAR_5->x_op) {

 case 129:



  VAR_8 = *((struct vax_single *)VAR_6);
  for (VAR_11 = 0, VAR_10 = VAR_4; VAR_11 < FUNC_2(VAR_4);
      VAR_11++, VAR_10++) {
   if ((VAR_8.mantissa2 == VAR_10->s.mantissa2) &&
    (VAR_8.exp == VAR_10->s.exp) &&
    (VAR_8.mantissa1 == VAR_10->s.mantissa1)) {
    VAR_7 = VAR_10->ieee;
    goto shipit;
   }
  }
  VAR_7.exp = VAR_8.exp - VAR_3 + VAR_1;
  VAR_7.mantissa = (VAR_8.mantissa1 << 16) | VAR_8.mantissa2;
 shipit:
  VAR_7.sign = VAR_8.sign;
  return (FUNC_1(VAR_5, (int32_t *)&VAR_7));


 case 130:



  VAR_9 = (struct vax_single *)VAR_6;
  if (!FUNC_0(VAR_5, (int32_t *)&VAR_7))
   return (VAR_0);
  for (VAR_11 = 0, VAR_10 = VAR_4; VAR_11 < FUNC_2(VAR_4);
      VAR_11++, VAR_10++) {
   if ((VAR_7.exp == VAR_10->ieee.exp) &&
    (VAR_7.mantissa == VAR_10->ieee.mantissa)) {
    *VAR_9 = VAR_10->s;
    goto doneit;
   }
  }
  VAR_9->exp = VAR_7.exp - VAR_1 + VAR_3;
  VAR_9->mantissa2 = VAR_7.mantissa;
  VAR_9->mantissa1 = (VAR_7.mantissa >> 16);
 doneit:
  VAR_9->sign = VAR_7.sign;
  return (VAR_2);


 case 128:
  return (VAR_2);
 }

 return (VAR_0);
}
