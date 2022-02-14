
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_chain {struct blame* blame; } ;
struct blame {scalar_t__ start; struct blame* next; int rev; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 struct blame* FUNC_1 (struct blame_chain*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct blame_chain *VAR_0,
                 struct blame_chain *VAR_1,
                 apr_pool_t *VAR_2)
{
  struct blame *VAR_3, *VAR_4;



  for (VAR_3 = VAR_0->blame, VAR_4 = VAR_1->blame;
       VAR_3->next && VAR_4->next;
       VAR_3 = VAR_3->next, VAR_4 = VAR_4->next)
    {

      FUNC_0(VAR_3->start == VAR_4->start);

      if (VAR_3->next->start < VAR_4->next->start)
        {

          struct blame *VAR_5 = FUNC_1(VAR_1, VAR_4->rev,
                                           VAR_3->next->start);
          VAR_5->next = VAR_4->next;
          VAR_4->next = VAR_5;
        }

      if (VAR_3->next->start > VAR_4->next->start)
        {

          struct blame *VAR_6 = FUNC_1(VAR_0, VAR_3->rev,
                                           VAR_4->next->start);
          VAR_6->next = VAR_3->next;
          VAR_3->next = VAR_6;
        }
    }




  while (VAR_3->next != ((void*)0))
    {
      struct blame *VAR_7 = FUNC_1(VAR_1, VAR_4->rev,
                                       VAR_3->next->start);
      VAR_4->next = VAR_7;

      VAR_4 = VAR_4->next;
      VAR_3 = VAR_3->next;
    }


  while (VAR_4->next != ((void*)0))
    {
      struct blame *VAR_8 = FUNC_1(VAR_0, VAR_3->rev,
                                       VAR_4->next->start);
      VAR_3->next = VAR_8;

      VAR_3 = VAR_3->next;
      VAR_4 = VAR_4->next;
    }
}
