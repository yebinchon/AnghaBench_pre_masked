
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char uchar ;
struct TYPE_5__ {char* text; int len; } ;
struct TYPE_6__ {TYPE_1__ str; } ;
struct TYPE_7__ {TYPE_2__ val; } ;
typedef TYPE_3__ cpp_token ;
typedef int cpp_reader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,unsigned int) ;
 int VAR_17 ;
 int FUNC_7 (int *,int ,char*,...) ;
 int FUNC_8 (int *) ;
 unsigned int FUNC_9 (unsigned int) ;
 unsigned int FUNC_10 (char const*,int) ;
 unsigned int FUNC_11 (char const*,int) ;
 int VAR_18 ;

unsigned int
FUNC_12 (cpp_reader *VAR_19, const cpp_token *VAR_20)
{
  const uchar *VAR_21 = VAR_20->val.str.text;
  const uchar *VAR_22;
  unsigned int VAR_23, VAR_24, VAR_25;
  enum {NOT_FLOAT = 0, AFTER_POINT, AFTER_EXPON} VAR_26;



  if (VAR_20->val.str.len == 1)
    return VAR_9 | VAR_14 | VAR_4;

  VAR_22 = VAR_21 + VAR_20->val.str.len;
  VAR_26 = NOT_FLOAT;
  VAR_23 = 0;
  VAR_25 = 10;


  if (*VAR_21 == '0')
    {
      VAR_25 = 8;
      VAR_21++;


      if ((*VAR_21 == 'x' || *VAR_21 == 'X')
   && (VAR_21[1] == '.' || FUNC_4 (VAR_21[1])))
 {
   VAR_25 = 16;
   VAR_21++;
 }
      else if ((*VAR_21 == 'b' || *VAR_21 == 'B') && (VAR_21[1] == '0' || VAR_21[1] == '1'))
 {
   VAR_25 = 2;
   VAR_21++;
 }
    }


  for (;;)
    {
      unsigned int VAR_27 = *VAR_21++;

      if (FUNC_3 (VAR_27) || (FUNC_4 (VAR_27) && VAR_25 == 16))
 {
   VAR_27 = FUNC_9 (VAR_27);
   if (VAR_27 > VAR_23)
     VAR_23 = VAR_27;
 }
      else if (VAR_27 == '.')
 {
   if (VAR_26 == NOT_FLOAT)
     VAR_26 = AFTER_POINT;
   else
     FUNC_5 ("too many decimal points in number");
 }
      else if ((VAR_25 <= 10 && (VAR_27 == 'e' || VAR_27 == 'E'))
        || (VAR_25 == 16 && (VAR_27 == 'p' || VAR_27 == 'P')))
 {
   VAR_26 = AFTER_EXPON;
   break;
 }
      else
 {

   VAR_21--;
   break;
 }
    }

  if (VAR_26 != NOT_FLOAT && VAR_25 == 8)
    VAR_25 = 10;

  if (VAR_23 >= VAR_25)
    {
      if (VAR_25 == 2)
 FUNC_6 ("invalid digit \"%c\" in binary constant", '0' + VAR_23);
      else
 FUNC_6 ("invalid digit \"%c\" in octal constant", '0' + VAR_23);
    }

  if (VAR_26 != NOT_FLOAT)
    {
      if (VAR_25 == 2)
 {
   FUNC_7 (VAR_19, VAR_0,
       "invalid prefix \"0b\" for floating constant");
   return VAR_10;
 }

      if (VAR_25 == 16 && FUNC_1 (VAR_19) && !FUNC_0 (VAR_19, VAR_17))
 FUNC_7 (VAR_19, VAR_1,
     "use of C99 hexadecimal floating constant");

      if (VAR_26 == AFTER_EXPON)
 {
   if (*VAR_21 == '+' || *VAR_21 == '-')
     VAR_21++;


   if (!FUNC_3 (*VAR_21))
     FUNC_5 ("exponent has no digits");

   do
     VAR_21++;
   while (FUNC_3 (*VAR_21));
 }
      else if (VAR_25 == 16)
 FUNC_5 ("hexadecimal floating constants require an exponent");

      VAR_24 = FUNC_10 (VAR_21, VAR_22 - VAR_21);
      if (VAR_24 == 0)
 {
   FUNC_7 (VAR_19, VAR_0,
       "invalid suffix \"%.*s\" on floating constant",
       (int) (VAR_22 - VAR_21), VAR_21);
   return VAR_10;
 }


      if (VAR_22 != VAR_21
   && FUNC_2 (VAR_19)
   && ! FUNC_8 (VAR_19))
 FUNC_7 (VAR_19, VAR_2,
     "traditional C rejects the \"%.*s\" suffix",
     (int) (VAR_22 - VAR_21), VAR_21);




      if ((VAR_24 == VAR_12) && FUNC_1 (VAR_19))
 FUNC_7 (VAR_19, VAR_1,
     "suffix for double constant is a GCC extension");


      if ((VAR_24 & VAR_5) && VAR_25 != 10)
        {
          FUNC_7 (VAR_19, VAR_0,
                     "invalid suffix \"%.*s\" with hexadecimal floating constant",
                     (int) (VAR_22 - VAR_21), VAR_21);
          return VAR_10;
        }

      VAR_24 |= VAR_6;
    }
  else
    {
      VAR_24 = FUNC_11 (VAR_21, VAR_22 - VAR_21);
      if (VAR_24 == 0)
 {
   FUNC_7 (VAR_19, VAR_0,
       "invalid suffix \"%.*s\" on integer constant",
       (int) (VAR_22 - VAR_21), VAR_21);
   return VAR_10;
 }



      if (FUNC_2 (VAR_19) && ! FUNC_8 (VAR_19))
 {
   int VAR_28 = (VAR_24 & (VAR_15|VAR_8));
   int VAR_29 = (VAR_24 & VAR_16) == VAR_11;

   if (VAR_28 || (VAR_29 && FUNC_0 (VAR_19, VAR_18)))
     FUNC_7 (VAR_19, VAR_2,
         "traditional C rejects the \"%.*s\" suffix",
         (int) (VAR_22 - VAR_21), VAR_21);
 }

      if ((VAR_24 & VAR_16) == VAR_11
   && ! FUNC_0 (VAR_19, VAR_17)
   && FUNC_0 (VAR_19, VAR_18))
 FUNC_7 (VAR_19, VAR_1,
     "use of C99 long long integer constant");

      VAR_24 |= VAR_9;
    }

  if ((VAR_24 & VAR_8) && FUNC_1 (VAR_19))
    FUNC_7 (VAR_19, VAR_1,
        "imaginary constants are a GCC extension");
  if (VAR_25 == 2 && FUNC_1 (VAR_19))
    FUNC_7 (VAR_19, VAR_1,
        "binary constants are a GCC extension");

  if (VAR_25 == 10)
    VAR_24 |= VAR_4;
  else if (VAR_25 == 16)
    VAR_24 |= VAR_7;
  else if (VAR_25 == 2)
    VAR_24 |= VAR_3;
  else
    VAR_24 |= VAR_13;

  return VAR_24;

 syntax_error:
  return VAR_10;
}
