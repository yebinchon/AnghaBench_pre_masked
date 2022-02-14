
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {char* iov_base; int iov_len; } ;
typedef int buf ;
typedef scalar_t__ apr_status_t ;
typedef int apr_socket_t ;
typedef int apr_sockaddr_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int **,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int **,int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int *,char*,int*) ;
 scalar_t__ FUNC_5 (int *,struct iovec*,int,int*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int * VAR_7 ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

__attribute__((used)) static apr_status_t FUNC_8(void)
{
  apr_pool_t *VAR_8 = VAR_7;
  apr_status_t VAR_9;
  apr_socket_t *VAR_10 = ((void*)0);
  apr_sockaddr_t *VAR_11;
  struct iovec VAR_12[2];
  apr_size_t VAR_13;
  char VAR_14[128];
  apr_size_t VAR_15;

  VAR_9 = FUNC_3(&VAR_10, VAR_1, VAR_6, 0, VAR_8);
  if(VAR_9 != VAR_2) {
    return VAR_9;
  }

  VAR_9 = FUNC_0(&VAR_11, VAR_4, VAR_1, VAR_5, 0, VAR_8);
  if(VAR_9 != VAR_2) {
    return VAR_9;
  }

  VAR_9 = FUNC_6(VAR_10, 1 * VAR_3);
  if (VAR_9 != VAR_2) {
    return VAR_9;
  }

  VAR_9 = FUNC_2(VAR_10, VAR_11);
  if (VAR_9 != VAR_2) {
    return VAR_9;
  }

  VAR_9 = FUNC_6(VAR_10, -1);
  if (VAR_9 != VAR_2) {
    return VAR_9;
  }

  VAR_12[0].iov_base = "version";
  VAR_12[0].iov_len = sizeof("version") - 1;

  VAR_12[1].iov_base = "\r\n";
  VAR_12[1].iov_len = sizeof("\r\n") -1;

  VAR_9 = FUNC_5(VAR_10, VAR_12, 2, &VAR_13);
  if (VAR_9 != VAR_2) {
    return VAR_9;
  }

  VAR_15 = sizeof(VAR_14);
  VAR_9 = FUNC_4(VAR_10, VAR_14, &VAR_15);
  if(VAR_9 != VAR_2) {
    return VAR_9;
  }

  if(FUNC_7(VAR_14, "VERSION", sizeof("VERSION")-1) != 0) {
    VAR_9 = VAR_0;
  }

  FUNC_1(VAR_10);
  return VAR_9;
}
