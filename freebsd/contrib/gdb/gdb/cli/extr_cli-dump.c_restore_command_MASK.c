
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_data {scalar_t__ load_start; scalar_t__ load_end; void* load_offset; } ;
typedef int bfd ;


 int FUNC_0 (int *,int ,struct callback_data*) ;
 int * FUNC_1 (char*,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_6 (char*,struct callback_data*) ;
 int VAR_1 ;
 char* FUNC_7 (char**,int *) ;
 char* FUNC_8 (char**,int *) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_12 (char *VAR_3, int VAR_4)
{
  char *VAR_5;
  struct callback_data VAR_6;
  bfd *VAR_7;
  int VAR_8 = 0;

  if (!VAR_2)
    FUNC_3 ();

  VAR_6.load_offset = 0;
  VAR_6.load_start = 0;
  VAR_6.load_end = 0;


  VAR_5 = FUNC_8 (&VAR_3, ((void*)0));
  if (VAR_3 != ((void*)0) && *VAR_3 != '\0')
    {
      char *VAR_9 = "binary";


      if (FUNC_11 (VAR_3, VAR_9, FUNC_10 (VAR_9)) == 0)
 {
   VAR_8 = 1;
   VAR_3 += FUNC_10 (VAR_9);
   VAR_3 = FUNC_9 (VAR_3);
 }

      if (VAR_3 != ((void*)0) && *VAR_3 != '\0')
      VAR_6.load_offset =
 FUNC_4 (FUNC_7 (&VAR_3, ((void*)0)));
      if (VAR_3 != ((void*)0) && *VAR_3 != '\0')
 {

   VAR_6.load_start =
     FUNC_4 (FUNC_7 (&VAR_3, ((void*)0)));
   if (VAR_3 != ((void*)0) && *VAR_3 != '\0')
     {

       VAR_6.load_end = FUNC_4 (VAR_3);
       if (VAR_6.load_end <= VAR_6.load_start)
  FUNC_2 ("Start must be less than end.");
     }
 }
    }

  if (VAR_0)
    FUNC_5 ("Restore file %s offset 0x%lx start 0x%lx end 0x%lx\n",
       VAR_5, (unsigned long) VAR_6.load_offset,
       (unsigned long) VAR_6.load_start,
       (unsigned long) VAR_6.load_end);

  if (VAR_8)
    {
      FUNC_6 (VAR_5, &VAR_6);
    }
  else
    {

      VAR_7 = FUNC_1 (VAR_5, ((void*)0));


      FUNC_0 (VAR_7, VAR_1, &VAR_6);
    }
  return;
}
