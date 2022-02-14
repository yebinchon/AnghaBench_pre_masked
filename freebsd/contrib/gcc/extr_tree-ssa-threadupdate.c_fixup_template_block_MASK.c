
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redirection_data {scalar_t__ dup_block; } ;
struct local_info {scalar_t__ template_block; } ;


 int FUNC_0 (struct redirection_data*) ;

__attribute__((used)) static int
FUNC_1 (void **VAR_0, void *VAR_1)
{
  struct redirection_data *VAR_2 = (struct redirection_data *) *VAR_0;
  struct local_info *VAR_3 = (struct local_info *)VAR_1;



  if (VAR_2->dup_block && VAR_2->dup_block == VAR_3->template_block)
    {
      FUNC_0 (VAR_2);
      return 0;
    }

  return 1;
}
