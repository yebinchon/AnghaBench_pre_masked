
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct error_info {char const* name; int value; char const* msg; } ;


 char const** VAR_0 ;
 struct error_info* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const**,int ,int) ;
 int VAR_2 ;
 char const** VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  const struct error_info *VAR_5;
  int VAR_6;




  if (VAR_2 == 0)
    {
      for (VAR_5 = VAR_1; VAR_5 -> name != ((void*)0); VAR_5++)
 {
   if (VAR_5 -> value >= VAR_2)
     {
       VAR_2 = VAR_5 -> value + 1;
     }
 }
    }




  if (VAR_0 == ((void*)0))
    {
      VAR_6 = VAR_2 * sizeof (char *);
      if ((VAR_0 = (const char **) FUNC_0 (VAR_6)) != ((void*)0))
 {
   FUNC_1 (VAR_0, 0, VAR_6);
   for (VAR_5 = VAR_1; VAR_5 -> name != ((void*)0); VAR_5++)
     {
       VAR_0[VAR_5 -> value] = VAR_5 -> name;
     }
 }
    }






  if (VAR_3 == ((void*)0))
    {
      VAR_6 = VAR_2 * sizeof (char *);
      if ((VAR_3 = (const char **) FUNC_0 (VAR_6)) != ((void*)0))
 {
   FUNC_1 (VAR_3, 0, VAR_6);
   VAR_4 = VAR_2;
   for (VAR_5 = VAR_1; VAR_5 -> name != ((void*)0); VAR_5++)
     {
       VAR_3[VAR_5 -> value] = VAR_5 -> msg;
     }
 }
    }



}
