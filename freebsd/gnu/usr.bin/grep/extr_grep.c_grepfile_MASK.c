
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int st_mode; } ;
struct stats {TYPE_1__ stat; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_9 ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int ,int,char*,char const*) ;
 int FUNC_6 (int,int ,...) ;
 char* VAR_17 ;
 char VAR_18 ;
 int FUNC_7 (int,char const*,struct stats*) ;
 int FUNC_8 (char const*,struct stats*) ;
 int VAR_19 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int,char const*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char const*) ;
 char* VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_13 (int,scalar_t__,int ) ;
 int FUNC_14 (char const*,int) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_15 (char*,...) ;
 scalar_t__ FUNC_16 (char const*,TYPE_1__*) ;
 int VAR_24 ;
 int FUNC_17 (char const*,int) ;

__attribute__((used)) static int
FUNC_18 (char const *VAR_25, struct stats *VAR_26)
{
  int VAR_27;
  int VAR_28;
  int VAR_29;
  int VAR_30;

  if (! VAR_25)
    {
      VAR_27 = 0;
      VAR_17 = VAR_20 ? VAR_20 : FUNC_3("(standard input)");
    }
  else
    {
      while ((VAR_27 = FUNC_14 (VAR_25, VAR_5 | VAR_4)) < 0 && VAR_16 == VAR_1)
 continue;

      if (VAR_27 < 0)
 {
   int VAR_31 = VAR_16;

   if (FUNC_10 (VAR_31, VAR_25) && VAR_15 == VAR_6)
     {
       if (FUNC_16 (VAR_25, &VAR_26->stat) != 0)
  {
    FUNC_5 (0, VAR_16, "%s", VAR_25);
    return 1;
  }

       return FUNC_8 (VAR_25, VAR_26);
     }

   if (!VAR_24)
     {
       if (VAR_15 == VAR_8)
  switch (VAR_31)
    {

    case 128:
      return 1;

    case 129:


      if (FUNC_12 (VAR_25))
        return 1;
      break;
    }
     }

   FUNC_17 (VAR_25, VAR_31);
   return 1;
 }

      VAR_30 = FUNC_6(VAR_27, VAR_2);
      VAR_30 &= ~VAR_4;
      FUNC_6(VAR_27, VAR_3, VAR_30);
      VAR_17 = VAR_25;
    }
  VAR_28 = FUNC_7 (VAR_27, VAR_25, VAR_26);
  if (VAR_28 < 0)
    VAR_29 = VAR_28 + 2;
  else
    {
      if (VAR_14)
 {
   if (VAR_22)
     FUNC_15 ("%s%c", VAR_17, ':' & VAR_18);
   FUNC_15 ("%d\n", VAR_28);
 }

      VAR_29 = !VAR_28;
      if (VAR_21 == 1 - 2 * VAR_29)
 FUNC_15 ("%s%c", VAR_17, '\n' & VAR_18);

      if (VAR_0 && VAR_13)
 FUNC_0(VAR_13);
      else





      if (! VAR_25)
 {
   off_t VAR_32 = VAR_23 ? VAR_12 : VAR_10;
   if ((VAR_11 || VAR_32 != VAR_12)
       && FUNC_13 (VAR_27, VAR_32, VAR_7) < 0
       && FUNC_2 (VAR_26->stat.st_mode))
     FUNC_5 (0, VAR_16, "%s", VAR_17);
 }
      else
 while (FUNC_4 (VAR_27) != 0)
   if (VAR_16 != VAR_1)
     {
       FUNC_5 (0, VAR_16, "%s", VAR_25);
       break;
     }
    }

  return VAR_29;
}
