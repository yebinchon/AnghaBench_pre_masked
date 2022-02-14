
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ n_elems; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 char* FUNC_6 () ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (scalar_t__,char*,TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (scalar_t__,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;

__attribute__((used)) static int
FUNC_16 (int VAR_9)
{
  int VAR_10 = 0;

  VAR_6 = 0;
  VAR_5 = 0;

  FUNC_1 (VAR_8, &VAR_3, 0);
  FUNC_0 ();
  if (VAR_4)
    FUNC_4 ();

  FUNC_3 (&VAR_3);
  FUNC_15 ();
  if (VAR_1)
    FUNC_7 (VAR_1, "Expression", &VAR_3);

  if (VAR_3.n_elems > 0)
    {
      FUNC_2 (VAR_7, VAR_3.n_elems);
      FUNC_5 ();
      VAR_10 |= FUNC_13 ();
      FUNC_9 (VAR_2);
      FUNC_12 ();
    }

  FUNC_11 ();
  FUNC_14 ();
  FUNC_10 (&VAR_3);

  if (VAR_1)
    {
      FUNC_8 (VAR_1, "\nPRE GCSE of %s, pass %d: %d bytes needed, ",
        FUNC_6 (), VAR_9, VAR_0);
      FUNC_8 (VAR_1, "%d substs, %d insns created\n",
        VAR_6, VAR_5);
    }

  return VAR_10;
}
