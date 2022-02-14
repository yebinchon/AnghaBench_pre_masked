
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int st_mode; } ;
struct stats {TYPE_1__ stat; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 char VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ,int ,char*,char const*) ;
 char* VAR_14 ;
 int FUNC_6 (size_t,struct stats*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char const*,struct stats*) ;
 int VAR_15 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char const*) ;
 char* VAR_16 ;
 char* VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_11 (char*,char,int) ;
 int FUNC_12 (char*) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int,char const*,struct stats*) ;
 int FUNC_16 (char*,int ) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;

__attribute__((used)) static int
FUNC_17 (int VAR_28, char const *VAR_29, struct stats *VAR_30)
{
  int VAR_31, VAR_32;
  int VAR_33;
  size_t VAR_34, VAR_35;
  char VAR_36;
  char *VAR_37;
  char *VAR_38;
  char VAR_39 = VAR_12;

  if (!FUNC_15 (VAR_28, VAR_29, VAR_30))
    return 0;

  if (VAR_29 && VAR_10 == VAR_2
      && FUNC_1 (VAR_30->stat.st_mode))
    {


      if (VAR_1 && VAR_9)
 FUNC_0(VAR_9);
      else





      if (FUNC_4 (VAR_28) != 0)
 FUNC_5 (0, VAR_13, "%s", VAR_29);
      return FUNC_8 (VAR_29, VAR_30) - 2;
    }

  VAR_26 = 0;
  VAR_17 = 0;
  VAR_27 = 0;
  VAR_24 = VAR_18;
  VAR_5 = 0;
  VAR_25 = 0;

  VAR_31 = 0;
  VAR_34 = 0;
  VAR_35 = 0;

  if (! FUNC_6 (VAR_35, VAR_30))
    {
      if (! FUNC_10 (VAR_13, VAR_29))
 FUNC_16 (VAR_14, VAR_13);
      return 0;
    }

  VAR_33 = (((VAR_6 == VAR_0 && !VAR_23)
        || VAR_6 == VAR_3)
       && FUNC_11 (VAR_7, VAR_39 ? '\0' : '\200', VAR_8 - VAR_7));
  if (VAR_33 && VAR_6 == VAR_3)
    return 0;
  VAR_11 += VAR_33;
  VAR_23 += VAR_33;

  for (;;)
    {
      VAR_16 = VAR_7;
      if (VAR_17)
 VAR_17 = VAR_7;

      VAR_37 = VAR_7 + VAR_35;


      if (VAR_37 == VAR_8)
 break;



      VAR_36 = VAR_37[-1];
      VAR_37[-1] = VAR_39;
      for (VAR_38 = VAR_8; VAR_38[-1] != VAR_39; VAR_38--)
 continue;
      VAR_37[-1] = VAR_36;
      if (VAR_38 == VAR_37)
 VAR_38 = VAR_37 - VAR_34;
      VAR_37 -= VAR_34;
      VAR_34 = VAR_8 - VAR_38;

      if (VAR_37 < VAR_38)
 {
   if (VAR_24)
     VAR_31 += FUNC_7 (VAR_37, VAR_38);
   if (VAR_25)
     FUNC_14 (VAR_38);
   if((!VAR_24 && !VAR_25) || (VAR_31 && VAR_11 && !VAR_21))
     goto finish_grep;
 }




      VAR_32 = 0;
      VAR_37 = VAR_38;
      while (VAR_32 < VAR_19 && VAR_37 > VAR_7 && VAR_37 != VAR_17)
 {
   ++VAR_32;
   do
     --VAR_37;
   while (VAR_37[-1] != VAR_39);
 }


      if (VAR_37 != VAR_17)
 VAR_17 = 0;


      VAR_35 = VAR_34 + VAR_38 - VAR_37;
      if (VAR_20)
 VAR_26 = FUNC_3 (VAR_26, VAR_8 - VAR_7 - VAR_35);
      if (VAR_22)
 FUNC_12 (VAR_37);
      if (! FUNC_6 (VAR_35, VAR_30))
 {
   if (! FUNC_10 (VAR_13, VAR_29))
     FUNC_16 (VAR_14, VAR_13);
   goto finish_grep;
 }
    }
  if (VAR_34)
    {
      *VAR_8++ = VAR_39;
      if (VAR_24)
 VAR_31 += FUNC_7 (VAR_7 + VAR_35 - VAR_34, VAR_8);
      if (VAR_25)
        FUNC_14 (VAR_8);
    }

 finish_grep:
  VAR_11 -= VAR_33;
  VAR_23 -= VAR_33;
  if ((VAR_33 & ~VAR_23) && VAR_31 != 0)
    FUNC_13 (FUNC_2("Binary file %s matches\n"), VAR_14);
  return VAR_31;
}
