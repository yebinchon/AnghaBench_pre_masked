
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inheritance {int flags; int pgroup; int nd; } ;
typedef int sigset_t ;
typedef int pid_t ;
typedef int inherit ;
typedef int flags ;
struct TYPE_2__ {int * obfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_2 (char*,char**) ;
 int FUNC_3 (int) ;
 int VAR_19 ;
 int FUNC_4 (int ,int ,int*,int,int ) ;
 int FUNC_5 (int ) ;
 char* VAR_20 ;
 int FUNC_6 (char*,char*,char*,int ) ;
 int * VAR_21 ;
 char* FUNC_7 (int) ;
 char* VAR_22 ;
 int VAR_23 ;
 int FUNC_8 (struct inheritance*,int ,int) ;
 int FUNC_9 () ;
 char** FUNC_10 (char**,char**,char**,char**) ;
 int VAR_24 ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int) ;
 int VAR_25 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int *,int *) ;
 int FUNC_20 (char*,int,int*,struct inheritance*,char**,char**) ;
 int FUNC_21 (char*) ;
 TYPE_1__* VAR_26 ;
 int FUNC_22 () ;
 int FUNC_23 (char*) ;
 char** FUNC_24 (int) ;
 char* FUNC_25 (char*) ;

__attribute__((used)) static void
FUNC_26 (char *VAR_27, char *VAR_28, char **VAR_29)
{
  struct inheritance VAR_30;
  pid_t VAR_31;
  int VAR_32, VAR_33;
  char **VAR_34, *VAR_35;
  char *VAR_36 = "", *VAR_37 = "", *VAR_38 = "";
  int VAR_39, VAR_40[3];
  sigset_t VAR_41;

  VAR_34 = FUNC_24 (((FUNC_21 (VAR_28) + 1) / (unsigned) 2 + 2) *
    sizeof (*VAR_34));
  VAR_34[0] = FUNC_7 (1);
  if (!VAR_34[0])
    {
      if (VAR_27)
 VAR_34[0] = VAR_27;
      else
 return;
    }

  VAR_35 = FUNC_25 (VAR_28);
  FUNC_2 (VAR_35, VAR_27 ? &VAR_34[1] : &VAR_34[0]);

  VAR_34 = FUNC_10 (VAR_34, &VAR_36, &VAR_37, &VAR_38);

  VAR_40[0] = VAR_15;
  VAR_40[1] = VAR_16;
  VAR_40[2] = VAR_14;



  if (VAR_22)
    {
      if (!VAR_36[0])
 VAR_36 = VAR_22;
      if (!VAR_37[0])
 VAR_37 = VAR_22;
      if (!VAR_38[0])
 VAR_38 = VAR_22;
    }

  if (VAR_36[0])
    {
      VAR_39 = FUNC_11 (VAR_36, VAR_3);
      if (VAR_39 == -1)
 FUNC_12 (VAR_36);
      else
 VAR_40[0] = VAR_39;
    }
  if (VAR_37[0])
    {
      VAR_39 = FUNC_11 (VAR_37, VAR_4);
      if (VAR_39 == -1)
 FUNC_12 (VAR_37);
      else
 VAR_40[1] = VAR_39;
    }
  if (VAR_38[0])
    {
      VAR_39 = FUNC_11 (VAR_38, VAR_4);
      if (VAR_39 == -1)
 FUNC_12 (VAR_38);
      else
 VAR_40[2] = VAR_39;
    }


  FUNC_18 (VAR_5, FUNC_18 (VAR_5, VAR_7));

  FUNC_17 (&VAR_41);
  FUNC_16 (&VAR_41, VAR_5);
  FUNC_19 (VAR_8, &VAR_41, ((void*)0));

  FUNC_8 (&VAR_30, 0, sizeof (VAR_30));

  if (FUNC_0 (VAR_24, VAR_2) != 0)
    {
      VAR_30.nd = FUNC_9();
      VAR_30.flags |= VAR_13;
      VAR_30.flags &= ~VAR_9;
    }
  VAR_30.flags |= VAR_12 | VAR_10;
  VAR_30.pgroup = VAR_11;
  VAR_31 = FUNC_20 (VAR_34[0], 3, VAR_40, &VAR_30, VAR_34,
  FUNC_0 (VAR_24, VAR_2) == 0 ? VAR_29 : 0);
  FUNC_23 (VAR_35);

  FUNC_19 (VAR_6, &VAR_41, ((void*)0));

  if (VAR_31 == -1)
    FUNC_6 ("Error spawning %s: %d (%s)", VAR_34[0], VAR_20, FUNC_15 (VAR_20));

  if (VAR_40[0] != VAR_15)
    FUNC_3 (VAR_40[0]);
  if (VAR_40[1] != VAR_16)
    FUNC_3 (VAR_40[1]);
  if (VAR_40[2] != VAR_14)
    FUNC_3 (VAR_40[2]);

  VAR_23 = FUNC_5 (FUNC_13 (VAR_31));

  VAR_18 = 0;
  VAR_32 = VAR_17;
  VAR_33 = FUNC_4 (VAR_19, VAR_0, &VAR_32, sizeof (VAR_32), 0);
  if (VAR_33 != VAR_1)
    {



    }
  FUNC_14 (&VAR_25);
  FUNC_22 ();






}
