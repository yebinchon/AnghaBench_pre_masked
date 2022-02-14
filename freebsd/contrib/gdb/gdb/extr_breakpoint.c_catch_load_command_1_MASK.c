
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*) ;
 char* FUNC_2 (char**) ;
 char* FUNC_3 (char**) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int FUNC_6 (char) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_1, int VAR_2, int VAR_3)
{
  char *VAR_4 = ((void*)0);
  char *VAR_5 = ((void*)0);

  FUNC_4 (&VAR_1);
  VAR_5 = FUNC_3 (&VAR_1);



  if (VAR_5 == ((void*)0))
    {
      VAR_4 = FUNC_2 (&VAR_1);
      FUNC_4 (&VAR_1);
      VAR_5 = FUNC_3 (&VAR_1);
    }

  if ((*VAR_1 != '\0') && !FUNC_6 (*VAR_1))
    FUNC_5 ("Junk at end of arguments.");




  FUNC_1 (FUNC_0 (VAR_0), VAR_2,
    VAR_4, VAR_5);
}
