
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_data {int desc; int name; } ;
struct dirent {char* d_name; } ;
struct dirdata {char const** names; char* data; size_t nnames; } ;
typedef int DIR ;


 int FUNC_0 (struct dirent*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*,size_t) ;
 int * FUNC_4 (int ) ;
 struct dirent* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 () ;
 void* FUNC_8 (size_t) ;
 char* FUNC_9 (char*,size_t) ;

__attribute__((used)) static bool
FUNC_10 (struct file_data const *VAR_3, struct dirdata *VAR_4)
{
  register struct dirent *VAR_5;
  register size_t VAR_6;


  char const **VAR_7;


  size_t VAR_8;


  char *VAR_9;
  size_t VAR_10, VAR_11;

  VAR_4->names = 0;
  VAR_4->data = 0;
  VAR_8 = 0;
  VAR_9 = 0;

  if (VAR_3->desc != -1)
    {

      register DIR *VAR_12 = FUNC_4 (VAR_3->name);
      if (!VAR_12)
 return 0;



      VAR_10 = 512;
      VAR_11 = 0;
      VAR_4->data = VAR_9 = FUNC_8 (VAR_10);




      while ((VAR_1 = 0, (VAR_5 = FUNC_5 (VAR_12)) != 0))
 {
   char *VAR_13 = VAR_5->d_name;
   size_t VAR_14 = FUNC_0 (VAR_5) + 1;


   if (VAR_13[0] == '.'
       && (VAR_13[1] == 0 || (VAR_13[1] == '.' && VAR_13[2] == 0)))
     continue;

   if (FUNC_2 (VAR_2, VAR_13))
     continue;

   while (VAR_10 < VAR_11 + VAR_14)
     {
       if (VAR_0 / 2 <= VAR_10)
  FUNC_7 ();
       VAR_4->data = VAR_9 = FUNC_9 (VAR_9, VAR_10 *= 2);
     }

   FUNC_3 (VAR_9 + VAR_11, VAR_13, VAR_14);
   VAR_11 += VAR_14;
   VAR_8++;
 }
      if (VAR_1)
 {
   int VAR_15 = VAR_1;
   FUNC_1 (VAR_12);
   VAR_1 = VAR_15;
   return 0;
 }



      if (FUNC_1 (VAR_12) != 0)
 return 0;

    }


  if (VAR_0 / sizeof *VAR_7 - 1 <= VAR_8)
    FUNC_7 ();
  VAR_4->names = VAR_7 = FUNC_8 ((VAR_8 + 1) * sizeof *VAR_7);
  VAR_4->nnames = VAR_8;
  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++)
    {
      VAR_7[VAR_6] = VAR_9;
      VAR_9 += FUNC_6 (VAR_9) + 1;
    }
  VAR_7[VAR_8] = 0;
  return 1;
}
