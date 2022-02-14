
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_dirent_t ;
struct TYPE_2__ {int dirent_fields; int conn; } ;
typedef TYPE_1__ list_receiver_baton_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,char const*,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_0,
              svn_dirent_t *VAR_1,
              void *VAR_2,
              apr_pool_t *VAR_3)
{
  list_receiver_baton_t *VAR_4 = VAR_2;
  return FUNC_0(FUNC_1(VAR_4->conn, VAR_3, VAR_0, VAR_1,
                                                  VAR_4->dirent_fields));
}
