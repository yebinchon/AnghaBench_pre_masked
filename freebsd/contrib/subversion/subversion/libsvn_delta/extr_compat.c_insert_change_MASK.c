
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct change_node {void* deleting; void* changing; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 void* VAR_0 ;
 int * FUNC_0 (int *) ;
 struct change_node* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 struct change_node* FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int ,struct change_node*) ;

__attribute__((used)) static struct change_node *
FUNC_5(const char *VAR_1,
              apr_hash_t *VAR_2)
{
  apr_pool_t *VAR_3;
  struct change_node *VAR_4;

  VAR_4 = FUNC_3(VAR_2, VAR_1);
  if (VAR_4 != ((void*)0))
    return VAR_4;

  VAR_3 = FUNC_0(VAR_2);


  VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4));
  VAR_4->changing = VAR_0;
  VAR_4->deleting = VAR_0;

  FUNC_4(VAR_2, FUNC_2(VAR_3, VAR_1), VAR_4);

  return VAR_4;
}
