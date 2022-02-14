
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,unsigned long*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 unsigned long FUNC_11 (int) ;

__attribute__((used)) static void __attribute__((constructor))
FUNC_12 (void)
{
  unsigned long VAR_7;


  FUNC_3 ();

  FUNC_6 ();
  FUNC_5 ("OMP_DYNAMIC", &VAR_3);
  FUNC_5 ("OMP_NESTED", &VAR_4);
  if (!FUNC_7 ("OMP_NUM_THREADS", &VAR_5))
    FUNC_2 ();
  if (FUNC_4 ())
    FUNC_1 ();


  FUNC_8 (&VAR_6);
  FUNC_9 (&VAR_6, VAR_1);

  if (FUNC_7 ("GOMP_STACKSIZE", &VAR_7))
    {
      int VAR_8;

      VAR_7 *= 1024;
      VAR_8 = FUNC_10 (&VAR_6, VAR_7);
      if (VAR_8 != 0)
 FUNC_0 ("Stack size change failed: %s", FUNC_11 (VAR_8));
    }
}
