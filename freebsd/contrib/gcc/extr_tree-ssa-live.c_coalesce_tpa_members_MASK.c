
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var_map ;
typedef int tree ;
typedef int tpa_p ;
typedef int conflict_graph ;
typedef scalar_t__ coalesce_list_p ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int*,int*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;

void
FUNC_13 (tpa_p VAR_4, conflict_graph VAR_5, var_map VAR_6,
        coalesce_list_p VAR_7, FILE *VAR_8)
{
  int VAR_9, VAR_10, VAR_11, VAR_12;
  tree VAR_13, VAR_14;


  if (VAR_7)
    {
      while (FUNC_4 (VAR_7, &VAR_9, &VAR_10) != VAR_0)
        {
   if (VAR_8)
     {
       FUNC_2 (VAR_8, "Coalesce list: (%d)", VAR_9);
       FUNC_5 (VAR_8, FUNC_3 (VAR_6, VAR_9), VAR_2);
       FUNC_2 (VAR_8, " & (%d)", VAR_10);
       FUNC_5 (VAR_8, FUNC_3 (VAR_6, VAR_10), VAR_2);
     }

   VAR_12 = FUNC_6 (VAR_4, VAR_9);
   VAR_11 = FUNC_6 (VAR_4, VAR_10);
   if (VAR_12 != VAR_11 || VAR_12 == VAR_3 || VAR_11 == VAR_3)
     {
       if (VAR_8)
  {
    if (VAR_12 != VAR_11)
      FUNC_2 (VAR_8, ": Fail, Non-matching TPA's\n");
    if (VAR_12 == VAR_3)
      FUNC_2 (VAR_8, ": Fail %d non TPA.\n", VAR_9);
    else
      FUNC_2 (VAR_8, ": Fail %d non TPA.\n", VAR_10);
  }
       continue;
     }
   VAR_13 = FUNC_3 (VAR_6, VAR_9);
   VAR_14 = FUNC_3 (VAR_6, VAR_10);
   VAR_9 = FUNC_11 (VAR_6, VAR_13);
   VAR_10 = FUNC_11 (VAR_6, VAR_14);
   if (VAR_8)
     FUNC_2 (VAR_8, " [map: %d, %d] ", VAR_9, VAR_10);
   if (VAR_9 == VAR_10)
     {
       if (VAR_8)
  FUNC_2 (VAR_8, ": Already Coalesced.\n");
       continue;
     }
   if (!FUNC_0 (VAR_5, VAR_9, VAR_10))
     {
       VAR_11 = FUNC_12 (VAR_6, VAR_13, VAR_14);
       if (VAR_11 == VAR_1)
         {
    if (VAR_8)
      FUNC_2 (VAR_8, ": Unable to perform partition union.\n");
    continue;
  }



       if (VAR_11 == VAR_9)
         {
    FUNC_1 (VAR_5, VAR_9, VAR_10);
    VAR_12 = FUNC_6 (VAR_4, VAR_10);
    FUNC_10 (VAR_4, VAR_12, VAR_10);
  }
       else
         {
    FUNC_1 (VAR_5, VAR_10, VAR_9);
    VAR_12 = FUNC_6 (VAR_4, VAR_9);
    FUNC_10 (VAR_4, VAR_12, VAR_9);
  }

       if (VAR_8)
  FUNC_2 (VAR_8, ": Success -> %d\n", VAR_11);
     }
   else
     if (VAR_8)
       FUNC_2 (VAR_8, ": Fail due to conflict\n");
 }

      return;
    }

  for (VAR_9 = 0; VAR_9 < FUNC_9 (VAR_4); VAR_9++)
    {
      while (FUNC_7 (VAR_4, VAR_9) != VAR_3)
        {
   int VAR_15, VAR_16;

   VAR_10 = FUNC_7 (VAR_4, VAR_9);
   FUNC_10 (VAR_4, VAR_9, VAR_10);

   VAR_13 = FUNC_3 (VAR_6, VAR_10);

   VAR_15 = FUNC_11 (VAR_6, VAR_13);

   for (VAR_11 = FUNC_8 (VAR_4, VAR_10);
        VAR_11 != VAR_3;
        VAR_11 = FUNC_8 (VAR_4, VAR_11))
     {
       VAR_14 = FUNC_3 (VAR_6, VAR_11);

       VAR_16 = FUNC_11 (VAR_6, VAR_14);
       if (VAR_8)
  {
    FUNC_2 (VAR_8, "Coalesce : ");
    FUNC_5 (VAR_8, VAR_13, VAR_2);
    FUNC_2 (VAR_8, " &");
    FUNC_5 (VAR_8, VAR_14, VAR_2);
    FUNC_2 (VAR_8, "  (%d ,%d)", VAR_15, VAR_16);
  }


       if (VAR_14 == VAR_13)
         {
    FUNC_10 (VAR_4, VAR_9, VAR_11);
    if (VAR_8)
      FUNC_2 (VAR_8, ": Already coalesced\n");
  }
       else
  if (!FUNC_0 (VAR_5, VAR_15, VAR_16))
    {
      int VAR_17;
      if (FUNC_6 (VAR_4, VAR_10) == VAR_3
   || FUNC_6 (VAR_4, VAR_11) == VAR_3)
        {
   if (VAR_8)
     FUNC_2 (VAR_8, ": Fail non-TPA member\n");
   continue;
        }
      if ((VAR_17 = FUNC_12 (VAR_6, VAR_13, VAR_14)) == VAR_1)
        {
   if (VAR_8)
     FUNC_2 (VAR_8, ": Fail cannot combine partitions\n");
   continue;
        }

      FUNC_10 (VAR_4, VAR_9, VAR_11);
      if (VAR_17 == VAR_15)
        FUNC_1 (VAR_5, VAR_17, VAR_11);
      else
        {

   FUNC_1 (VAR_5, VAR_17, VAR_10);
   VAR_15 = VAR_17;
        }



      VAR_13 = FUNC_3 (VAR_6, VAR_15);

      if (VAR_8)
        FUNC_2 (VAR_8, ": Success -> %d\n", VAR_17);
    }
  else
    if (VAR_8)
      FUNC_2 (VAR_8, ": Fail, Conflict\n");
     }
 }
    }
}
