
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct function_info {unsigned int ident; unsigned int checksum; unsigned int num_counts; int * counts; int name; struct function_info* next; } ;
typedef struct function_info function_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (char*,unsigned int) ;
 unsigned int VAR_5 ;
 int * FUNC_3 (int ,unsigned int) ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,char*,int ,...) ;
 struct function_info* VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (unsigned int,int ) ;
 int FUNC_8 (int ,int) ;
 unsigned long FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int *) ;
 unsigned int FUNC_12 () ;
 int FUNC_13 (unsigned long,unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_14 (void)
{
  unsigned VAR_14;
  unsigned VAR_15;
  unsigned VAR_16;
  function_t *VAR_17 = ((void*)0);
  int VAR_18 = 0;

  if (!FUNC_8 (VAR_7, 1))
    {
      FUNC_4 (VAR_13, "%s:cannot open data file, assuming not executed\n",
        VAR_7);
      VAR_10 = 1;
      return 0;
    }
  if (!FUNC_7 (FUNC_12 (), VAR_1))
    {
      FUNC_4 (VAR_13, "%s:not a gcov data file\n", VAR_7);
    cleanup:;
      FUNC_5 ();
      return 1;
    }
  VAR_15 = FUNC_12 ();
  if (VAR_15 != VAR_5)
    {
      char VAR_19[4], VAR_20[4];

      FUNC_2 (VAR_19, VAR_15);
      FUNC_2 (VAR_20, VAR_5);

      FUNC_4 (VAR_13, "%s:version '%.4s', prefer version '%.4s'\n",
        VAR_7, VAR_19, VAR_20);
    }
  VAR_16 = FUNC_12 ();
  if (VAR_16 != VAR_6)
    {
      FUNC_4 (VAR_13, "%s:stamp mismatch with graph file\n", VAR_7);
      goto cleanup;
    }

  while ((VAR_16 = FUNC_12 ()))
    {
      unsigned VAR_21 = FUNC_12 ();
      unsigned long VAR_22 = FUNC_9 ();

      if (VAR_16 == VAR_3)
 FUNC_11 (&VAR_11);
      else if (VAR_16 == VAR_4)
 VAR_12++;
      else if (VAR_16 == VAR_2)
 {
   unsigned VAR_23 = FUNC_12 ();
   struct function_info *VAR_24 = VAR_8;

   for (VAR_17 = VAR_17 ? VAR_17->next : ((void*)0); ; VAR_17 = VAR_17->next)
     {
       if (VAR_17)
  ;
       else if ((VAR_17 = VAR_24))
  VAR_24 = ((void*)0);
       else
  {
    FUNC_4 (VAR_13, "%s:unknown function '%u'\n",
      VAR_7, VAR_23);
    break;
  }
       if (VAR_17->ident == VAR_23)
  break;
     }

   if (!VAR_17)
     ;
   else if (FUNC_12 () != VAR_17->checksum)
     {
     mismatch:;
       FUNC_4 (VAR_13, "%s:profile mismatch for '%s'\n",
         VAR_7, VAR_17->name);
       goto cleanup;
     }
 }
      else if (VAR_16 == FUNC_1 (VAR_0) && VAR_17)
 {
   if (VAR_21 != FUNC_0 (VAR_17->num_counts))
     goto mismatch;

   if (!VAR_17->counts)
     VAR_17->counts = FUNC_3 (VAR_9, VAR_17->num_counts);

   for (VAR_14 = 0; VAR_14 != VAR_17->num_counts; VAR_14++)
     VAR_17->counts[VAR_14] += FUNC_10 ();
 }
      FUNC_13 (VAR_22, VAR_21);
      if ((VAR_18 = FUNC_6 ()))
 {
   FUNC_4 (VAR_13, VAR_18 < 0 ? "%s:overflowed\n" : "%s:corrupted\n",
     VAR_7);
   goto cleanup;
 }
    }

  FUNC_5 ();
  return 0;
}
