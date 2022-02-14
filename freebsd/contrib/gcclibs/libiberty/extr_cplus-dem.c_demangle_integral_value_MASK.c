
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {int dummy; } ;
typedef int string ;


 int VAR_0 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (struct work_stuff*,char const**,int *,int ) ;
 int FUNC_3 (struct work_stuff*,char const**,int *,int ,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_7 (struct work_stuff *VAR_2,
                         const char **VAR_3, string *VAR_4)
{
  int VAR_5;

  if (**VAR_3 == 'E')
    VAR_5 = FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_1);
  else if (**VAR_3 == 'Q' || **VAR_3 == 'K')
    VAR_5 = FUNC_3 (VAR_2, VAR_3, VAR_4, 0, 1);
  else
    {
      int VAR_6;



      int VAR_7 = 0;
      int VAR_8 = 0;

      VAR_5 = 0;

      if (**VAR_3 == '_')
        {
   if (VAR_3[0][1] == 'm')
     {




       VAR_7 = 1;
       FUNC_6 (VAR_4, "-", 1);
       (*VAR_3) += 2;
     }
   else
     {



       VAR_8 = 1;
     }
 }
      else
 {

   if (**VAR_3 == 'm')
   {
     FUNC_6 (VAR_4, "-", 1);
     (*VAR_3)++;
   }




   VAR_7 = 1;


   VAR_8 = 1;
 }





      if (VAR_7)
 VAR_6 = FUNC_0 (VAR_3);
      else
 VAR_6 = FUNC_1 (VAR_3);

      if (VAR_6 != -1)
 {
   char VAR_9[VAR_0];
   FUNC_4 (VAR_9, "%d", VAR_6);
   FUNC_5 (VAR_4, VAR_9);
   if ((VAR_6 > 9 || VAR_7)
       && ! VAR_8
       && **VAR_3 == '_')
     (*VAR_3)++;


   VAR_5 = 1;
 }
      }

  return VAR_5;
}
