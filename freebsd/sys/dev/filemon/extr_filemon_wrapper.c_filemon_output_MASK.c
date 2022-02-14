
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int uio_iovcnt; size_t uio_resid; scalar_t__ uio_offset; int uio_td; int uio_rw; int uio_segflg; struct iovec* uio_iov; } ;
struct iovec {char* iov_base; size_t iov_len; } ;
struct filemon {int error; int cred; TYPE_1__* fp; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {scalar_t__ f_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,struct uio*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct filemon *VAR_4, char *VAR_5, size_t VAR_6)
{
 struct uio VAR_7;
 struct iovec VAR_8;
 int VAR_9;

 if (VAR_4->fp == ((void*)0))
  return;

 VAR_8.iov_base = VAR_5;
 VAR_8.iov_len = VAR_6;
 VAR_7.uio_iov = &VAR_8;
 VAR_7.uio_iovcnt = 1;
 VAR_7.uio_resid = VAR_6;
 VAR_7.uio_segflg = VAR_1;
 VAR_7.uio_rw = VAR_2;
 VAR_7.uio_td = VAR_3;
 VAR_7.uio_offset = (off_t) -1;

 if (VAR_4->fp->f_type == VAR_0)
  FUNC_0();

 VAR_9 = FUNC_1(VAR_4->fp, &VAR_7, VAR_4->cred, 0, VAR_3);
 if (VAR_9 != 0 && VAR_4->error == 0)
  VAR_4->error = VAR_9;
}
