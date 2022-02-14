
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ref {int * vops; struct mem_ref* next; } ;
typedef int bitmap_head ;
typedef int * bitmap ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4 (struct mem_ref *VAR_1, bitmap VAR_2)
{
  bitmap_head VAR_3, VAR_4;
  struct mem_ref *VAR_5;

  FUNC_2 (&VAR_3, &VAR_0);
  FUNC_2 (&VAR_4, &VAR_0);

  for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next)
    {


      FUNC_0 (&VAR_3, &VAR_4, VAR_5->vops);
      FUNC_3 (VAR_2, &VAR_3);
      FUNC_1 (&VAR_3);

      FUNC_3 (&VAR_4, VAR_5->vops);
    }

  FUNC_1 (&VAR_4);
}
