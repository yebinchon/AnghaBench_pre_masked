
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_4__ {int may_check_for_error; int compression_level; int * remote_ip; int stream; int * pool; scalar_t__ zero_copy_limit; int capabilities; int * block_baton; int * block_handler; scalar_t__ current_out; void* max_out; scalar_t__ current_in; void* max_in; scalar_t__ error_check_interval; scalar_t__ written_since_error_check; scalar_t__ write_pos; int read_buf; int read_end; int read_ptr; int * session; int encrypted; int * sock; } ;
typedef TYPE_1__ svn_ra_svn_conn_t ;
typedef int apr_uintptr_t ;
typedef void* apr_uint64_t ;
typedef int apr_socket_t ;
typedef int apr_sockaddr_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int **,int *) ;
 scalar_t__ FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int ,int ) ;

svn_ra_svn_conn_t *FUNC_10(apr_socket_t *VAR_4,
                                           svn_stream_t *VAR_5,
                                           svn_stream_t *VAR_6,
                                           int VAR_7,
                                           apr_size_t VAR_8,
                                           apr_size_t VAR_9,
                                           apr_uint64_t VAR_10,
                                           apr_uint64_t VAR_11,
                                           apr_pool_t *VAR_12)
{
  svn_ra_svn_conn_t *VAR_13;
  void *VAR_14 = FUNC_2(VAR_12, sizeof(*VAR_13) + VAR_3);
  VAR_13 = (void*)FUNC_0((apr_uintptr_t)VAR_14, VAR_3);

  FUNC_5((VAR_4 && !VAR_5 && !VAR_6)
         || (!VAR_4 && VAR_5 && VAR_6));




  VAR_13->session = ((void*)0);
  VAR_13->read_ptr = VAR_13->read_buf;
  VAR_13->read_end = VAR_13->read_buf;
  VAR_13->write_pos = 0;
  VAR_13->written_since_error_check = 0;
  VAR_13->error_check_interval = VAR_9;
  VAR_13->may_check_for_error = VAR_9 == 0;
  VAR_13->max_in = VAR_10;
  VAR_13->current_in = 0;
  VAR_13->max_out = VAR_11;
  VAR_13->current_out = 0;
  VAR_13->block_handler = ((void*)0);
  VAR_13->block_baton = ((void*)0);
  VAR_13->capabilities = FUNC_1(VAR_12);
  VAR_13->compression_level = VAR_7;
  VAR_13->zero_copy_limit = VAR_8;
  VAR_13->pool = VAR_12;

  if (VAR_4 != ((void*)0))
    {
      apr_sockaddr_t *VAR_15;
      VAR_13->stream = FUNC_7(VAR_4, VAR_12);
      if (!(FUNC_4(&VAR_15, VAR_0, VAR_4) == VAR_1
            && FUNC_3(&VAR_13->remote_ip, VAR_15) == VAR_1))
        VAR_13->remote_ip = ((void*)0);
      FUNC_9(VAR_13->stream, FUNC_6(VAR_13));
    }
  else
    {
      VAR_13->stream = FUNC_8(VAR_5, VAR_6,
                                                     VAR_12);
      VAR_13->remote_ip = ((void*)0);
    }

  return VAR_13;
}
