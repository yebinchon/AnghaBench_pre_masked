
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int taskStart ;
typedef int passArgs ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_6__ {scalar_t__ arg_array_len; int * arg_array_val; } ;
typedef TYPE_1__ arg_array ;
struct TYPE_7__ {int status; int pid; } ;
typedef TYPE_2__ TASK_START ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (int ,int ,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_4 (char*,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int VAR_6 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 () ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_13 (char *VAR_11, char *VAR_12, char **VAR_13)
{
  enum clnt_stat VAR_14;
  arg_array VAR_15;
  TASK_START VAR_16;

  FUNC_2 ((char *) &VAR_15, '\0', sizeof (VAR_15));
  FUNC_2 ((char *) &VAR_16, '\0', sizeof (VAR_16));



  FUNC_4 (VAR_12, &VAR_15);

  if (VAR_15.arg_array_len == 0)
    FUNC_0 ("You must specify a function name to run, and arguments if any");

  VAR_14 = FUNC_3 (VAR_1, VAR_10, &VAR_15,
     VAR_9, &VAR_16);

  if ((VAR_14 != VAR_2) || (VAR_16.status == -1))
    FUNC_0 ("Can't create process on remote target machine");


  VAR_8 = FUNC_8 (VAR_15.arg_array_val[0],
      FUNC_9 (VAR_15.arg_array_val[0]));

  FUNC_7 (&VAR_7);
  VAR_5 = FUNC_5 (VAR_16.pid);




  FUNC_1 ();



  FUNC_11 ();


  FUNC_10 ();

  VAR_6 = VAR_3;
  FUNC_12 ();
  VAR_6 = VAR_0;


  FUNC_6 (-1, VAR_4, 0);
}
