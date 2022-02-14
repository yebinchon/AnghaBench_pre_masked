
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* abspath; } ;
typedef TYPE_1__ svn_client__merge_path_t ;
struct TYPE_8__ {int elt_size; int nelts; int elts; } ;
typedef TYPE_2__ apr_array_header_t ;


 TYPE_1__** FUNC_0 (TYPE_1__**,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static svn_client__merge_path_t *
FUNC_1(const apr_array_header_t *VAR_1,
                         const char *VAR_2)
{
  svn_client__merge_path_t VAR_3;
  svn_client__merge_path_t *VAR_4;
  svn_client__merge_path_t **VAR_5;

  VAR_3.abspath = VAR_2;
  VAR_4 = &VAR_3;
  VAR_5 = FUNC_0(&VAR_4, VAR_1->elts,
                   VAR_1->nelts,
                   VAR_1->elt_size,
                   VAR_0);
  return VAR_5 ? *VAR_5 : ((void*)0);
}
