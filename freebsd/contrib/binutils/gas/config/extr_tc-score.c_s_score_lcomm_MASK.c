
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbolS ;
typedef int subsegT ;
typedef scalar_t__ segT ;
typedef int relax_substateT ;
typedef int offsetT ;
struct TYPE_4__ {int bss; } ;
struct TYPE_3__ {int * fr_symbol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,...) ;
 int FUNC_15 (int ,...) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 unsigned int FUNC_18 (int ) ;
 int FUNC_19 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (int) ;
 int FUNC_23 (int,int ,int ) ;
 int VAR_8 ;
 char* FUNC_24 (int ,int,int,int ,int *,int ,int *) ;
 int FUNC_25 () ;
 char FUNC_26 () ;
 int FUNC_27 () ;
 char* VAR_9 ;
 scalar_t__* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_28 (scalar_t__,int) ;
 int VAR_13 ;
 TYPE_2__* FUNC_29 (scalar_t__) ;
 int VAR_14 ;
 scalar_t__ FUNC_30 (char*,int) ;
 int FUNC_31 (scalar_t__,int) ;
 int * FUNC_32 (char*) ;
 TYPE_1__* FUNC_33 (int *) ;
 int FUNC_34 (int *,int ) ;

__attribute__((used)) static void
FUNC_35 (int VAR_15)
{
  char *VAR_16;
  char VAR_17;
  char *VAR_18;
  int VAR_19;
  symbolS *VAR_20;
  segT VAR_21 = VAR_11;
  subsegT VAR_22 = VAR_12;
  const int VAR_23 = 15;
  int VAR_24 = 0;
  segT VAR_25 = VAR_7;
  int VAR_26 = 0;

  VAR_16 = VAR_9;
  VAR_17 = FUNC_26 ();
  VAR_18 = VAR_9;
  *VAR_18 = VAR_17;

  if (VAR_16 == VAR_18)
    {
      FUNC_14 (FUNC_12("expected symbol name"));
      FUNC_21 ();
      return;
    }

  FUNC_0 ();



  if (*VAR_9 == ',')
    {
      ++VAR_9;
      FUNC_0 ();
    }

  if (VAR_10[(unsigned char)*VAR_9])
    {
      FUNC_14 (FUNC_12("missing size expression"));
      return;
    }

  if ((VAR_19 = FUNC_25 ()) < 0)
    {
      FUNC_15 (FUNC_12("BSS length (%d) < 0 ignored"), VAR_19);
      FUNC_27 ();
      return;
    }
  FUNC_0 ();
  if (*VAR_9 == ',')
    {
      ++VAR_9;
      FUNC_0 ();

      if (VAR_10[(unsigned char)*VAR_9])
        {
          FUNC_14 (FUNC_12("missing alignment"));
          return;
        }
      else
        {
          VAR_24 = FUNC_25 ();
          VAR_26 = 1;
        }
    }

  if (!VAR_26)
    {
      FUNC_11 (VAR_19, VAR_24);


      if (VAR_24)
        FUNC_28 (VAR_25, VAR_24);
    }

  if (VAR_26)
    {
      if (VAR_15)
        {

          if (VAR_24 != 0)
            {
              unsigned int VAR_27;

              for (VAR_27 = 0; VAR_24 != 0; VAR_24 >>= 1, ++VAR_27)
                ;
              VAR_24 = VAR_27 - 1;
            }
        }

      if (VAR_24 > VAR_23)
        {
          VAR_24 = VAR_23;
          FUNC_15 (FUNC_12("alignment too large; %d assumed"), VAR_24);
        }
      else if (VAR_24 < 0)
        {
          VAR_24 = 0;
          FUNC_15 (FUNC_12("alignment negative; 0 assumed"));
        }

      FUNC_28 (VAR_25, VAR_24);
    }
  else
    {
    }

  *VAR_18 = 0;
  VAR_20 = FUNC_32 (VAR_16);
  *VAR_18 = VAR_17;

  if (
       (FUNC_4 (VAR_20) == VAR_25 || (!FUNC_7 (VAR_20) && FUNC_6 (VAR_20) == 0)))
    {
      char *VAR_28;

      FUNC_31 (VAR_25, 1);

      if (VAR_24)
        FUNC_23 (VAR_24, 0, 0);


      if (FUNC_4 (VAR_20) == VAR_25)
        FUNC_33 (VAR_20)->fr_symbol = ((void*)0);

      FUNC_34 (VAR_20, VAR_8);
      VAR_28 = FUNC_24 (VAR_13, 1, 1, (relax_substateT) 0, VAR_20, (offsetT) VAR_19, ((void*)0));
      *VAR_28 = 0;


      FUNC_8 (VAR_20, VAR_25);
    }
  else
    FUNC_14 (FUNC_12("symbol `%s' is already defined"), FUNC_2 (VAR_20));

  FUNC_31 (VAR_21, VAR_22);

  FUNC_20 ();
}
