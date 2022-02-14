
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum target_signal { ____Placeholder_target_signal } target_signal ;


 int FUNC_0 (int,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;

int
FUNC_3 (enum target_signal VAR_0)
{
  int VAR_1;
  int VAR_2 = FUNC_0 (VAR_0, &VAR_1);
  if (!VAR_1)
    {


      FUNC_2 ("Signal %s does not exist on this system.\n",
        FUNC_1 (VAR_0));
      return 0;
    }
  else
    return VAR_2;
}
