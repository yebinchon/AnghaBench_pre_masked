
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int *,char const*,int *,char*,char const*,char const*,...) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_stream_t *VAR_3, const char *VAR_4,
                             const char *VAR_5,
                             svn_revnum_t VAR_6,
                             const char *VAR_7,
                             apr_pool_t *VAR_8)
{
  FUNC_0(FUNC_1(VAR_3, VAR_4, VAR_8,
                                      "diff --git a/%s b/%s%s",
                                      VAR_5, VAR_7, VAR_0));
  if (VAR_6 != VAR_1)
    FUNC_0(FUNC_1(VAR_3, VAR_4, VAR_8,
                                        "copy from %s@%ld%s", VAR_5,
                                        VAR_6, VAR_0));
  else
    FUNC_0(FUNC_1(VAR_3, VAR_4, VAR_8,
                                        "copy from %s%s", VAR_5,
                                        VAR_0));
  FUNC_0(FUNC_1(VAR_3, VAR_4, VAR_8,
                                      "copy to %s%s", VAR_7, VAR_0));
  return VAR_2;
}
