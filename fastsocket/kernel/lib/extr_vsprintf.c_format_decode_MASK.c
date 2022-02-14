
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_spec {scalar_t__ type; int field_width; int flags; int precision; int qualifier; int base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 char FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 void* FUNC_2 (char const**) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_27, struct printf_spec *VAR_28)
{
 const char *VAR_29 = VAR_27;


 if (VAR_28->type == VAR_19) {
  if (VAR_28->field_width < 0) {
   VAR_28->field_width = -VAR_28->field_width;
   VAR_28->flags |= VAR_20;
  }
  VAR_28->type = VAR_6;
  goto precision;
 }


 if (VAR_28->type == VAR_9) {
  if (VAR_28->precision < 0)
   VAR_28->precision = 0;

  VAR_28->type = VAR_6;
  goto qualifier;
 }


 VAR_28->type = VAR_6;

 for (; *VAR_27 ; ++VAR_27) {
  if (*VAR_27 == '%')
   break;
 }


 if (VAR_27 != VAR_29 || !*VAR_27)
  return VAR_27 - VAR_29;


 VAR_28->flags = 0;

 while (1) {
  bool VAR_30 = 1;

  ++VAR_27;

  switch (*VAR_27) {
  case '-': VAR_28->flags |= VAR_20; break;
  case '+': VAR_28->flags |= VAR_21; break;
  case ' ': VAR_28->flags |= VAR_24; break;
  case '#': VAR_28->flags |= VAR_25; break;
  case '0': VAR_28->flags |= VAR_26; break;
  default: VAR_30 = 0;
  }

  if (!VAR_30)
   break;
 }


 VAR_28->field_width = -1;

 if (FUNC_1(*VAR_27))
  VAR_28->field_width = FUNC_2(&VAR_27);
 else if (*VAR_27 == '*') {

  VAR_28->type = VAR_19;
  return ++VAR_27 - VAR_29;
 }

precision:

 VAR_28->precision = -1;
 if (*VAR_27 == '.') {
  ++VAR_27;
  if (FUNC_1(*VAR_27)) {
   VAR_28->precision = FUNC_2(&VAR_27);
   if (VAR_28->precision < 0)
    VAR_28->precision = 0;
  } else if (*VAR_27 == '*') {

   VAR_28->type = VAR_9;
   return ++VAR_27 - VAR_29;
  }
 }

qualifier:

 VAR_28->qualifier = -1;
 if (*VAR_27 == 'h' || FUNC_0(*VAR_27) == 'l' ||
     FUNC_0(*VAR_27) == 'z' || *VAR_27 == 't') {
  VAR_28->qualifier = *VAR_27++;
  if (FUNC_3(VAR_28->qualifier == *VAR_27)) {
   if (VAR_28->qualifier == 'l') {
    VAR_28->qualifier = 'L';
    ++VAR_27;
   } else if (VAR_28->qualifier == 'h') {
    VAR_28->qualifier = 'H';
    ++VAR_27;
   }
  }
 }


 VAR_28->base = 10;
 switch (*VAR_27) {
 case 'c':
  VAR_28->type = VAR_1;
  return ++VAR_27 - VAR_29;

 case 's':
  VAR_28->type = VAR_14;
  return ++VAR_27 - VAR_29;

 case 'p':
  VAR_28->type = VAR_10;
  return VAR_27 - VAR_29;


 case 'n':
  VAR_28->type = VAR_7;
  return ++VAR_27 - VAR_29;

 case '%':
  VAR_28->type = VAR_8;
  return ++VAR_27 - VAR_29;


 case 'o':
  VAR_28->base = 8;
  break;

 case 'x':
  VAR_28->flags |= VAR_23;

 case 'X':
  VAR_28->base = 16;
  break;

 case 'd':
 case 'i':
  VAR_28->flags |= VAR_22;
 case 'u':
  break;

 default:
  VAR_28->type = VAR_3;
  return VAR_27 - VAR_29;
 }

 if (VAR_28->qualifier == 'L')
  VAR_28->type = VAR_5;
 else if (VAR_28->qualifier == 'l') {
  if (VAR_28->flags & VAR_22)
   VAR_28->type = VAR_4;
  else
   VAR_28->type = VAR_17;
 } else if (FUNC_0(VAR_28->qualifier) == 'z') {
  VAR_28->type = VAR_13;
 } else if (VAR_28->qualifier == 't') {
  VAR_28->type = VAR_11;
 } else if (VAR_28->qualifier == 'H') {
  if (VAR_28->flags & VAR_22)
   VAR_28->type = VAR_0;
  else
   VAR_28->type = VAR_15;
 } else if (VAR_28->qualifier == 'h') {
  if (VAR_28->flags & VAR_22)
   VAR_28->type = VAR_12;
  else
   VAR_28->type = VAR_18;
 } else {
  if (VAR_28->flags & VAR_22)
   VAR_28->type = VAR_2;
  else
   VAR_28->type = VAR_16;
 }

 return ++VAR_27 - VAR_29;
}
