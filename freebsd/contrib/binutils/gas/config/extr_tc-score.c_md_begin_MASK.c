
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int subsegT ;
typedef int segT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 int * VAR_8 ;
 int VAR_9 ;
 void* FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int ,int ) ;

void
FUNC_13 (void)
{
  unsigned int VAR_15;
  segT VAR_16;
  subsegT VAR_17;

  if ((VAR_13 = FUNC_9 ()) == ((void*)0))
    FUNC_1 (FUNC_0("virtual memory exhausted"));

  FUNC_8 ();

  if ((VAR_8 = FUNC_9 ()) == ((void*)0))
    FUNC_1 (FUNC_0("virtual memory exhausted"));

  FUNC_6 ();

  for (VAR_15 = (int)VAR_0; VAR_15 < (int)VAR_1; VAR_15++)
    FUNC_7 (VAR_7 + VAR_15);


  FUNC_10 ();

  FUNC_2 (VAR_14, VAR_5, 0);
  VAR_16 = VAR_10;
  VAR_17 = VAR_11;
  VAR_12 = FUNC_11 (".pdr", (subsegT) 0);
  (void)FUNC_5 (VAR_14, VAR_12, VAR_3 | VAR_4 | VAR_2);
  (void)FUNC_4 (VAR_14, VAR_12, 2);
  FUNC_12 (VAR_16, VAR_17);

  if (VAR_6)
    FUNC_3 (VAR_14, VAR_9);
}
