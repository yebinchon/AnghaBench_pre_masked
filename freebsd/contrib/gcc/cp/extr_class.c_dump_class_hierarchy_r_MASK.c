
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 char* FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (int *,char*,...) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int *,int,int) ;
 int FUNC_17 (int ,int ) ;
 char* FUNC_18 (int ,int ) ;

__attribute__((used)) static tree
FUNC_19 (FILE *VAR_3,
   int VAR_4,
   tree VAR_5,
   tree VAR_6,
   int VAR_7)
{
  int VAR_8 = 0;
  tree VAR_9;
  int VAR_10;

  VAR_8 = FUNC_16 (VAR_3, VAR_7, 0);
  FUNC_14 (VAR_3, "%s (0x%lx) ",
    FUNC_18 (FUNC_6 (VAR_5), VAR_2),
    (unsigned long) VAR_5);
  if (VAR_5 != VAR_6)
    {
      FUNC_14 (VAR_3, "alternative-path\n");
      return VAR_6;
    }
  VAR_6 = FUNC_12 (VAR_5);

  FUNC_14 (VAR_3, VAR_0,
    FUNC_17 (FUNC_3 (VAR_5), 0));
  if (FUNC_15 (FUNC_6 (VAR_5)))
    FUNC_14 (VAR_3, " empty");
  else if (FUNC_11 (FUNC_6 (VAR_5)))
    FUNC_14 (VAR_3, " nearly-empty");
  if (FUNC_7 (VAR_5))
    FUNC_14 (VAR_3, " virtual");
  FUNC_14 (VAR_3, "\n");

  VAR_8 = 0;
  if (FUNC_4 (VAR_5))
    {
      VAR_8 = FUNC_16 (VAR_3, VAR_7 + 3, VAR_8);
      FUNC_14 (VAR_3, " primary-for %s (0x%lx)",
        FUNC_18 (FUNC_6 (FUNC_1 (VAR_5)),
          VAR_2),
        (unsigned long)FUNC_1 (VAR_5));
    }
  if (FUNC_2 (VAR_5))
    {
      VAR_8 = FUNC_16 (VAR_3, VAR_7 + 3, VAR_8);
      FUNC_14 (VAR_3, " lost-primary");
    }
  if (VAR_8)
    FUNC_14 (VAR_3, "\n");

  if (!(VAR_4 & VAR_1))
    {
      int VAR_11 = 0;

      if (FUNC_5 (VAR_5))
 {
   VAR_11 = FUNC_16 (VAR_3, VAR_7 + 3, VAR_11);
   FUNC_14 (VAR_3, " subvttidx=%s",
     FUNC_13 (FUNC_5 (VAR_5),
       VAR_2));
 }
      if (FUNC_9 (VAR_5))
 {
   VAR_11 = FUNC_16 (VAR_3, VAR_7 + 3, VAR_11);
   FUNC_14 (VAR_3, " vptridx=%s",
     FUNC_13 (FUNC_9 (VAR_5),
       VAR_2));
 }
      if (FUNC_8 (VAR_5))
 {
   VAR_11 = FUNC_16 (VAR_3, VAR_7 + 3, VAR_11);
   FUNC_14 (VAR_3, " vbaseoffset=%s",
     FUNC_13 (FUNC_8 (VAR_5),
       VAR_2));
 }
      if (FUNC_10 (VAR_5))
 {
   VAR_11 = FUNC_16 (VAR_3, VAR_7 + 3, VAR_11);
   FUNC_14 (VAR_3, " vptr=%s",
     FUNC_13 (FUNC_10 (VAR_5),
       VAR_2));
 }

      if (VAR_11)
 FUNC_14 (VAR_3, "\n");
    }

  for (VAR_10 = 0; FUNC_0 (VAR_5, VAR_10, VAR_9); VAR_10++)
    VAR_6 = FUNC_19 (VAR_3, VAR_4, VAR_9, VAR_6, VAR_7 + 2);

  return VAR_6;
}
