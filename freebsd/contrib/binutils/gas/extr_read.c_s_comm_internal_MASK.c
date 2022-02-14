
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int valueT ;
typedef int symbolS ;
typedef int offsetT ;
struct TYPE_6__ {scalar_t__ X_op; int X_unsigned; } ;
typedef TYPE_2__ expressionS ;
struct TYPE_7__ {TYPE_1__* arch_info; } ;
struct TYPE_5__ {int bits_per_address; } ;
typedef int S_GET_OTHER ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,...) ;
 int FUNC_11 (int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 () ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (TYPE_2__*) ;
 char FUNC_14 () ;
 int FUNC_15 () ;
 char* VAR_4 ;
 int FUNC_16 (char*,char) ;
 char* FUNC_17 (char*) ;
 TYPE_3__* VAR_5 ;
 int * FUNC_18 (int,int *,...) ;
 int * FUNC_19 (int *,int) ;
 scalar_t__ FUNC_20 (int *) ;
 int * FUNC_21 (char*) ;
 int FUNC_22 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;

symbolS *
FUNC_23 (int VAR_8,
   symbolS *(*VAR_9) (int, symbolS *, VAR_10))
{
  char *VAR_11;
  char VAR_12;
  char *VAR_13;
  offsetT VAR_14, VAR_15;
  symbolS *VAR_16 = ((void*)0);
  char *VAR_17 = ((void*)0);
  char VAR_18 = 0;
  expressionS VAR_19;

  if (VAR_3)
    VAR_17 = FUNC_17 (&VAR_18);

  VAR_11 = VAR_4;
  VAR_12 = FUNC_14 ();

  VAR_13 = VAR_4;
  *VAR_13 = VAR_12;

  if (VAR_11 == VAR_13)
    {
      FUNC_10 (FUNC_9("expected symbol name"));
      FUNC_15 ();
      goto out;
    }

  FUNC_0 ();



  if (*VAR_4 == ',')
    VAR_4++;

  VAR_14 = FUNC_13 (&VAR_19);
  VAR_15 = VAR_14;
  VAR_15 &= ((offsetT) 2 << (VAR_5->arch_info->bits_per_address - 1)) - 1;
  if (VAR_19.X_op == VAR_0)
    {
      FUNC_10 (FUNC_9("missing size expression"));
      FUNC_15 ();
      goto out;
    }
  else if (VAR_14 != VAR_15 || !VAR_19.X_unsigned)
    {
      FUNC_11 (FUNC_9("size (%ld) out of range, ignored"), (long) VAR_14);
      FUNC_15 ();
      goto out;
    }

  *VAR_13 = 0;
  VAR_16 = FUNC_21 (VAR_11);
  if ((FUNC_4 (VAR_16) || FUNC_20 (VAR_16))
      && !FUNC_3 (VAR_16))
    {
      if (!FUNC_5 (VAR_16))
 {
   VAR_16 = ((void*)0);
   FUNC_10 (FUNC_9("symbol `%s' is already defined"), VAR_11);
   *VAR_13 = VAR_12;
   FUNC_15 ();
   goto out;
 }
      VAR_16 = FUNC_19 (VAR_16, 1);
      FUNC_7 (VAR_16, VAR_6);
      FUNC_8 (VAR_16, 0);
      FUNC_22 (VAR_16, &VAR_7);
      FUNC_1 (VAR_16);
    }

  VAR_15 = FUNC_2 (VAR_16);
  if (VAR_15 == 0)
    VAR_15 = VAR_14;
  else if (VAR_15 != VAR_14)
    FUNC_11 (FUNC_9("size of \"%s\" is already %ld; not changing to %ld"),
      VAR_11, (long) VAR_15, (long) VAR_14);

  *VAR_13 = VAR_12;
  if (VAR_9 != ((void*)0))
    VAR_16 = (*VAR_9) (VAR_8, VAR_16, VAR_15);
  else
    {
      FUNC_8 (VAR_16, (valueT) VAR_15);
      FUNC_6 (VAR_16);
      FUNC_7 (VAR_16, VAR_1);







    }

  FUNC_12 ();
 out:
  if (VAR_3)
    FUNC_16 (VAR_17, VAR_18);
  return VAR_16;
}
