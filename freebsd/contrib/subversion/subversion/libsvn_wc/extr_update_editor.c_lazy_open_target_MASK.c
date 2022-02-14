
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc__db_install_data_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
struct handler_baton {int * install_data; TYPE_2__* fb; int new_text_base_sha1_checksum; } ;
typedef int apr_pool_t ;
struct TYPE_6__ {int local_abspath; } ;
struct TYPE_5__ {TYPE_3__* dir_baton; TYPE_1__* edit_baton; } ;
struct TYPE_4__ {int db; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int **,int *,int *,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_stream_t **VAR_1,
                 void *VAR_2,
                 apr_pool_t *VAR_3,
                 apr_pool_t *VAR_4)
{
  struct handler_baton *VAR_5 = VAR_2;
  svn_wc__db_install_data_t *VAR_6;






  FUNC_0(FUNC_1(VAR_1,
                                              &VAR_6,
                                              &VAR_5->new_text_base_sha1_checksum,
                                              ((void*)0),
                                              VAR_5->fb->edit_baton->db,
                                              VAR_5->fb->dir_baton->local_abspath,
                                              VAR_3, VAR_4));

  VAR_5->install_data = VAR_6;

  return VAR_0;
}
