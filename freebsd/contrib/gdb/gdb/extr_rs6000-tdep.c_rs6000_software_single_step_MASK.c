
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_2__ {int address; int data; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int,int,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 char* FUNC_3 (int*,int*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;

void
FUNC_6 (enum target_signal VAR_2,
        int VAR_3)
{
  CORE_ADDR VAR_4;
  int VAR_5;
  const char *VAR_6 = FUNC_3 (&VAR_4, &VAR_5);
  int VAR_7, VAR_8;
  CORE_ADDR VAR_9;
  CORE_ADDR VAR_10[2];
  int VAR_11;

  if (VAR_3)
    {

      VAR_9 = FUNC_2 ();

      VAR_8 = FUNC_1 (VAR_9, 4);

      VAR_10[0] = VAR_9 + VAR_5;
      VAR_11 = VAR_8 >> 26;
      VAR_10[1] = FUNC_0 (VAR_11, VAR_8, VAR_9, VAR_10[0]);


      if (VAR_10[1] == VAR_10[0])
 VAR_10[1] = -1;

      VAR_1[1].address = 0;

      for (VAR_7 = 0; VAR_7 < 2; ++VAR_7)
 {


   if (VAR_10[VAR_7] == -1)
     continue;
   FUNC_4 (VAR_10[VAR_7], VAR_1[VAR_7].data);
   VAR_1[VAR_7].address = VAR_10[VAR_7];
 }

    }
  else
    {


      for (VAR_7 = 0; VAR_7 < 2; ++VAR_7)
 if (VAR_1[VAR_7].address != 0)
   FUNC_5 (VAR_1[VAR_7].address,
        VAR_1[VAR_7].data);
    }
  VAR_0 = 0;

}
