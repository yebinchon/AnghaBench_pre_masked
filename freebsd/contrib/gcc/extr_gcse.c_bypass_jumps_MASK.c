
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 () ;
 scalar_t__ VAR_4 ;
 char* FUNC_5 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int VAR_7 ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_8 ;
 int FUNC_14 () ;
 scalar_t__ VAR_9 ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_17 (void)
{
  int VAR_10;



  if (VAR_4)
    return 0;



  VAR_8 = FUNC_14 ();

  if (VAR_5)
    FUNC_6 (VAR_5, VAR_6);


  if (VAR_9 <= VAR_2 + 1
      || FUNC_13 (FUNC_0 ("jump bypassing disabled")))
    return 0;

  FUNC_11 (&VAR_7);
  VAR_3 = 0;


  FUNC_12 ();
  FUNC_2 (VAR_8);
  FUNC_4 ();

  VAR_8 = FUNC_14 ();
  FUNC_1 ();
  VAR_10 = FUNC_16 (VAR_1 + 2, 1, 1);
  FUNC_9 ();

  if (VAR_5)
    {
      FUNC_8 (VAR_5, "BYPASS of %s: %ld basic blocks, ",
        FUNC_5 (), VAR_9);
      FUNC_8 (VAR_5, "%d bytes\n\n", VAR_3);
    }

  FUNC_15 (&VAR_7, ((void*)0));
  FUNC_10 ();


  FUNC_7 ();
  FUNC_3 (FUNC_14 (), VAR_0, VAR_0);

  return VAR_10;
}
