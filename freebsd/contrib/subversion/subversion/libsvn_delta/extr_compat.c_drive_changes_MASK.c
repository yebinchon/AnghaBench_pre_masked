
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int * baton; } ;
struct editor_baton {int dedit_baton; int deditor; int base_relpath; int changes; TYPE_1__ root; } ;
struct change_node {int kind; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ,int *) ;
 struct change_node* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int const*,int ,int ,void*,int *) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_4(const struct editor_baton *VAR_4,
              apr_pool_t *VAR_5)
{
  struct change_node *VAR_6;
  const apr_array_header_t *VAR_7;



  if (VAR_4->root.baton == ((void*)0))
    return VAR_1;





  VAR_6 = FUNC_2(VAR_4->base_relpath, VAR_4->changes);
  VAR_6->kind = VAR_3;



  VAR_7 = FUNC_1(VAR_4->changes, VAR_4->base_relpath, VAR_5);
  FUNC_0(FUNC_3(VAR_4->deditor, VAR_4->dedit_baton, VAR_7,
                                 VAR_0, VAR_2, (void *)VAR_4,
                                 VAR_5));

  return VAR_1;
}
