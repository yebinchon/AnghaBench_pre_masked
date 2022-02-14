
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redirection_data {int * dup_block; scalar_t__ do_not_duplicate; } ;
struct local_info {int * template_block; int * bb; } ;


 int FUNC_0 (int *,struct redirection_data*) ;
 int FUNC_1 (struct redirection_data*) ;

__attribute__((used)) static int
FUNC_2 (void **VAR_0, void *VAR_1)
{
  struct redirection_data *VAR_2 = (struct redirection_data *) *VAR_0;
  struct local_info *VAR_3 = (struct local_info *)VAR_1;



  if (VAR_2->do_not_duplicate)
    return 1;



  if (VAR_3->template_block == ((void*)0))
    {
      FUNC_0 (VAR_3->bb, VAR_2);
      VAR_3->template_block = VAR_2->dup_block;




    }
  else
    {
      FUNC_0 (VAR_3->template_block, VAR_2);



      FUNC_1 (VAR_2);
    }


  return 1;
}
