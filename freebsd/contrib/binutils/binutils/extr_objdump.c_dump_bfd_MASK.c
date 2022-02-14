
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_24__ {int flags; TYPE_1__* xvec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_23__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 char* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__,int *,scalar_t__,int *,int **) ;
 int FUNC_4 (TYPE_2__*,int ,int*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int ) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int * VAR_21 ;
 int VAR_22 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (int ,TYPE_2__*,int ) ;
 int FUNC_18 (int ,void*,TYPE_2__*,int *,int ,int ) ;
 int FUNC_19 (char*,char*,char*) ;
 int FUNC_20 (char) ;
 void* FUNC_21 (TYPE_2__*,int *,scalar_t__) ;
 int * FUNC_22 (TYPE_2__*) ;
 int * FUNC_23 (TYPE_2__*) ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int * VAR_25 ;
 scalar_t__ VAR_26 ;
 int * VAR_27 ;

__attribute__((used)) static void
FUNC_24 (bfd *VAR_28)
{



  if (VAR_4 != 0)
    {
      bfd_boolean VAR_29 = (VAR_28->flags & VAR_1);
      FUNC_4 (VAR_28, VAR_3, &VAR_29);
    }

  if (! VAR_9)
    FUNC_19 (FUNC_0("\n%s:     file format %s\n"), FUNC_2 (VAR_28),
     VAR_28->xvec->name);
  if (VAR_7)
    FUNC_17 (VAR_23, VAR_28, VAR_2);
  if (VAR_13)
    FUNC_6 (VAR_28);
  if (VAR_14)
    FUNC_7 (VAR_28);
  if (! VAR_9)
    FUNC_20 ('\n');
  if (VAR_17)
    FUNC_11 (VAR_28);

  if (VAR_19
      || VAR_15
      || VAR_6
      || VAR_8
      || VAR_10)
    VAR_25 = FUNC_23 (VAR_28);
  if (VAR_12 || VAR_11
      || (VAR_6 && FUNC_1 (VAR_28) > 0))
    VAR_21 = FUNC_22 (VAR_28);
  if (VAR_6)
    {
      VAR_26 = FUNC_3 (VAR_28, VAR_24, VAR_25,
          VAR_20, VAR_21, &VAR_27);
      if (VAR_26 < 0)
 VAR_26 = 0;
    }

  if (VAR_19)
    FUNC_14 (VAR_28, VAR_0);
  if (VAR_12)
    FUNC_14 (VAR_28, VAR_2);
  if (VAR_10)
    FUNC_9 (VAR_28);
  if (VAR_18)
    FUNC_13 (VAR_28);
  if (VAR_15 && ! VAR_6)
    FUNC_12 (VAR_28);
  if (VAR_11 && ! VAR_6)
    FUNC_10 (VAR_28);
  if (VAR_16)
    FUNC_8 (VAR_28);
  if (VAR_6)
    FUNC_5 (VAR_28);

  if (VAR_8)
    {
      void *VAR_30;

      VAR_30 = FUNC_21 (VAR_28, VAR_25, VAR_24);
      if (VAR_30 != ((void*)0))
 {
   if (!FUNC_18 (VAR_23, VAR_30, VAR_28, VAR_25,
         VAR_5,
         VAR_9 ? VAR_2 : VAR_0))
     {
       FUNC_16 (FUNC_0("%s: printing debugging information failed"),
    FUNC_2 (VAR_28));
       VAR_22 = 1;
     }
 }
    }

  if (VAR_25)
    {
      FUNC_15 (VAR_25);
      VAR_25 = ((void*)0);
    }

  if (VAR_21)
    {
      FUNC_15 (VAR_21);
      VAR_21 = ((void*)0);
    }

  if (VAR_27)
    {
      FUNC_15 (VAR_27);
      VAR_27 = ((void*)0);
    }

  VAR_24 = 0;
  VAR_20 = 0;
  VAR_26 = 0;
}
