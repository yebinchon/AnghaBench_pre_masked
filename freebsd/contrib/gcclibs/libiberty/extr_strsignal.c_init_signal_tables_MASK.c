
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signal_info {char const* name; int value; char const* msg; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const**,int ,int) ;
 int VAR_0 ;
 char const** VAR_1 ;
 struct signal_info* VAR_2 ;
 int VAR_3 ;
 char const** VAR_4 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  const struct signal_info *VAR_5;
  int VAR_6;




  if (VAR_0 == 0)
    {
      for (VAR_5 = VAR_2; VAR_5 -> name != ((void*)0); VAR_5++)
 {
   if (VAR_5 -> value >= VAR_0)
     {
       VAR_0 = VAR_5 -> value + 1;
     }
 }
    }




  if (VAR_1 == ((void*)0))
    {
      VAR_6 = VAR_0 * sizeof (char *);
      if ((VAR_1 = (const char **) FUNC_0 (VAR_6)) != ((void*)0))
 {
   FUNC_1 (VAR_1, 0, VAR_6);
   for (VAR_5 = VAR_2; VAR_5 -> name != ((void*)0); VAR_5++)
     {
       VAR_1[VAR_5 -> value] = VAR_5 -> name;
     }
 }
    }






  if (VAR_4 == ((void*)0))
    {
      VAR_6 = VAR_0 * sizeof (char *);
      if ((VAR_4 = (const char **) FUNC_0 (VAR_6)) != ((void*)0))
 {
   FUNC_1 (VAR_4, 0, VAR_6);
   VAR_3 = VAR_0;
   for (VAR_5 = VAR_2; VAR_5 -> name != ((void*)0); VAR_5++)
     {
       VAR_4[VAR_5 -> value] = VAR_5 -> msg;
     }
 }
    }



}
