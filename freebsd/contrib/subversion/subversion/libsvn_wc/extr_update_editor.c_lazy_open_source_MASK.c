
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct file_baton {int original_checksum; int local_abspath; TYPE_1__* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int db; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,int ,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_stream_t **VAR_1,
                 void *VAR_2,
                 apr_pool_t *VAR_3,
                 apr_pool_t *VAR_4)
{
  struct file_baton *VAR_5 = VAR_2;

  FUNC_0(FUNC_1(VAR_1, ((void*)0), VAR_5->edit_baton->db,
                                   VAR_5->local_abspath,
                                   VAR_5->original_checksum,
                                   VAR_3, VAR_4));


  return VAR_0;
}
