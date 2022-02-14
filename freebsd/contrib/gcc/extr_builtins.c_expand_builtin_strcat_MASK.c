
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__,scalar_t__,int ,int) ;
 int FUNC_10 (scalar_t__,int ,int,int ) ;
 scalar_t__ FUNC_11 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 () ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int ,scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static rtx
FUNC_17 (tree VAR_8, tree VAR_9, rtx VAR_10, enum machine_mode VAR_11)
{
  if (!FUNC_16 (VAR_9, VAR_4, VAR_4, VAR_5))
    return 0;
  else
    {
      tree VAR_12 = FUNC_2 (VAR_9),
      VAR_13 = FUNC_2 (FUNC_0 (VAR_9));
      const char *VAR_14 = FUNC_6 (VAR_13);


      if (VAR_14 && *VAR_14 == '\0')
 return FUNC_10 (VAR_12, VAR_10, VAR_11, VAR_1);

      if (!VAR_7)
 {

   tree VAR_15, VAR_16,
     VAR_17 = VAR_6[VAR_0];
   rtx VAR_18;


   VAR_15 = FUNC_5 (VAR_13);
   if (VAR_15 != VAR_13)
     VAR_9 = FUNC_4 (VAR_2, VAR_15);
   else
     VAR_9 = FUNC_0 (VAR_9);

   VAR_12 = FUNC_5 (VAR_12);

   FUNC_14 ();


   VAR_16 =
     FUNC_3 (VAR_17,
          FUNC_4 (VAR_2, VAR_12));

   VAR_16 = FUNC_12 (FUNC_1 (VAR_12), VAR_16);
   VAR_16 = FUNC_11 (VAR_3, FUNC_1 (VAR_12), VAR_12, VAR_16);

   VAR_16 = FUNC_5 (VAR_16);
   VAR_9 = FUNC_15 (VAR_2, VAR_16, VAR_9);

   if (!FUNC_9 (VAR_8, VAR_9, VAR_10, VAR_11))
     {
       FUNC_8 ();
       return 0;
     }


   VAR_18 = FUNC_13 ();
   FUNC_8 ();
   FUNC_7 (VAR_18);

   return FUNC_10 (VAR_12, VAR_10, VAR_11, VAR_1);
 }

      return 0;
    }
}
