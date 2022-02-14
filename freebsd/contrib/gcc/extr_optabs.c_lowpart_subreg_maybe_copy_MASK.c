
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int * FUNC_0 (int,int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int,int *,int) ;

__attribute__((used)) static rtx
FUNC_3 (enum machine_mode VAR_0, rtx VAR_1,
      enum machine_mode VAR_2)
{
  rtx VAR_3;
  VAR_3 = FUNC_2 (VAR_0, VAR_1, VAR_2);
  if (VAR_3 == ((void*)0))
    {
      VAR_1 = FUNC_0 (VAR_2, VAR_1);
      VAR_3 = FUNC_2 (VAR_0, VAR_1, VAR_2);
      FUNC_1 (VAR_3 != ((void*)0));
    }
  return VAR_3;
}
