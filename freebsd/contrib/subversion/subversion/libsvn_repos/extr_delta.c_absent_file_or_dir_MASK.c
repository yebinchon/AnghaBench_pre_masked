
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct context {TYPE_1__* editor; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* absent_file ) (char const*,void*,int *) ;int * (* absent_directory ) (char const*,void*,int *) ;} ;


 int FUNC_0 (char const*) ;
 int * FUNC_1 (char const*,void*,int *) ;
 int * FUNC_2 (char const*,void*,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_3(struct context *VAR_1,
                   void *VAR_2,
                   const char *VAR_3,
                   svn_node_kind_t VAR_4,
                   apr_pool_t *VAR_5)
{
  FUNC_0(VAR_3);

  if (VAR_4 == VAR_0)
    return VAR_1->editor->absent_directory(VAR_3, VAR_2, VAR_5);
  else
    return VAR_1->editor->absent_file(VAR_3, VAR_2, VAR_5);
}
