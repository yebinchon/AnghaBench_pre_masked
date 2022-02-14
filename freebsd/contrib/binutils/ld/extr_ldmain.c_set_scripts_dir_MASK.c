
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_boolean ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ,char*) ;
 char* VAR_3 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,size_t) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (size_t) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  char *VAR_4, *VAR_5;
  size_t VAR_6;
  bfd_boolean VAR_7;

  VAR_5 = FUNC_2 (VAR_3, VAR_0, VAR_1);
  if (VAR_5)
    {
      VAR_7 = FUNC_0 (VAR_5);
      FUNC_1 (VAR_5);
      if (VAR_7)
 return;
    }

  VAR_5 = FUNC_2 (VAR_3, VAR_2, VAR_1);
  if (VAR_5)
    {
      VAR_7 = FUNC_0 (VAR_5);
      FUNC_1 (VAR_5);
      if (VAR_7)
 return;
    }

  if (FUNC_0 (VAR_1))

    return;


  VAR_4 = FUNC_5 (VAR_3, '/');
  if (VAR_4 == ((void*)0))


    return;

  VAR_6 = VAR_4 - VAR_3;


  VAR_5 = FUNC_6 (VAR_6 + 8);
  FUNC_4 (VAR_5, VAR_3, VAR_6);
  VAR_5[VAR_6] = '\0';

  if (FUNC_0 (VAR_5))
    {
      FUNC_1 (VAR_5);
      return;
    }


  FUNC_3 (VAR_5 + VAR_6, "/../lib");
  FUNC_0 (VAR_5);
  FUNC_1 (VAR_5);
}
