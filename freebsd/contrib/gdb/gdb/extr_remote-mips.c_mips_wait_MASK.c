
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int integer; void* sig; } ;
struct target_waitstatus {TYPE_1__ value; void* kind; } ;
typedef int ptid_t ;
struct TYPE_4__ {scalar_t__ addr; scalar_t__ type; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (scalar_t__,char**,scalar_t__*,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_2__* VAR_16 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (char,int ,int ,int*,int,char*) ;
 void* FUNC_6 (int) ;
 int VAR_19 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char*,int*,int*,int*,char*) ;
 int FUNC_10 (char*,int ,int) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (int,char*) ;
 char* VAR_20 ;

__attribute__((used)) static ptid_t
FUNC_13 (ptid_t VAR_21, struct target_waitstatus *VAR_22)
{
  int VAR_23;
  int VAR_24;
  char VAR_25[VAR_1];
  int VAR_26, VAR_27, VAR_28;
  char VAR_29[20];
  int VAR_30;
  int VAR_31;

  VAR_15 = 0;
  VAR_13 = 0;




  if (!VAR_18)
    {
      VAR_22->kind = VAR_11;
      VAR_22->value.sig = VAR_8;
      return VAR_14;
    }


  VAR_19 = 1;
  VAR_23 = FUNC_5 ('\000', 0, 0, &VAR_24, -1, VAR_25);
  VAR_19 = 0;
  if (VAR_24)
    FUNC_3 ("Remote failure: %s", FUNC_8 (VAR_12));
  if (VAR_17 == VAR_5)
    {
      FUNC_4 ();
      FUNC_2 ();
    }



  VAR_30 = FUNC_9 (VAR_25, "0x%*x %*c 0x%*x 0x%*x 0x%x 0x%x 0x%x 0x%*x %s",
      &VAR_26, &VAR_27, &VAR_28, VAR_29);
  if (VAR_30 >= 3)
    {
      char VAR_32[VAR_4];

      FUNC_10 (VAR_32, FUNC_0 (VAR_6), VAR_26);
      FUNC_12 (VAR_6, VAR_32);

      FUNC_10 (VAR_32, FUNC_0 (VAR_6), VAR_27);
      FUNC_12 (30, VAR_32);

      FUNC_10 (VAR_32, FUNC_0 (VAR_7), VAR_28);
      FUNC_12 (VAR_7, VAR_32);

      FUNC_10 (VAR_32, FUNC_0 (VAR_2), 0);
      FUNC_12 (VAR_2, VAR_32);

      if (VAR_30 == 9)
 {
   int VAR_33;

   for (VAR_33 = 0; VAR_33 <= 2; VAR_33++)
     if (VAR_29[VAR_33] == 'r' || VAR_29[VAR_33] == 'w')
       VAR_13 = 1;
     else if (VAR_29[VAR_33] == '\000')
       break;
 }
    }

  if (FUNC_11 (VAR_20, "lsi") == 0)
    {
      if (VAR_30 == 1 && VAR_26 == 1)
 VAR_13 = 1;

    }
  if ((VAR_23 & 0xff) == 0)
    {
      VAR_22->kind = VAR_9;
      VAR_22->value.integer = (((VAR_23) >> 8) & 0xff);
    }
  else if ((VAR_23 & 0xff) == 0x7f)
    {
      VAR_22->kind = VAR_11;
      VAR_22->value.sig = FUNC_6 (((VAR_23) >> 8) & 0xff);




      if (FUNC_11 (VAR_20, "lsi") == 0)
 {
   char *VAR_34;
   CORE_ADDR VAR_35;
   CORE_ADDR VAR_36 = FUNC_7 ();

   FUNC_1 (VAR_36, &VAR_34, &VAR_35, ((void*)0));
   if (VAR_34 != ((void*)0) && FUNC_11 (VAR_34, "_exit") == 0
       && VAR_35 == VAR_36)
     VAR_22->kind = VAR_9;
 }
    }
  else
    {
      VAR_22->kind = VAR_10;
      VAR_22->value.sig = FUNC_6 (VAR_23 & 0x7f);
    }

  return VAR_14;
}
