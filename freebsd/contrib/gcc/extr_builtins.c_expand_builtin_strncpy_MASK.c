
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ) ;
 int VAR_9 ;
 char* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int ,int ,void*,unsigned int) ;
 int VAR_10 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (scalar_t__,int ,int,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 unsigned int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_16 (int ,scalar_t__,int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ,int ,int ,void*,unsigned int,int ) ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__) ;
 int FUNC_20 (scalar_t__,int) ;
 scalar_t__ FUNC_21 (scalar_t__,int ,int ,int ,int ) ;

__attribute__((used)) static rtx
FUNC_22 (tree VAR_12, rtx VAR_13, enum machine_mode VAR_14)
{
  tree VAR_15 = FUNC_12 (VAR_12);
  tree VAR_16 = FUNC_2 (VAR_12, 1);
  if (FUNC_21 (VAR_16,
   VAR_6, VAR_6, VAR_3, VAR_7))
    {
      tree VAR_17 = FUNC_6 (FUNC_3 (FUNC_0 (VAR_16)), 1);
      tree VAR_18 = FUNC_3 (FUNC_0 (FUNC_0 (VAR_16)));
      tree VAR_19 = FUNC_10 (VAR_15, VAR_16, VAR_17);

      if (VAR_19)
 {
   while (FUNC_1 (VAR_19) == VAR_1)
     {
       FUNC_9 (FUNC_2 (VAR_19, 0), VAR_10, VAR_8,
      VAR_2);
       VAR_19 = FUNC_2 (VAR_19, 1);
     }
   return FUNC_9 (VAR_19, VAR_13, VAR_14, VAR_2);
 }


      if (!FUNC_15 (VAR_18, 1) || !VAR_17 || !FUNC_15 (VAR_17, 1))
 return 0;

      VAR_17 = FUNC_16 (VAR_5, VAR_17, FUNC_17 (1));




      if (FUNC_19 (VAR_17, VAR_18))
 {
   tree VAR_20 = FUNC_3 (VAR_16);
   unsigned int VAR_21
     = FUNC_14 (VAR_20, VAR_0);
   const char *VAR_22 = FUNC_5 (FUNC_3 (FUNC_0 (VAR_16)));
   rtx VAR_23;

   if (!VAR_22 || VAR_21 == 0 || !FUNC_15 (VAR_18, 1)
       || !FUNC_7 (FUNC_20 (VAR_18, 1),
           VAR_9,
           (void *) VAR_22, VAR_21))
     return 0;

   VAR_23 = FUNC_13 (VAR_20, VAR_18);
   FUNC_18 (VAR_23, FUNC_20 (VAR_18, 1),
      VAR_9,
      (void *) VAR_22, VAR_21, 0);
   VAR_23 = FUNC_11 (FUNC_4 (VAR_23, 0), VAR_4);
   VAR_23 = FUNC_8 (VAR_11, VAR_23);
   return VAR_23;
 }
    }
  return 0;
}
