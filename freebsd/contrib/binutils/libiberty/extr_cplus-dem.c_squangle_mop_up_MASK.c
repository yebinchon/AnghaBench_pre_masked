
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {int * ktypevec; int * btypevec; } ;


 int FUNC_0 (struct work_stuff*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2 (struct work_stuff *VAR_0)
{

  FUNC_0 (VAR_0);
  if (VAR_0 -> btypevec != ((void*)0))
    {
      FUNC_1 ((char *) VAR_0 -> btypevec);
    }
  if (VAR_0 -> ktypevec != ((void*)0))
    {
      FUNC_1 ((char *) VAR_0 -> ktypevec);
    }
}
