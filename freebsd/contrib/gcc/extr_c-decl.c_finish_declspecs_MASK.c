
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_declspecs {scalar_t__ type; int typespec_word; int default_int_p; scalar_t__ complex_p; scalar_t__ unsigned_p; scalar_t__ signed_p; scalar_t__ short_p; scalar_t__ long_long_p; scalar_t__ long_p; scalar_t__ explicit_signed_p; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;

struct c_declspecs *
FUNC_4 (struct c_declspecs *VAR_25)
{


  if (VAR_25->type != VAR_0)
    {
      FUNC_1 (!VAR_25->long_p && !VAR_25->long_long_p && !VAR_25->short_p
    && !VAR_25->signed_p && !VAR_25->unsigned_p
    && !VAR_25->complex_p);
      return VAR_25;
    }






  if (VAR_25->typespec_word == VAR_6)
    {
      if (VAR_25->long_p || VAR_25->short_p
   || VAR_25->signed_p || VAR_25->unsigned_p)
 {
   VAR_25->typespec_word = 129;
 }
      else if (VAR_25->complex_p)
 {
   VAR_25->typespec_word = 131;
   if (VAR_18)
     FUNC_3 ("ISO C does not support plain %<complex%> meaning "
       "%<double complex%>");
 }
      else
 {
   VAR_25->typespec_word = 129;
   VAR_25->default_int_p = 1;



 }
    }




  VAR_25->explicit_signed_p = VAR_25->signed_p;


  switch (VAR_25->typespec_word)
    {
    case 128:
      FUNC_1 (!VAR_25->long_p && !VAR_25->short_p
    && !VAR_25->signed_p && !VAR_25->unsigned_p
    && !VAR_25->complex_p);
      VAR_25->type = VAR_24;
      break;
    case 136:
      FUNC_1 (!VAR_25->long_p && !VAR_25->short_p
    && !VAR_25->signed_p && !VAR_25->unsigned_p
    && !VAR_25->complex_p);
      VAR_25->type = VAR_1;
      break;
    case 135:
      FUNC_1 (!VAR_25->long_p && !VAR_25->short_p);
      FUNC_1 (!(VAR_25->signed_p && VAR_25->unsigned_p));
      if (VAR_25->signed_p)
 VAR_25->type = VAR_21;
      else if (VAR_25->unsigned_p)
 VAR_25->type = VAR_22;
      else
 VAR_25->type = VAR_2;
      if (VAR_25->complex_p)
 {
   if (VAR_18)
     FUNC_3 ("ISO C does not support complex integer types");
   VAR_25->type = FUNC_0 (VAR_25->type);
 }
      break;
    case 129:
      FUNC_1 (!(VAR_25->long_p && VAR_25->short_p));
      FUNC_1 (!(VAR_25->signed_p && VAR_25->unsigned_p));
      if (VAR_25->long_long_p)
 VAR_25->type = (VAR_25->unsigned_p
         ? VAR_16
         : VAR_15);
      else if (VAR_25->long_p)
 VAR_25->type = (VAR_25->unsigned_p
         ? VAR_17
         : VAR_14);
      else if (VAR_25->short_p)
 VAR_25->type = (VAR_25->unsigned_p
         ? VAR_20
         : VAR_19);
      else
 VAR_25->type = (VAR_25->unsigned_p
         ? VAR_23
         : VAR_12);
      if (VAR_25->complex_p)
 {
   if (VAR_18)
     FUNC_3 ("ISO C does not support complex integer types");
   VAR_25->type = FUNC_0 (VAR_25->type);
 }
      break;
    case 130:
      FUNC_1 (!VAR_25->long_p && !VAR_25->short_p
    && !VAR_25->signed_p && !VAR_25->unsigned_p);
      VAR_25->type = (VAR_25->complex_p
       ? VAR_4
       : VAR_11);
      break;
    case 131:
      FUNC_1 (!VAR_25->long_long_p && !VAR_25->short_p
    && !VAR_25->signed_p && !VAR_25->unsigned_p);
      if (VAR_25->long_p)
 {
   VAR_25->type = (VAR_25->complex_p
    ? VAR_5
    : VAR_13);
 }
      else
 {
   VAR_25->type = (VAR_25->complex_p
    ? VAR_3
    : VAR_10);
 }
      break;
    case 133:
    case 132:
    case 134:
      FUNC_1 (!VAR_25->long_p && !VAR_25->long_long_p && !VAR_25->short_p
    && !VAR_25->signed_p && !VAR_25->unsigned_p && !VAR_25->complex_p);
      if (VAR_25->typespec_word == 133)
 VAR_25->type = VAR_8;
      else if (VAR_25->typespec_word == 132)
 VAR_25->type = VAR_9;
      else
 VAR_25->type = VAR_7;
      break;
    default:
      FUNC_2 ();
    }

  return VAR_25;
}
