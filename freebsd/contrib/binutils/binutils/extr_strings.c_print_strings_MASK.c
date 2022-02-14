
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int start ;
typedef int file_off ;
typedef int FILE ;


 long VAR_0 ;
 int FUNC_0 (long) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 long FUNC_2 (int *,int*,int*,char**) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6 (const char *VAR_6, FILE *VAR_7, file_off VAR_8,
        int VAR_9, int VAR_10, char *VAR_11)
{
  char *VAR_12 = (char *) FUNC_5 (sizeof (char) * (VAR_5 + 1));

  while (1)
    {
      file_off VAR_13;
      int VAR_14;
      long VAR_15;


    tryline:
      if (VAR_9 && VAR_8 >= VAR_9)
 break;
      VAR_13 = VAR_8;
      for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
 {
   VAR_15 = FUNC_2 (VAR_7, &VAR_8, &VAR_10, &VAR_11);
   if (VAR_15 == VAR_0)
     return;
   if (! FUNC_0 (VAR_15))

     goto tryline;
   VAR_12[VAR_14] = VAR_15;
 }




      if (VAR_3)
 FUNC_3 ("%s: ", VAR_6);
      if (VAR_2)
 switch (VAR_1)
   {
   case 8:

     if (sizeof (VAR_13) > sizeof (long))
       FUNC_3 ("%7llo ", (unsigned long long) VAR_13);
     else







       FUNC_3 ("%7lo ", (unsigned long) VAR_13);
     break;

   case 10:

     if (sizeof (VAR_13) > sizeof (long))
       FUNC_3 ("%7lld ", (unsigned long long) VAR_13);
     else







       FUNC_3 ("%7ld ", (long) VAR_13);
     break;

   case 16:

     if (sizeof (VAR_13) > sizeof (long))
       FUNC_3 ("%7llx ", (unsigned long long) VAR_13);
     else
       FUNC_3 ("%7lx ", (unsigned long) VAR_13);
     break;
   }

      VAR_12[VAR_14] = '\0';
      FUNC_1 (VAR_12, VAR_4);

      while (1)
 {
   VAR_15 = FUNC_2 (VAR_7, &VAR_8, &VAR_10, &VAR_11);
   if (VAR_15 == VAR_0)
     break;
   if (! FUNC_0 (VAR_15))
     break;
   FUNC_4 (VAR_15);
 }

      FUNC_4 ('\n');
    }
}
