
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct so_list {scalar_t__ abfd; struct so_list* next; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int * VAR_1 ;
 int FUNC_3 (struct so_list*) ;
 int FUNC_4 (scalar_t__) ;
 struct so_list* VAR_2 ;

void
FUNC_5 (void)
{
  if (VAR_1 != ((void*)0)
      && FUNC_1 (VAR_1) != VAR_0)
    FUNC_2 (1);

  while (VAR_2)
    {
      struct so_list *VAR_3 = VAR_2;
      VAR_2 = VAR_3->next;
      if (VAR_3->abfd)
 FUNC_4 (VAR_3->abfd);
      FUNC_3 (VAR_3);
    }

  FUNC_0 ();
}
