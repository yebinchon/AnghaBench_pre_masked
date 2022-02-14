
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_3__ {int (* use_aeabi_atexit ) () ;} ;
struct TYPE_4__ {TYPE_1__ cxx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 TYPE_2__ VAR_6 ;
 scalar_t__ FUNC_8 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static tree
FUNC_9 (void)
{
  tree VAR_9;
  tree VAR_10;
  tree VAR_11;
  tree VAR_12;
  const char *VAR_13;
  bool VAR_14;

  if (VAR_1)
    return VAR_1;

  if (VAR_2)
    {







      VAR_14 = VAR_6.cxx.use_aeabi_atexit ();


      VAR_10 = FUNC_8 (VAR_0, VAR_5, VAR_7);
      VAR_11 = FUNC_0 (VAR_8, VAR_10);
      VAR_12 = FUNC_2 (VAR_11);

      VAR_10 = FUNC_8 (VAR_0, VAR_5, VAR_7);
      if (VAR_14)
 {
   VAR_10 = FUNC_8 (VAR_0, VAR_12, VAR_10);
   VAR_10 = FUNC_8 (VAR_0, VAR_5, VAR_10);
 }
      else
 {
   VAR_10 = FUNC_8 (VAR_0, VAR_5, VAR_10);
   VAR_10 = FUNC_8 (VAR_0, VAR_12, VAR_10);
 }

      VAR_11 = FUNC_0 (VAR_3, VAR_10);
      VAR_12 = FUNC_2 (VAR_11);
      if (VAR_14)
 VAR_13 = "__aeabi_atexit";
      else
 VAR_13 = "__cxa_atexit";
    }
  else
    {






      VAR_11 = FUNC_0 (VAR_8, VAR_7);
      VAR_12 = FUNC_2 (VAR_11);
      VAR_10 = FUNC_8 (VAR_0, VAR_12, VAR_7);

      VAR_11 = FUNC_0 (VAR_3, VAR_10);
      VAR_13 = "atexit";
    }


  FUNC_6 (VAR_4);
  VAR_9 = FUNC_1 (VAR_13, VAR_11);
  FUNC_4 (VAR_9);
  FUNC_5 ();
  VAR_1 = FUNC_3 (VAR_9);

  return VAR_1;
}
