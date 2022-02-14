
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int td_err_e ;
struct objfile {int dummy; } ;
struct TYPE_3__ {scalar_t__ pid; } ;


 scalar_t__ FUNC_0 (int ) ;


 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct objfile*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int **) ;
 int * VAR_7 ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9 (struct objfile *VAR_8)
{
  td_err_e VAR_9;

  if (VAR_8 == ((void*)0))
    {


      if (VAR_1)
        {
          FUNC_2 (VAR_6.pid == 0);
          VAR_1 = 0;
        }

      goto quit;
    }

  if (!VAR_0)
    goto quit;



  if (VAR_1)
    goto quit;




  VAR_6.pid = FUNC_0 (VAR_5);


  VAR_9 = FUNC_6 (&VAR_6, &VAR_7);
  switch (VAR_9)
    {
    case 129:

      break;

    case 128:

      VAR_4 = 1;




      if (VAR_2 == 0 && VAR_6.pid != 0)
        {
          FUNC_3(&VAR_3);
          FUNC_1();
        }
      else
        {
          FUNC_5(VAR_7);
          VAR_7 = ((void*)0);
        }
      break;

    default:
      FUNC_8 ("Cannot initialize thread debugging library: %s",
               FUNC_7 (VAR_9));
      break;
    }

 quit:
  if (&FUNC_4)
    FUNC_4 (VAR_8);
}
