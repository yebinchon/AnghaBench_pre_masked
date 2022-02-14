
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct sparc_args {int words; } ;
typedef enum mode_class { ____Placeholder_mode_class } mode_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;





 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_10 (const struct sparc_args *VAR_14, enum machine_mode VAR_15,
       tree VAR_16, int VAR_17, int VAR_18,
       int *VAR_19, int *VAR_20)
{
  int VAR_21 = (VAR_18
   ? VAR_6
   : VAR_8);
  int VAR_22 = VAR_14->words;
  enum mode_class VAR_23;
  int VAR_24;

  *VAR_20 = 0;

  if (VAR_16 && FUNC_3 (VAR_16))
    return -1;

  if (VAR_9
      && VAR_15 == VAR_0
      && VAR_16
      && FUNC_6 (VAR_16) % VAR_1 != 0)
    return -1;


  if (VAR_10
      && (VAR_16 ? FUNC_6 (VAR_16) : FUNC_0 (VAR_15)) >= 128
      && (VAR_22 & 1) != 0)
    VAR_22++, *VAR_20 = 1;

  VAR_23 = FUNC_1 (VAR_15);
  if (VAR_16 && FUNC_4 (VAR_16) == VAR_12)
    {



      if (FUNC_4 (FUNC_5 (VAR_16)) == VAR_2)
 {

   FUNC_7 (VAR_15 == VAR_0);
 }
      else
 {




   FUNC_7 (VAR_15 != VAR_0);



   VAR_23 = 130;
 }
    }

  switch (VAR_23)
    {
    case 130:
    case 132:
      if (VAR_10 && VAR_11 && VAR_17)
 {
   if (VAR_22 >= VAR_5)
     return -1;
   VAR_24 = VAR_4 + VAR_22 * 2;


   if (FUNC_2 (VAR_15) <= 4)
     VAR_24++;
   break;
 }


    case 129:
    case 131:
      if (VAR_22 >= VAR_7)
 return -1;
      VAR_24 = VAR_21 + VAR_22;
      break;

    case 128:
      if (VAR_15 == VAR_13)

 return -1;

      FUNC_7 (VAR_15 == VAR_0);

      if (VAR_9
   || !VAR_16
   || (FUNC_4 (VAR_16) != VAR_12
       && FUNC_4 (VAR_16) != VAR_3))
 {
   if (VAR_22 >= VAR_7)
     return -1;
   VAR_24 = VAR_21 + VAR_22;
 }
      else
 {
   int VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;


   if (FUNC_4 (VAR_16) == VAR_12)
     VAR_26 = 1;
   else
     FUNC_9 (VAR_16, &VAR_25, &VAR_26, &VAR_27);




   if (VAR_27 || !VAR_17)
     VAR_26 = 0, VAR_25 = 1;


   if (VAR_26 && VAR_22 >= VAR_5)
     return -1;



   if (!VAR_26 && VAR_25 && VAR_22 >= VAR_7)
     return -1;





   return VAR_22;
 }
      break;

    default :
      FUNC_8 ();
    }

  *VAR_19 = VAR_24;
  return VAR_22;
}
