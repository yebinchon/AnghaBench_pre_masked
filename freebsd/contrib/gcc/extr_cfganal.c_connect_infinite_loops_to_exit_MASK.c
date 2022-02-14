
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct depth_first_search_dsS {int dummy; } ;
typedef int basic_block ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct depth_first_search_dsS*,int ) ;
 int FUNC_1 (struct depth_first_search_dsS*,int ) ;
 int FUNC_2 (struct depth_first_search_dsS*) ;
 int FUNC_3 (struct depth_first_search_dsS*) ;
 int FUNC_4 (int ,int ,int ) ;

void
FUNC_5 (void)
{
  basic_block VAR_2 = VAR_1;
  struct depth_first_search_dsS VAR_3;



  FUNC_3 (&VAR_3);
  FUNC_0 (&VAR_3, VAR_1);


  while (1)
    {
      VAR_2 = FUNC_1 (&VAR_3,
         VAR_2);
      if (!VAR_2)
 break;

      FUNC_4 (VAR_2, VAR_1, VAR_0);
      FUNC_0 (&VAR_3, VAR_2);
    }

  FUNC_2 (&VAR_3);
  return;
}
