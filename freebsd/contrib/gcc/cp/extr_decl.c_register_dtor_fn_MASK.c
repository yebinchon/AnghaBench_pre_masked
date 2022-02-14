
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {scalar_t__ (* use_aeabi_atexit ) () ;} ;
struct TYPE_4__ {TYPE_1__ cxx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int VAR_5 ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 () ;
 TYPE_2__ VAR_6 ;
 int FUNC_17 (int ,int ,int ) ;
 int VAR_7 ;

tree
FUNC_18 (tree VAR_8)
{
  tree VAR_9;
  tree VAR_10;
  tree VAR_11;
  tree VAR_12;

  if (FUNC_1 (FUNC_0 (VAR_8)))
    return VAR_7;




  FUNC_3 (VAR_8);


  VAR_9 = FUNC_15 ();






  FUNC_14 (VAR_3);
  VAR_12 = FUNC_3 (VAR_8);
  FUNC_13 ();


  VAR_10 = FUNC_2 (VAR_1);
  FUNC_9 (VAR_12);
  FUNC_8 (VAR_10);
  FUNC_7 ();


  FUNC_6 (VAR_9);
  FUNC_12 (VAR_9);
  VAR_9 = FUNC_5 (VAR_0, VAR_9, 0);
  if (VAR_4)
    {
      VAR_11 = FUNC_17 (VAR_2,
   FUNC_5 (VAR_0, FUNC_11 (), 0),
   VAR_2);
      if (VAR_6.cxx.use_aeabi_atexit ())
 {
   VAR_11 = FUNC_17 (VAR_2, VAR_9, VAR_11);
   VAR_11 = FUNC_17 (VAR_2, VAR_5, VAR_11);
 }
      else
 {
   VAR_11 = FUNC_17 (VAR_2, VAR_5, VAR_11);
   VAR_11 = FUNC_17 (VAR_2, VAR_9, VAR_11);
 }
    }
  else
    VAR_11 = FUNC_17 (VAR_2, VAR_9, VAR_2);
  return FUNC_4 (FUNC_10 (), VAR_11);
}
