
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int eb; int conn; int token; } ;
typedef TYPE_1__ ra_svn_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int * VAR_0 ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (char,int ,int *) ;
 void* FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int ,int *,char const*,int ,int *,char const*,int ) ;

__attribute__((used)) static svn_error_t *FUNC_7(const char *VAR_1, void *VAR_2,
                                   const char *VAR_3,
                                   svn_revnum_t VAR_4,
                                   apr_pool_t *VAR_5, void **VAR_6)
{
  ra_svn_baton_t *VAR_7 = VAR_2;
  svn_string_t *VAR_8 = FUNC_4('d', VAR_7->eb, VAR_5);

  FUNC_1((VAR_3 && FUNC_2(VAR_4))
                 || (!VAR_3 && !FUNC_2(VAR_4)));
  FUNC_0(FUNC_3(VAR_7->eb, VAR_5));
  FUNC_0(FUNC_6(VAR_7->conn, VAR_5, VAR_1, VAR_7->token,
                                        VAR_8, VAR_3, VAR_4));
  *VAR_6 = FUNC_5(VAR_7->conn, VAR_5, VAR_7->eb, VAR_8);
  return VAR_0;
}
