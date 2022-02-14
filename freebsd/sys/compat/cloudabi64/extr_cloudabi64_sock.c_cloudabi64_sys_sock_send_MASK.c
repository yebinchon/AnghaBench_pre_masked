
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct thread {int dummy; } ;
struct iovec {int iov_len; void* iov_base; } ;
struct cloudabi64_sys_sock_send_args {int out; int sock; TYPE_2__ const* in; } ;
typedef int so ;
typedef int si ;
typedef int iovobj ;
struct TYPE_7__ {size_t so_datalen; } ;
typedef TYPE_1__ cloudabi64_send_out_t ;
struct TYPE_8__ {size_t si_data_len; int si_fds_len; int si_fds; int buf_len; int buf; int si_data; } ;
typedef TYPE_2__ cloudabi64_send_in_t ;
typedef TYPE_2__ cloudabi64_ciovec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 size_t VAR_3 ;
 int FUNC_1 (struct thread*,int ,struct iovec*,size_t,void*,int ,size_t*) ;
 int FUNC_2 (TYPE_2__ const*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (struct iovec*,int ) ;
 struct iovec* FUNC_5 (size_t,int,int ,int ) ;

int
FUNC_6(struct thread *VAR_4,
    struct cloudabi64_sys_sock_send_args *VAR_5)
{
 cloudabi64_send_in_t VAR_6;
 cloudabi64_send_out_t VAR_7 = {};
 cloudabi64_ciovec_t VAR_8;
 struct iovec *VAR_9;
 const cloudabi64_ciovec_t *VAR_10;
 size_t VAR_11, VAR_12;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_5->in, &VAR_6, sizeof(VAR_6));
 if (VAR_13 != 0)
  return (VAR_13);


 if (VAR_6.si_data_len > VAR_3)
  return (VAR_0);
 VAR_9 = FUNC_5(VAR_6.si_data_len, sizeof(struct iovec),
     VAR_1, VAR_2);
 VAR_10 = FUNC_0(VAR_6.si_data);
 for (VAR_12 = 0; VAR_12 < VAR_6.si_data_len; VAR_12++) {
  VAR_13 = FUNC_2(&VAR_10[VAR_12], &VAR_8, sizeof(VAR_8));
  if (VAR_13 != 0) {
   FUNC_4(VAR_9, VAR_1);
   return (VAR_13);
  }
  VAR_9[VAR_12].iov_base = FUNC_0(VAR_8.buf);
  VAR_9[VAR_12].iov_len = VAR_8.buf_len;
 }

 VAR_13 = FUNC_1(VAR_4, VAR_5->sock, VAR_9, VAR_6.si_data_len,
     FUNC_0(VAR_6.si_fds), VAR_6.si_fds_len, &VAR_11);
 FUNC_4(VAR_9, VAR_1);
 if (VAR_13 != 0)
  return (VAR_13);

 VAR_7.so_datalen = VAR_11;
 return (FUNC_3(&VAR_7, VAR_5->out, sizeof(VAR_7)));
}
