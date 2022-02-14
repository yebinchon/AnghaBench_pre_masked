
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_block {struct diff_block* next; int ** lengths; int ** lines; int ** ranges; } ;
typedef size_t lin ;
typedef enum diff_type { ____Placeholder_diff_type } diff_type ;





 size_t FUNC_0 (struct diff_block*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int,int) ;
 size_t VAR_2 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (char**,struct diff_block*) ;
 char* VAR_3 ;
 int FUNC_7 (char,int ) ;
 char* FUNC_8 (char const*,char const*,char**) ;
 char* FUNC_9 (char*,int *,int *,char*,char) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 () ;
 void* FUNC_12 (size_t) ;

__attribute__((used)) static struct diff_block *
FUNC_13 (char const *VAR_5,
       char const *VAR_6,
       struct diff_block **VAR_7)
{
  char *VAR_8;
  char *VAR_9;
  char *VAR_10;
  enum diff_type VAR_11;
  lin VAR_12;
  struct diff_block *VAR_13, **VAR_14, *VAR_15;
  size_t VAR_16 = (VAR_2
      / FUNC_1 (sizeof *VAR_15->lines[1],
      sizeof *VAR_15->lengths[1]));

  VAR_9 = FUNC_8 (VAR_5, VAR_6, &VAR_8);
  VAR_10 = VAR_8;
  VAR_14 = &VAR_13;
  VAR_15 = 0;

  while (VAR_10 < VAR_9)
    {
      VAR_15 = FUNC_12 (sizeof *VAR_15);
      VAR_15->lines[0] = VAR_15->lines[1] = 0;
      VAR_15->lengths[0] = VAR_15->lengths[1] = 0;

      VAR_11 = FUNC_6 (&VAR_10, VAR_15);
      if (VAR_11 == VAR_0 || *VAR_10 != '\n')
 {
   FUNC_5 (VAR_4, FUNC_2("%s: diff failed: "), VAR_3);
   do
     {
       FUNC_7 (*VAR_10, VAR_4);
     }
   while (*VAR_10++ != '\n');
   FUNC_3 (VAR_1);
 }
      VAR_10++;


      switch (VAR_11)
 {
 case 130:
   VAR_15->ranges[0][0]++;
   break;
 case 128:
   VAR_15->ranges[1][0]++;
   break;
 case 129:
   break;
 default:
   FUNC_4 ("internal error: invalid diff type in process_diff");
   break;
 }



      if (VAR_11 != 130)
 {
   lin VAR_17 = FUNC_0 (VAR_15, 0);
   if (VAR_16 <= VAR_17)
     FUNC_11 ();
   VAR_15->lines[0] = FUNC_12 (VAR_17 * sizeof *VAR_15->lines[0]);
   VAR_15->lengths[0] = FUNC_12 (VAR_17 * sizeof *VAR_15->lengths[0]);
   for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++)
     VAR_10 = FUNC_9 (VAR_10,
     &(VAR_15->lines[0][VAR_12]),
     &(VAR_15->lengths[0][VAR_12]),
     VAR_9,
     '<');
 }


      if (VAR_11 == 129)
 {
   if (FUNC_10 (VAR_10, "---\n", 4))
     FUNC_4 ("invalid diff format; invalid change separator");
   VAR_10 += 4;
 }



      if (VAR_11 != 128)
 {
   lin VAR_18 = FUNC_0 (VAR_15, 1);
   if (VAR_16 <= VAR_18)
     FUNC_11 ();
   VAR_15->lines[1] = FUNC_12 (VAR_18 * sizeof *VAR_15->lines[1]);
   VAR_15->lengths[1] = FUNC_12 (VAR_18 * sizeof *VAR_15->lengths[1]);
   for (VAR_12 = 0; VAR_12 < VAR_18; VAR_12++)
     VAR_10 = FUNC_9 (VAR_10,
     &(VAR_15->lines[1][VAR_12]),
     &(VAR_15->lengths[1][VAR_12]),
     VAR_9,
     '>');
 }


      *VAR_14 = VAR_15;
      VAR_14 = &VAR_15->next;
    }

  *VAR_14 = 0;
  *VAR_7 = VAR_15;
  return VAR_13;
}
