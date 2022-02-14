
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
struct change_node {int contents_abspath; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int **,int *,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_stream_t **VAR_1, void *VAR_2,
                apr_pool_t *VAR_3, apr_pool_t *VAR_4)
{
  struct change_node *VAR_5 = VAR_2;
  return FUNC_0(VAR_1, &VAR_5->contents_abspath,
                                ((void*)0),
                                VAR_0,
                                VAR_3, VAR_4);
}
