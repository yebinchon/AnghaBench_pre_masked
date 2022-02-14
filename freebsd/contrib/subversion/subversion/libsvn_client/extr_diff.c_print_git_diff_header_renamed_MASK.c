
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,char const*,int *,char*,char const*,char const*,...) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_stream_t *VAR_2, const char *VAR_3,
                              const char *VAR_4, const char *VAR_5,
                              apr_pool_t *VAR_6)
{
  FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_6,
                                      "diff --git a/%s b/%s%s",
                                      VAR_4, VAR_5, VAR_0));
  FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_6,
                                      "rename from %s%s", VAR_4,
                                      VAR_0));
  FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_6,
                                      "rename to %s%s", VAR_5, VAR_0));
  return VAR_1;
}
