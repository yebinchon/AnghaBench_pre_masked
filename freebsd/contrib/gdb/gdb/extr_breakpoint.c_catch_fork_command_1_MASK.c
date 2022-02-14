
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int catch_fork_kind ;




 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (char**) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char) ;

__attribute__((used)) static void
FUNC_6 (catch_fork_kind VAR_0, char *VAR_1, int VAR_2,
        int VAR_3)
{
  char *VAR_4 = ((void*)0);

  FUNC_3 (&VAR_1);






  VAR_4 = FUNC_2 (&VAR_1);

  if ((*VAR_1 != '\0') && !FUNC_5 (*VAR_1))
    FUNC_4 ("Junk at end of arguments.");



  switch (VAR_0)
    {
    case 129:
      FUNC_0 (VAR_2, VAR_4);
      break;
    case 128:
      FUNC_1 (VAR_2, VAR_4);
      break;
    default:
      FUNC_4 ("unsupported or unknown fork kind; cannot catch it");
      break;
    }
}
