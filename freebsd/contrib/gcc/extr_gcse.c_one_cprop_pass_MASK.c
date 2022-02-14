
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ n_elems; } ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int) ;
 char* FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (scalar_t__,char*,TYPE_1__*) ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__,char*,...) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;

__attribute__((used)) static int
FUNC_16 (int VAR_11, bool VAR_12, bool VAR_13)
{
  int VAR_14 = 0;

  VAR_2 = VAR_6 = 0;
  VAR_3 = VAR_7 = 0;

  FUNC_15 (VAR_12);


  VAR_4 = FUNC_0 (VAR_9, VAR_5);
  FUNC_10 ();

  FUNC_2 (VAR_8, &VAR_10, 1);
  FUNC_5 (&VAR_10);


  FUNC_12 (VAR_4);
  VAR_4 = ((void*)0);

  if (VAR_1)
    FUNC_9 (VAR_1, "SET", &VAR_10);
  if (VAR_10.n_elems > 0)
    {
      FUNC_1 (VAR_5, VAR_10.n_elems);
      FUNC_4 ();
      VAR_14 = FUNC_6 (VAR_12);
      if (VAR_13)
 VAR_14 |= FUNC_3 ();
      FUNC_13 ();
    }

  FUNC_14 (&VAR_10);

  if (VAR_1)
    {
      FUNC_11 (VAR_1, "CPROP of %s, pass %d: %d bytes needed, ",
        FUNC_7 (), VAR_11, VAR_0);
      FUNC_11 (VAR_1, "%d local const props, %d local copy props, ",
        VAR_6, VAR_7);
      FUNC_11 (VAR_1, "%d global const props, %d global copy props\n\n",
        VAR_2, VAR_3);
    }

  if (VAR_14 && VAR_12)
    FUNC_8 ();

  return VAR_14;
}
