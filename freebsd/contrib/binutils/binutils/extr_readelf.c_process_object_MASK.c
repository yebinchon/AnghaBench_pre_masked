
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_list {struct group_list* next; struct group_list* root; } ;
typedef int FILE ;


 unsigned int FUNC_0 (scalar_t__*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;
 struct group_list* VAR_10 ;
 scalar_t__ VAR_11 ;
 struct group_list* VAR_12 ;
 struct group_list* VAR_13 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct group_list*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 unsigned int VAR_14 ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 struct group_list* VAR_18 ;
 int FUNC_24 (scalar_t__,int ) ;
 struct group_list* VAR_19 ;
 struct group_list* VAR_20 ;
 struct group_list* VAR_21 ;
 scalar_t__ VAR_22 ;
 struct group_list* VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__* VAR_25 ;

__attribute__((used)) static int
FUNC_25 (char *VAR_26, FILE *VAR_27)
{
  unsigned int VAR_28;

  if (! FUNC_6 (VAR_27))
    {
      FUNC_3 (FUNC_1("%s: Failed to read file header\n"), VAR_26);
      return 1;
    }


  for (VAR_28 = FUNC_0 (VAR_25); VAR_28--;)
    VAR_25[VAR_28] = 0;

  for (VAR_28 = FUNC_0 (VAR_9); VAR_28--;)
    VAR_9[VAR_28] = 0;


  if (VAR_22)
    FUNC_9 (FUNC_1("\nFile: %s\n"), VAR_26);





  if (VAR_16 > VAR_15)
    FUNC_8 (VAR_8, 0, VAR_16);

  if (VAR_15 > 0)
    {
      if (VAR_16 == 0)

 FUNC_24 (VAR_15, 0);

      FUNC_2 (VAR_16 >= VAR_15);
      FUNC_7 (VAR_8, VAR_0, VAR_15);
    }

  if (! FUNC_12 ())
    return 1;

  if (! FUNC_19 (VAR_27))
    {


      VAR_5 = VAR_7 = VAR_2 = VAR_1 = 0;

      if (! VAR_6)
 VAR_4 = VAR_3 = 0;
    }

  if (! FUNC_18 (VAR_27))
    {

      VAR_5 = 0;
    }

  if (FUNC_15 (VAR_27))
    FUNC_11 (VAR_27);

  FUNC_16 (VAR_27);

  FUNC_22 (VAR_27);

  FUNC_20 (VAR_27);

  FUNC_21 (VAR_27);

  FUNC_23 (VAR_27);

  FUNC_17 (VAR_27);

  FUNC_14 (VAR_27);

  FUNC_13 (VAR_27);

  FUNC_10 (VAR_27);

  if (VAR_18)
    {
      FUNC_4 (VAR_18);
      VAR_18 = ((void*)0);
    }

  if (VAR_20)
    {
      FUNC_4 (VAR_20);
      VAR_20 = ((void*)0);
    }

  if (VAR_23)
    {
      FUNC_4 (VAR_23);
      VAR_23 = ((void*)0);
      VAR_24 = 0;
    }

  if (VAR_10)
    {
      FUNC_4 (VAR_10);
      VAR_10 = ((void*)0);
      VAR_11 = 0;
    }

  if (VAR_12)
    {
      FUNC_4 (VAR_12);
      VAR_12 = ((void*)0);
      VAR_17 = 0;
    }

  if (VAR_13)
    {
      FUNC_4 (VAR_13);
      VAR_13 = ((void*)0);
    }

  if (VAR_21)
    {
      FUNC_4 (VAR_21);
      VAR_21 = ((void*)0);
    }

  if (VAR_19)
    {
      struct group_list *VAR_29, *VAR_30;

      for (VAR_28 = 0; VAR_28 < VAR_14; VAR_28++)
 {
   for (VAR_29 = VAR_19 [VAR_28].root; VAR_29 != ((void*)0); VAR_29 = VAR_30)
     {
       VAR_30 = VAR_29->next;
       FUNC_4 (VAR_29);
     }
 }

      FUNC_4 (VAR_19);
      VAR_19 = ((void*)0);
    }

  FUNC_5 ();

  return 0;
}
