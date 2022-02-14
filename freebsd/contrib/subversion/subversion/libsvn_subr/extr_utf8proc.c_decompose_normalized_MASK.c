
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_membuf_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_ssize_t ;
typedef scalar_t__ apr_size_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,char const*,scalar_t__,int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_4(apr_size_t *VAR_2,
                     const char *VAR_3, apr_size_t VAR_4,
                     svn_membuf_t *VAR_5)
{
  apr_ssize_t VAR_6 = FUNC_2(0, VAR_3, VAR_4, VAR_5);
  if (VAR_6 < 0)
    return FUNC_1(VAR_0, ((void*)0),
                            FUNC_0(FUNC_3(VAR_6)));
  *VAR_2 = VAR_6;
  return VAR_1;
}
