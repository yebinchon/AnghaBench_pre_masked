
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char const* tree ;
struct c_typespec {char* spec; scalar_t__ kind; } ;
struct c_declspecs {int non_sc_seen_p; int declspecs_seen_p; int type_seen_p; int deprecated_p; int unavailable_p; char const* type; int long_long_p; int long_p; scalar_t__ typespec_word; int short_p; int signed_p; int unsigned_p; int complex_p; int typedef_p; int tag_defined_p; int explicit_signed_p; int decl_attr; } ;
typedef enum rid { ____Placeholder_rid } rid ;
struct TYPE_2__ {int (* decimal_float_supported_p ) () ;} ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;





 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
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
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_9 () ;
 int VAR_19 ;
 char* FUNC_10 (char const*) ;
 int VAR_20 ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 TYPE_1__ VAR_21 ;
 int VAR_22 ;

struct c_declspecs *
FUNC_13 (struct c_declspecs *VAR_23, struct c_typespec VAR_24)
{
  tree VAR_25 = VAR_24.spec;
  VAR_23->non_sc_seen_p = 1;
  VAR_23->declspecs_seen_p = 1;
  VAR_23->type_seen_p = 1;
  if (FUNC_5 (VAR_25))
    VAR_23->deprecated_p = 1;


  if (FUNC_7 (VAR_25))
    VAR_23->unavailable_p = 1;



  if (FUNC_4 (VAR_25) == VAR_1 && FUNC_0 (VAR_25))
    {
      enum rid VAR_26 = FUNC_1 (VAR_25);
      if (VAR_23->type)
 {
   FUNC_8 ("two or more data types in declaration specifiers");
   return VAR_23;
 }
      if ((int) VAR_26 <= (int) VAR_2)
 {

   bool VAR_27 = 0;
   switch (VAR_26)
     {
     case 132:
       if (VAR_23->long_long_p)
  {
    FUNC_8 ("%<long long long%> is too long for GCC");
    break;
  }
       if (VAR_23->long_p)
  {
    if (VAR_23->typespec_word == VAR_9)
      {
        FUNC_8 ("both %<long long%> and %<double%> in "
        "declaration specifiers");
        break;
      }
    if (VAR_20 && !VAR_18 && !VAR_19
        && VAR_22)
      FUNC_11 ("ISO C90 does not support %<long long%>");
    VAR_23->long_long_p = 1;
    break;
  }
       if (VAR_23->short_p)
  FUNC_8 ("both %<long%> and %<short%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_13)
  FUNC_8 ("both %<long%> and %<void%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_4)
  FUNC_8 ("both %<long%> and %<_Bool%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_5)
  FUNC_8 ("both %<long%> and %<char%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_10)
  FUNC_8 ("both %<long%> and %<float%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_7)
  FUNC_8 ("both %<long%> and %<_Decimal32%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_8)
  FUNC_8 ("both %<long%> and %<_Decimal64%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_6)
  FUNC_8 ("both %<long%> and %<_Decimal128%> in "
         "declaration specifiers");
       else
  VAR_23->long_p = 1;
       break;
     case 131:
       VAR_27 = VAR_23->short_p;
       if (VAR_23->long_p)
  FUNC_8 ("both %<long%> and %<short%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_13)
  FUNC_8 ("both %<short%> and %<void%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_4)
  FUNC_8 ("both %<short%> and %<_Bool%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_5)
  FUNC_8 ("both %<short%> and %<char%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_10)
  FUNC_8 ("both %<short%> and %<float%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_9)
  FUNC_8 ("both %<short%> and %<double%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_7)
                FUNC_8 ("both %<short%> and %<_Decimal32%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_8)
  FUNC_8 ("both %<short%> and %<_Decimal64%> in "
                          "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_6)
  FUNC_8 ("both %<short%> and %<_Decimal128%> in "
         "declaration specifiers");
       else
  VAR_23->short_p = 1;
       break;
     case 130:
       VAR_27 = VAR_23->signed_p;
       if (VAR_23->unsigned_p)
  FUNC_8 ("both %<signed%> and %<unsigned%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_13)
  FUNC_8 ("both %<signed%> and %<void%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_4)
  FUNC_8 ("both %<signed%> and %<_Bool%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_10)
  FUNC_8 ("both %<signed%> and %<float%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_9)
  FUNC_8 ("both %<signed%> and %<double%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_7)
  FUNC_8 ("both %<signed%> and %<_Decimal32%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_8)
  FUNC_8 ("both %<signed%> and %<_Decimal64%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_6)
  FUNC_8 ("both %<signed%> and %<_Decimal128%> in "
         "declaration specifiers");
       else
  VAR_23->signed_p = 1;
       break;
     case 129:
       VAR_27 = VAR_23->unsigned_p;
       if (VAR_23->signed_p)
  FUNC_8 ("both %<signed%> and %<unsigned%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_13)
  FUNC_8 ("both %<unsigned%> and %<void%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_4)
  FUNC_8 ("both %<unsigned%> and %<_Bool%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_10)
  FUNC_8 ("both %<unsigned%> and %<float%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_9)
  FUNC_8 ("both %<unsigned%> and %<double%> in "
         "declaration specifiers");
              else if (VAR_23->typespec_word == VAR_7)
  FUNC_8 ("both %<unsigned%> and %<_Decimal32%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_8)
  FUNC_8 ("both %<unsigned%> and %<_Decimal64%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_6)
  FUNC_8 ("both %<unsigned%> and %<_Decimal128%> in "
         "declaration specifiers");
       else
  VAR_23->unsigned_p = 1;
       break;
     case 139:
       VAR_27 = VAR_23->complex_p;
       if (VAR_20 && !VAR_18 && !VAR_19)
  FUNC_11 ("ISO C90 does not support complex types");
       if (VAR_23->typespec_word == VAR_13)
  FUNC_8 ("both %<complex%> and %<void%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_4)
  FUNC_8 ("both %<complex%> and %<_Bool%> in "
         "declaration specifiers");
              else if (VAR_23->typespec_word == VAR_7)
  FUNC_8 ("both %<complex%> and %<_Decimal32%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_8)
  FUNC_8 ("both %<complex%> and %<_Decimal64%> in "
         "declaration specifiers");
       else if (VAR_23->typespec_word == VAR_6)
  FUNC_8 ("both %<complex%> and %<_Decimal128%> in "
         "declaration specifiers");
       else
  VAR_23->complex_p = 1;
       break;
     default:
       FUNC_9 ();
     }

   if (VAR_27)
     FUNC_8 ("duplicate %qE", VAR_25);

   return VAR_23;
 }
      else
 {

   if (VAR_23->typespec_word != VAR_12)
     {
       FUNC_8 ("two or more data types in declaration specifiers");
       return VAR_23;
     }
   switch (VAR_26)
     {
     case 128:
       if (VAR_23->long_p)
  FUNC_8 ("both %<long%> and %<void%> in "
         "declaration specifiers");
       else if (VAR_23->short_p)
  FUNC_8 ("both %<short%> and %<void%> in "
         "declaration specifiers");
       else if (VAR_23->signed_p)
  FUNC_8 ("both %<signed%> and %<void%> in "
         "declaration specifiers");
       else if (VAR_23->unsigned_p)
  FUNC_8 ("both %<unsigned%> and %<void%> in "
         "declaration specifiers");
       else if (VAR_23->complex_p)
  FUNC_8 ("both %<complex%> and %<void%> in "
         "declaration specifiers");
       else
  VAR_23->typespec_word = VAR_13;
       return VAR_23;
     case 141:
       if (VAR_23->long_p)
  FUNC_8 ("both %<long%> and %<_Bool%> in "
         "declaration specifiers");
       else if (VAR_23->short_p)
  FUNC_8 ("both %<short%> and %<_Bool%> in "
         "declaration specifiers");
       else if (VAR_23->signed_p)
  FUNC_8 ("both %<signed%> and %<_Bool%> in "
         "declaration specifiers");
       else if (VAR_23->unsigned_p)
  FUNC_8 ("both %<unsigned%> and %<_Bool%> in "
         "declaration specifiers");
       else if (VAR_23->complex_p)
  FUNC_8 ("both %<complex%> and %<_Bool%> in "
         "declaration specifiers");
       else
  VAR_23->typespec_word = VAR_4;
       return VAR_23;
     case 140:
       if (VAR_23->long_p)
  FUNC_8 ("both %<long%> and %<char%> in "
         "declaration specifiers");
       else if (VAR_23->short_p)
  FUNC_8 ("both %<short%> and %<char%> in "
         "declaration specifiers");
       else
  VAR_23->typespec_word = VAR_5;
       return VAR_23;
     case 133:
       VAR_23->typespec_word = VAR_11;
       return VAR_23;
     case 134:
       if (VAR_23->long_p)
  FUNC_8 ("both %<long%> and %<float%> in "
         "declaration specifiers");
       else if (VAR_23->short_p)
  FUNC_8 ("both %<short%> and %<float%> in "
         "declaration specifiers");
       else if (VAR_23->signed_p)
  FUNC_8 ("both %<signed%> and %<float%> in "
         "declaration specifiers");
       else if (VAR_23->unsigned_p)
  FUNC_8 ("both %<unsigned%> and %<float%> in "
         "declaration specifiers");
       else
  VAR_23->typespec_word = VAR_10;
       return VAR_23;
     case 135:
       if (VAR_23->long_long_p)
  FUNC_8 ("both %<long long%> and %<double%> in "
         "declaration specifiers");
       else if (VAR_23->short_p)
  FUNC_8 ("both %<short%> and %<double%> in "
         "declaration specifiers");
       else if (VAR_23->signed_p)
  FUNC_8 ("both %<signed%> and %<double%> in "
         "declaration specifiers");
       else if (VAR_23->unsigned_p)
  FUNC_8 ("both %<unsigned%> and %<double%> in "
         "declaration specifiers");
       else
  VAR_23->typespec_word = VAR_9;
       return VAR_23;
     case 137:
     case 136:
     case 138:
       {
  const char *VAR_28;
  if (VAR_26 == 137)
    VAR_28 = "_Decimal32";
  else if (VAR_26 == 136)
    VAR_28 = "_Decimal64";
  else
    VAR_28 = "_Decimal128";
  if (VAR_23->long_long_p)
    FUNC_8 ("both %<long long%> and %<%s%> in "
    "declaration specifiers", VAR_28);
  if (VAR_23->long_p)
    FUNC_8 ("both %<long%> and %<%s%> in "
    "declaration specifiers", VAR_28);
  else if (VAR_23->short_p)
    FUNC_8 ("both %<short%> and %<%s%> in "
    "declaration specifiers", VAR_28);
  else if (VAR_23->signed_p)
    FUNC_8 ("both %<signed%> and %<%s%> in "
    "declaration specifiers", VAR_28);
  else if (VAR_23->unsigned_p)
    FUNC_8 ("both %<unsigned%> and %<%s%> in "
    "declaration specifiers", VAR_28);
                else if (VAR_23->complex_p)
                  FUNC_8 ("both %<complex%> and %<%s%> in "
                         "declaration specifiers", VAR_28);
  else if (VAR_26 == 137)
    VAR_23->typespec_word = VAR_7;
  else if (VAR_26 == 136)
    VAR_23->typespec_word = VAR_8;
  else
    VAR_23->typespec_word = VAR_6;
       }
       if (!VAR_21.decimal_float_supported_p ())
  FUNC_8 ("decimal floating point not supported for this target");
       if (VAR_20)
  FUNC_11 ("ISO C does not support decimal floating point");
       return VAR_23;
     default:

       break;
     }
 }
    }






  if (VAR_23->type || VAR_23->typespec_word != VAR_12
      || VAR_23->long_p || VAR_23->short_p || VAR_23->signed_p
      || VAR_23->unsigned_p || VAR_23->complex_p)
    FUNC_8 ("two or more data types in declaration specifiers");
  else if (FUNC_4 (VAR_25) == VAR_3)
    {
      if (FUNC_6 (VAR_25) == VAR_17)
 ;
      else
 {
   VAR_23->type = FUNC_6 (VAR_25);
   VAR_23->decl_attr = FUNC_3 (VAR_25);
   VAR_23->typedef_p = 1;
   VAR_23->explicit_signed_p = FUNC_2 (VAR_25);
 }
    }
  else if (FUNC_4 (VAR_25) == VAR_1)
    {
      tree VAR_29 = FUNC_10 (VAR_25);
      if (!VAR_29 || FUNC_4 (VAR_29) != VAR_3)
 FUNC_8 ("%qE fails to be a typedef or built in type", VAR_25);
      else if (FUNC_6 (VAR_29) == VAR_17)
 ;
      else
 VAR_23->type = FUNC_6 (VAR_29);
    }
  else if (FUNC_4 (VAR_25) != VAR_0)
    {
      if (VAR_24.kind == VAR_14 || VAR_24.kind == VAR_15)
 VAR_23->tag_defined_p = 1;
      if (VAR_24.kind == VAR_16)
 VAR_23->typedef_p = 1;
      VAR_23->type = VAR_25;
    }

  return VAR_23;
}
