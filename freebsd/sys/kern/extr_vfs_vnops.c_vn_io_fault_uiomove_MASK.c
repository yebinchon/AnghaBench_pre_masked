
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct uio {scalar_t__ uio_segflg; int uio_iovcnt; int uio_resid; size_t uio_offset; int uio_rw; struct iovec* uio_iov; int uio_td; } ;
struct thread {int td_pflags; int td_ma; int td_ma_cnt; } ;
struct iovec {char* iov_base; int iov_len; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 struct thread* VAR_5 ;
 int FUNC_1 (char*,int,struct uio*) ;
 int FUNC_2 (int,int,int,struct uio*) ;

int
FUNC_3(char *VAR_6, int VAR_7, struct uio *VAR_8)
{
 struct uio VAR_9;
 struct iovec VAR_10[1];
 struct thread *VAR_11;
 size_t VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = VAR_5;
 if ((VAR_11->td_pflags & VAR_2) == 0 ||
     VAR_8->uio_segflg != VAR_4)
  return (FUNC_1(VAR_6, VAR_7, VAR_8));

 FUNC_0(VAR_8->uio_iovcnt == 1, ("uio_iovcnt %d", VAR_8->uio_iovcnt));
 VAR_10[0].iov_base = VAR_6;
 VAR_9.uio_iov = &VAR_10[0];
 VAR_9.uio_iovcnt = 1;
 if (VAR_7 > VAR_8->uio_resid)
  VAR_7 = VAR_8->uio_resid;
 VAR_9.uio_resid = VAR_10[0].iov_len = VAR_7;
 VAR_9.uio_offset = 0;
 VAR_9.uio_segflg = VAR_3;






 switch (VAR_8->uio_rw) {
 case 128:
  VAR_9.uio_rw = 129;
  break;
 case 129:
  VAR_9.uio_rw = 128;
  break;
 }
 VAR_9.uio_td = VAR_8->uio_td;
 VAR_13 = FUNC_2(VAR_11->td_ma,
     ((vm_offset_t)VAR_8->uio_iov->iov_base) & VAR_0,
     VAR_7, &VAR_9);
 VAR_12 = VAR_7 - VAR_9.uio_resid;
 VAR_14 =
     (((vm_offset_t)VAR_8->uio_iov->iov_base + VAR_12) >> VAR_1) -
     (((vm_offset_t)VAR_8->uio_iov->iov_base) >> VAR_1);
 VAR_11->td_ma += VAR_14;
 FUNC_0(VAR_11->td_ma_cnt >= VAR_14, ("consumed pages %d %d", VAR_11->td_ma_cnt,
     VAR_14));
 VAR_11->td_ma_cnt -= VAR_14;
 VAR_8->uio_iov->iov_base = (char *)VAR_8->uio_iov->iov_base + VAR_12;
 VAR_8->uio_iov->iov_len -= VAR_12;
 VAR_8->uio_resid -= VAR_12;
 VAR_8->uio_offset += VAR_12;
 return (VAR_13);
}
