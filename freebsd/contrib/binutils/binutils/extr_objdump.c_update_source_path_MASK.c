
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_file_list {int dummy; } ;


 char* FUNC_0 (int ,char*,char const*,char const*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int * VAR_1 ;
 void* FUNC_2 (char const*,char) ;
 struct print_file_list* FUNC_3 (char const*,char const*) ;

__attribute__((used)) static struct print_file_list *
FUNC_4 (const char *VAR_2)
{
  struct print_file_list *VAR_3;
  const char *VAR_4;
  int VAR_5;

  if (VAR_2 == ((void*)0))
    return ((void*)0);

  VAR_3 = FUNC_3 (VAR_2, VAR_2);
  if (VAR_3 != ((void*)0))
    return VAR_3;

  if (VAR_0 == 0)
    return ((void*)0);


  VAR_4 = FUNC_2 (VAR_2, '/');
  if (VAR_4 == ((void*)0))
    VAR_4 = VAR_2;
  else
    ++VAR_4;



  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    {
      char *VAR_6 = FUNC_0 (VAR_1[VAR_5], "/", VAR_4, (const char *) 0);

      VAR_3 = FUNC_3 (VAR_2, VAR_6);
      if (VAR_3)
 return VAR_3;

      FUNC_1 (VAR_6);
    }

  return ((void*)0);
}
