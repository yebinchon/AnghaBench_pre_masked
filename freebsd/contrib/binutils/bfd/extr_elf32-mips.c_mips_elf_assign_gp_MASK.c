
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int ** FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (bfd *VAR_2, bfd_vma *VAR_3)
{
  unsigned int VAR_4;
  asymbol **VAR_5;
  unsigned int VAR_6;


  *VAR_3 = FUNC_0 (VAR_2);
  if (*VAR_3)
    return VAR_1;

  VAR_4 = FUNC_5 (VAR_2);
  VAR_5 = FUNC_4 (VAR_2);



  if (VAR_5 == ((void*)0))
    VAR_6 = VAR_4;
  else
    {
      for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++, VAR_5++)
 {
   register const char *VAR_7;

   VAR_7 = FUNC_2 (*VAR_5);
   if (*VAR_7 == '_' && FUNC_6 (VAR_7, "_gp") == 0)
     {
       *VAR_3 = FUNC_3 (*VAR_5);
       FUNC_1 (VAR_2, *VAR_3);
       break;
     }
 }
    }

  if (VAR_6 >= VAR_4)
    {

      *VAR_3 = 4;
      FUNC_1 (VAR_2, *VAR_3);
      return VAR_0;
    }

  return VAR_1;
}
