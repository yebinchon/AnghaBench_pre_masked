
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int * rtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int * VAR_2 ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static rtx
FUNC_10 (tree VAR_3, tree VAR_4)
{



  if (VAR_4 == 0)

    return VAR_2;
  else if (! FUNC_7 (FUNC_3 (VAR_4), 1))
    {
      if (FUNC_1 (VAR_3) == VAR_0)
 FUNC_5 ("invalid argument to %<__builtin_frame_address%>");
      else
 FUNC_5 ("invalid argument to %<__builtin_return_address%>");
      return VAR_2;
    }
  else
    {
      rtx VAR_5
 = FUNC_6 (FUNC_1 (VAR_3),
          FUNC_8 (FUNC_3 (VAR_4), 1));


      if (VAR_5 == ((void*)0))
 {
   if (FUNC_1 (VAR_3) == VAR_0)
     FUNC_9 (0, "unsupported argument to %<__builtin_frame_address%>");
   else
     FUNC_9 (0, "unsupported argument to %<__builtin_return_address%>");
   return VAR_2;
 }


      if (FUNC_1 (VAR_3) == VAR_0)
 return VAR_5;

      if (!FUNC_2 (VAR_5)
   && ! FUNC_0 (VAR_5))
 VAR_5 = FUNC_4 (VAR_1, VAR_5);
      return VAR_5;
    }
}
