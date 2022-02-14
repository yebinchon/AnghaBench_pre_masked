
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;


 int FUNC_0 (char*,int ,int ,char*,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_7 () ;

void
FUNC_8 (void)
{

  if (VAR_8)
    return;
  FUNC_5 ();
  FUNC_4 ();

  if (FUNC_7 ())
    {
      FUNC_1 (&VAR_5);


      FUNC_0 ("tsd", VAR_1, VAR_7,
            "Show the thread-specific data keys and destructors "
            "for the process.\n",
           &VAR_13);

      FUNC_0 ("signal", VAR_1, VAR_6,
            "Show the thread signal info.\n",
           &VAR_13);

      FUNC_6 (&VAR_10, &VAR_2, sizeof (struct target_ops));
      FUNC_6 (&VAR_2, &VAR_3, sizeof (struct target_ops));
      FUNC_1 (&VAR_2);


      VAR_11 = VAR_12;
      VAR_12 = VAR_4;

      VAR_0 = 1;
    }
  else
    {
      FUNC_3 (VAR_9,
        "[GDB will not be able to debug user-mode threads: %s]\n", FUNC_2());


      FUNC_1 (&VAR_2);
    }
}
