
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct vax_double {int mantissa4; int mantissa3; int mantissa2; int mantissa1; void* exp; int sign; } ;
struct ieee_double {void* exp; int mantissa1; int mantissa2; int sign; } ;
struct dbl_limits {struct vax_double d; struct ieee_double ieee; } ;
typedef int int32_t ;
typedef int bool_t ;
struct TYPE_5__ {int x_op; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 void* VAR_3 ;



 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 struct dbl_limits* VAR_4 ;
 int FUNC_3 (struct dbl_limits*) ;

bool_t
FUNC_4(XDR *VAR_5, double *VAR_6)
{




 int32_t *VAR_7;
 struct ieee_double VAR_8;
 struct vax_double VAR_9;
 struct dbl_limits *VAR_10;
 u_int VAR_11;


 switch (VAR_5->x_op) {

 case 129:
  VAR_9 = *((struct vax_double *)VAR_6);
  for (VAR_11 = 0, VAR_10 = VAR_4; VAR_11 < FUNC_3(VAR_4);
      VAR_11++, VAR_10++) {
   if ((VAR_9.mantissa4 == VAR_10->d.mantissa4) &&
    (VAR_9.mantissa3 == VAR_10->d.mantissa3) &&
    (VAR_9.mantissa2 == VAR_10->d.mantissa2) &&
    (VAR_9.mantissa1 == VAR_10->d.mantissa1) &&
    (VAR_9.exp == VAR_10->d.exp)) {
    VAR_8 = VAR_10->ieee;
    goto shipit;
   }
  }
  VAR_8.exp = VAR_9.exp - VAR_3 + VAR_1;
  VAR_8.mantissa1 = (VAR_9.mantissa1 << 13) | (VAR_9.mantissa2 >> 3);
  VAR_8.mantissa2 = ((VAR_9.mantissa2 & FUNC_0(3)) << 29) |
    (VAR_9.mantissa3 << 13) |
    ((VAR_9.mantissa4 >> 3) & FUNC_0(13));
 shipit:
  VAR_8.sign = VAR_9.sign;
  VAR_7 = (int32_t *)&VAR_8;
  return (FUNC_2(VAR_5, VAR_7++) && FUNC_2(VAR_5, VAR_7));


 case 130:
  VAR_7 = (int32_t *)&VAR_8;
  if (!FUNC_1(VAR_5, VAR_7++) || !FUNC_1(VAR_5, VAR_7))
   return (VAR_0);
  for (VAR_11 = 0, VAR_10 = VAR_4; VAR_11 < FUNC_3(VAR_4);
      VAR_11++, VAR_10++) {
   if ((VAR_8.mantissa2 == VAR_10->ieee.mantissa2) &&
    (VAR_8.mantissa1 == VAR_10->ieee.mantissa1) &&
    (VAR_8.exp == VAR_10->ieee.exp)) {
    VAR_9 = VAR_10->d;
    goto doneit;
   }
  }
  VAR_9.exp = VAR_8.exp - VAR_1 + VAR_3;
  VAR_9.mantissa1 = (VAR_8.mantissa1 >> 13);
  VAR_9.mantissa2 = ((VAR_8.mantissa1 & FUNC_0(13)) << 3) |
    (VAR_8.mantissa2 >> 29);
  VAR_9.mantissa3 = (VAR_8.mantissa2 >> 13);
  VAR_9.mantissa4 = (VAR_8.mantissa2 << 3);
 doneit:
  VAR_9.sign = VAR_8.sign;
  *VAR_6 = *((double *)&VAR_9);
  return (VAR_2);


 case 128:
  return (VAR_2);
 }

 return (VAR_0);
}
