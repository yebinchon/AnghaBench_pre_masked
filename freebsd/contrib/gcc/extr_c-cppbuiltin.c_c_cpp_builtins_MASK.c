
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cpp_reader ;
struct TYPE_2__ {scalar_t__ handle_pragma_extern_prefix; scalar_t__ handle_pragma_redefine_extname; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (char*,char*,char*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*,int ,int) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 () ;
 int VAR_7 ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_18 () ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 TYPE_1__ VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;

void
FUNC_19 (cpp_reader *VAR_43)
{

  if (VAR_27)
    return;

  FUNC_17 ();


  FUNC_15 ();

  if (FUNC_13 ())
    {
      if (VAR_28 && VAR_2)
 FUNC_16 (VAR_43, "__GXX_WEAK__=1");
      else
 FUNC_16 (VAR_43, "__GXX_WEAK__=0");
      if (VAR_41)
 FUNC_16 (VAR_43, "__DEPRECATED");
    }


  if (VAR_14)
    FUNC_16 (VAR_43, "__EXCEPTIONS");



  if (VAR_12 == 0)







    FUNC_11 ("__GXX_ABI_VERSION", 999999);
  else if (VAR_12 == 1)


    FUNC_11 ("__GXX_ABI_VERSION", 102);
  else

    FUNC_11 ("__GXX_ABI_VERSION",
       1000 + VAR_12);


  if (VAR_6)
    FUNC_16 (VAR_43, "__USING_SJLJ_EXCEPTIONS__");


  FUNC_9 ("__SCHAR_MAX__", VAR_37, 0);
  FUNC_9 ("__SHRT_MAX__", VAR_36, 0);
  FUNC_9 ("__INT_MAX__", VAR_30, 0);
  FUNC_9 ("__LONG_MAX__", VAR_32, 1);
  FUNC_9 ("__LONG_LONG_MAX__", VAR_33, 2);
  FUNC_9 ("__WCHAR_MAX__", VAR_42, 0);

  FUNC_10 ("__CHAR_BIT__", VAR_7);


  FUNC_8 ();



  FUNC_11 ("__FLT_EVAL_METHOD__",
     VAR_5);


  FUNC_11 ("__DEC_EVAL_METHOD__",
                                 VAR_4);

  FUNC_7 ("FLT", "F", "%s", VAR_29);




  if (VAR_25)
    FUNC_7 ("DBL", "L", "((double)%s)", VAR_11);
  else
    FUNC_7 ("DBL", "", "%s", VAR_11);
  FUNC_7 ("LDBL", "L", "%s", VAR_31);


  FUNC_6 ("DEC32", "DF", VAR_9);
  FUNC_6 ("DEC64", "DD", VAR_10);
  FUNC_6 ("DEC128", "DL", VAR_8);


  FUNC_12 ("__REGISTER_PREFIX__", VAR_1, 0);
  FUNC_12 ("__USER_LABEL_PREFIX__", VAR_39, 0);


  FUNC_12 ("__VERSION__", VAR_40, 1);

  if (VAR_16)
    FUNC_16 (VAR_43, "__GNUC_GNU_INLINE__");
  else
    FUNC_16 (VAR_43, "__GNUC_STDC_INLINE__");


  if (FUNC_3 (VAR_32) == 64
      && VAR_0 == 64
      && FUNC_3 (VAR_30) == 32)
    {
      FUNC_16 (VAR_43, "_LP64");
      FUNC_16 (VAR_43, "__LP64__");
    }





  if (VAR_13)
    {
      FUNC_16 (VAR_43, "__block=__attribute__((__blocks__(byref)))");
      FUNC_16 (VAR_43, "__BLOCKS__=1");
    }

  if (VAR_35)
    FUNC_16 (VAR_43, "__OPTIMIZE_SIZE__");
  if (VAR_34)
    FUNC_16 (VAR_43, "__OPTIMIZE__");

  if (FUNC_18 ())
    FUNC_16 (VAR_43, "__FAST_MATH__");
  if (VAR_22)
    FUNC_16 (VAR_43, "__NO_INLINE__");
  if (VAR_23)
    FUNC_16 (VAR_43, "__SUPPORT_SNAN__");
  if (VAR_15)
    FUNC_16 (VAR_43, "__FINITE_MATH_ONLY__=1");
  else
    FUNC_16 (VAR_43, "__FINITE_MATH_ONLY__=0");
  if (VAR_21)
    {
      FUNC_11 ("__pic__", VAR_21);
      FUNC_11 ("__PIC__", VAR_21);
    }

  if (VAR_17)
    FUNC_16 (VAR_43, "__STRICT_ANSI__");

  if (!VAR_24)
    FUNC_16 (VAR_43, "__CHAR_UNSIGNED__");

  if (FUNC_13 () && FUNC_4 (VAR_42))
    FUNC_16 (VAR_43, "__WCHAR_UNSIGNED__");


  if (FUNC_14 () && VAR_19)
    FUNC_16 (VAR_43, "__NEXT_RUNTIME__");


  if (VAR_18 || VAR_38.handle_pragma_redefine_extname)
    FUNC_16 (VAR_43, "__PRAGMA_REDEFINE_EXTNAME");

  if (VAR_38.handle_pragma_extern_prefix)
    FUNC_16 (VAR_43, "__PRAGMA_EXTERN_PREFIX");




  if (VAR_26 == 3)
    FUNC_16 (VAR_43, "__SSP_STRONG__=3");
  else if (VAR_26 == 2)
    FUNC_16 (VAR_43, "__SSP_ALL__=2");
  else if (VAR_26 == 1)
    FUNC_16 (VAR_43, "__SSP__=1");

  if (VAR_20)
    FUNC_16 (VAR_43, "_OPENMP=200505");







  FUNC_0 ();
  FUNC_2 ();
  FUNC_1 ();







  if (VAR_3)
    FUNC_16 (VAR_43, "__declspec(x)=__attribute__((x))");
}
