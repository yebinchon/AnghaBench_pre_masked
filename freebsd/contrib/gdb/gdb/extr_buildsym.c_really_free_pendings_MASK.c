
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending {struct pending* next; } ;


 struct pending* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 struct pending* VAR_1 ;
 struct pending* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (void*) ;

void
FUNC_3 (void *VAR_4)
{
  struct pending *VAR_5, *VAR_6;

  for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_6)
    {
      VAR_6 = VAR_5->next;
      FUNC_2 ((void *) VAR_5);
    }
  VAR_1 = ((void*)0);

  FUNC_1 ();

  for (VAR_5 = VAR_0; VAR_5 != ((void*)0); VAR_5 = VAR_6)
    {
      VAR_6 = VAR_5->next;
      FUNC_2 ((void *) VAR_5);
    }
  VAR_0 = ((void*)0);

  for (VAR_5 = VAR_2; VAR_5 != ((void*)0); VAR_5 = VAR_6)
    {
      VAR_6 = VAR_5->next;
      FUNC_2 ((void *) VAR_5);
    }
  VAR_2 = ((void*)0);

  if (VAR_3)
    FUNC_0 (VAR_3);
}
