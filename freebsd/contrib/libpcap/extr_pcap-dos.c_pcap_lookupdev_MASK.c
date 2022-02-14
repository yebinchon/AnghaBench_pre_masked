
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ name; scalar_t__ (* probe ) (struct device*) ;struct device* next; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__ (*) (struct device*)) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 struct device* VAR_1 ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (struct device*) ;

char *FUNC_5 (char *VAR_2)
{
  struct device *VAR_3;





  for (VAR_3 = (struct device*)VAR_0; VAR_3; VAR_3 = VAR_3->next)
  {
    FUNC_1 (VAR_3->probe);

    if ((*VAR_3->probe)(VAR_3))
    {
      FUNC_0();
      VAR_1 = (struct device*) VAR_3;
      return (char*) VAR_3->name;
    }
  }

  if (VAR_2)
     FUNC_3 (VAR_2, "No driver found");
  return (((void*)0));
}
