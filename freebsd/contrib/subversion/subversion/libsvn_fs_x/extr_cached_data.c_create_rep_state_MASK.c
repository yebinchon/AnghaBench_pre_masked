
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_fs_x__representation_t ;
typedef int svn_fs_x__rep_header_t ;
typedef int svn_fs_t ;
struct TYPE_9__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int shared_file_t ;
typedef int rep_state_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {char* data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int **,int **,int **,int *,int *,int *,int *) ;
 TYPE_1__* FUNC_1 (scalar_t__,TYPE_1__*,char*,char*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(rep_state_t **VAR_2,
                 svn_fs_x__rep_header_t **VAR_3,
                 shared_file_t **VAR_4,
                 svn_fs_x__representation_t *VAR_5,
                 svn_fs_t *VAR_6,
                 apr_pool_t *VAR_7,
                 apr_pool_t *VAR_8)
{
  svn_error_t *VAR_9 = FUNC_0(VAR_2, VAR_3,
                                           VAR_4, VAR_5, VAR_6,
                                           VAR_7, VAR_8);
  if (VAR_9 && VAR_9->apr_err == VAR_0)
    {







      return FUNC_1(VAR_0, VAR_9,
                               "Corrupt representation '%s'",
                               VAR_5
                               ? FUNC_3
                                   (VAR_5, VAR_1, VAR_8,
                                    VAR_8)->data
                               : "(null)");
    }

  return FUNC_2(VAR_9);
}
