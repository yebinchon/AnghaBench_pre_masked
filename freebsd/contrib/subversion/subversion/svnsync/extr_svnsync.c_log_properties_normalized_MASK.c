
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ,int,int) ;

__attribute__((used)) static svn_error_t *
FUNC_3(int VAR_2,
                          int VAR_3,
                          apr_pool_t *VAR_4)
{
  if (VAR_2 > 0 || VAR_3 > 0)
    FUNC_0(FUNC_2(VAR_4,
                               FUNC_1("NOTE: Normalized %s* properties "
                                 "to LF line endings (%d rev-props, "
                                 "%d node-props).\n"),
                               VAR_1,
                               VAR_2,
                               VAR_3));
  return VAR_0;
}
