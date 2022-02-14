
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 char* FUNC_15 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (int ,char const*) ;
 int FUNC_21 (int ,scalar_t__) ;
 int FUNC_22 (int ,char*) ;
 int FUNC_23 (int ,char*,char const*) ;

__attribute__((used)) static void
FUNC_24 (tree VAR_7, int VAR_8)
{
  tree VAR_9;
  const char *VAR_10 = FUNC_15 (VAR_7);
  int VAR_11 = 0;
  int VAR_12 = 0;

  FUNC_19 (VAR_6, VAR_7);

  if (VAR_8 & VAR_3)
    FUNC_20 (VAR_6, VAR_10);

  if (VAR_8 & VAR_2)
    VAR_7 = FUNC_12 (VAR_7);

  VAR_9 = FUNC_13 (VAR_7);

  if (VAR_9)
    {
      VAR_11 = !FUNC_5 (VAR_9);
      VAR_12 = !VAR_11 && FUNC_10 (VAR_7) != VAR_0
  && FUNC_11 (VAR_7) && FUNC_1 (VAR_7)
  && (FUNC_10 (FUNC_2 (VAR_7)) != VAR_1
      || FUNC_9 (FUNC_2 (VAR_7)));
      FUNC_16 (FUNC_4 (VAR_9), VAR_8 | VAR_4);
      if (VAR_12)
 {


   tree VAR_13 = FUNC_2 (VAR_7);

   while (FUNC_7 (VAR_13))
     VAR_13 = FUNC_8 (VAR_13);
   VAR_9 = VAR_13;
 }
      VAR_9 = FUNC_6 (VAR_9);
    }

  if (VAR_9 == 0 || FUNC_0 (VAR_9))
    {
      if (VAR_8 & VAR_3)
 FUNC_22 (VAR_6, "<anonymous>");
      else
 FUNC_23 (FUNC_18 (VAR_6), "<anonymous %s>", VAR_10);
    }
  else
    FUNC_21 (VAR_6, VAR_9);
  if (VAR_12)
    FUNC_17 (FUNC_14 (VAR_7),
    !FUNC_3 (VAR_7),
    VAR_8 & ~VAR_5);
}
