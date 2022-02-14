
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int valueT ;
struct TYPE_19__ {int local; TYPE_1__* bsym; TYPE_3__* sy_frag; } ;
typedef TYPE_2__ symbolS ;
typedef scalar_t__ segT ;
typedef int relax_substateT ;
typedef int offsetT ;
struct TYPE_20__ {int * fr_symbol; } ;
struct TYPE_18__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,scalar_t__) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_15 () ;
 int FUNC_16 (int,int ,int ) ;
 TYPE_3__* VAR_3 ;
 char* FUNC_17 (int ,int,int,int ,TYPE_2__*,int ,char*) ;
 int FUNC_18 () ;
 char FUNC_19 () ;
 int FUNC_20 () ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_21 (scalar_t__,int) ;
 int VAR_7 ;
 int FUNC_22 (scalar_t__,int) ;
 TYPE_2__* FUNC_23 (char*) ;
 TYPE_3__ VAR_8 ;

__attribute__((used)) static void
FUNC_24 (int VAR_9)
{
  char *VAR_10;
  char VAR_11;
  char *VAR_12;
  int VAR_13, VAR_14;
  symbolS *VAR_15;

  VAR_10 = VAR_4;
  VAR_11 = FUNC_19 ();

  VAR_12 = VAR_4;
  *VAR_12 = VAR_11;
  FUNC_0 ();

  if (*VAR_4 != ',')
    {
      FUNC_12 ("expected comma after symbol name");
      FUNC_20 ();
      return;
    }

  VAR_4++;
  VAR_14 = FUNC_18 ();

  if (VAR_14 < 0)
    {
      FUNC_12 ("negative symbol length");
      FUNC_20 ();
      return;
    }

  *VAR_12 = 0;
  VAR_15 = FUNC_23 (VAR_10);
  *VAR_12 = VAR_11;

  if (FUNC_6 (VAR_15) && ! FUNC_5 (VAR_15))
    {
      FUNC_12 ("ignoring attempt to re-define symbol");
      FUNC_20 ();
      return;
    }
  if (((int) FUNC_4 (VAR_15) != 0) && ((int) FUNC_4 (VAR_15) != VAR_14))

    {
      FUNC_13 ("length of symbol \"%s\" already %ld, ignoring %d",
        FUNC_2 (VAR_15), (long) FUNC_4 (VAR_15), VAR_14);
    }
  FUNC_14 (VAR_15->sy_frag == &VAR_8);



  if (*VAR_4 == ',')
    {
      VAR_4++;
      VAR_13 = FUNC_18 ();
      if (VAR_13 < 0)
 {
   VAR_13 = 0;
   FUNC_13 ("assuming symbol alignment of zero");
 }
    }
  else
    VAR_13 = 0;

  if (VAR_9 != 0)
    {
      segT VAR_16;
      int VAR_17;
      char *VAR_18;

      VAR_16 = VAR_5;
      VAR_17 = VAR_6;
      FUNC_21 (VAR_2, VAR_13);
      FUNC_22 (VAR_2, 0);

      if (VAR_13)

 FUNC_16 (VAR_13, 0, 0);


      if (FUNC_3 (VAR_15) == VAR_2)
 VAR_15->sy_frag->fr_symbol = ((void*)0);

      VAR_15->sy_frag = VAR_3;
      VAR_18 = FUNC_17 (VAR_7, 1, 1, (relax_substateT) 0, VAR_15,
   (offsetT) VAR_14, (char *) 0);
      *VAR_18 = 0;

      FUNC_10 (VAR_15, VAR_14);
      FUNC_9 (VAR_15, VAR_2);
      FUNC_1 (VAR_15);
      VAR_15->local = 1;
      FUNC_22 (VAR_16, VAR_17);
    }
  else
    {
      FUNC_11 (VAR_15, (valueT) VAR_14);
      FUNC_7 (VAR_15, VAR_13);
      FUNC_8 (VAR_15);
      FUNC_9 (VAR_15, VAR_1);
    }

  VAR_15->bsym->flags |= VAR_0;

  FUNC_15 ();
}
