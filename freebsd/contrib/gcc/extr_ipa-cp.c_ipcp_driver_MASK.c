
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

unsigned int
FUNC_12 (void)
{
  if (VAR_0)
    FUNC_1 (VAR_0, "\nIPA constant propagation start:\n");
  FUNC_5 ();
  FUNC_2 ();


  FUNC_7 ();
  if (VAR_0)
    {
      FUNC_1 (VAR_0, "\nIPA structures before propagation:\n");
      FUNC_11 (VAR_0);
    }

  FUNC_9 ();
  if (VAR_0)
    {
      FUNC_1 (VAR_0, "\nIPA structures after propagation:\n");
      FUNC_11 (VAR_0);
      FUNC_1 (VAR_0, "\nProfiling info before insert stage:\n");
      FUNC_10 (VAR_0);
    }

  FUNC_8 ();
  if (VAR_0)
    {
      FUNC_1 (VAR_0, "\nProfiling info after insert stage:\n");
      FUNC_10 (VAR_0);
    }

  FUNC_4 ();
  FUNC_6 ();
  FUNC_3 ();
  if (VAR_0)
    FUNC_1 (VAR_0, "\nIPA constant propagation end\n");
  FUNC_0 (1, ((void*)0));
  return 0;
}
