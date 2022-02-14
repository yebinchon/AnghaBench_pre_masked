
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct uio {int uio_iovcnt; int uio_resid; int * uio_td; int uio_segflg; int uio_rw; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct mbuf {int m_len; struct mbuf* m_next; } ;
struct iovec {int iov_len; int iov_base; } ;


 int FUNC_0 (struct mbuf*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct vnode*,struct uio*,struct ucred*) ;
 int VAR_5 ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (struct mbuf*,int ) ;
 int FUNC_8 (struct mbuf*,int,int) ;

int
FUNC_9(struct vnode *VAR_6, struct ucred *VAR_7, struct thread *VAR_8,
    struct mbuf **VAR_9, struct mbuf **VAR_10, int *VAR_11)
{
 struct iovec VAR_12[(VAR_2+VAR_0-1)/VAR_0];
 struct iovec *VAR_13 = VAR_12;
 struct uio VAR_14, *VAR_15 = &VAR_14;
 struct mbuf *VAR_16, *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 int VAR_19, VAR_20, VAR_21, VAR_22 = 0;

 VAR_20 = 0;
 VAR_19 = 0;
 while (VAR_20 < VAR_2) {
  FUNC_3(VAR_16);
  FUNC_0(VAR_16, VAR_1);
  VAR_16->m_len = FUNC_1(VAR_16);
  if (VAR_20 == 0) {
   VAR_18 = VAR_17 = VAR_16;
  } else {
   VAR_17->m_next = VAR_16;
   VAR_17 = VAR_16;
  }
  if ((VAR_20 + VAR_16->m_len) > VAR_2) {
   VAR_16->m_len = VAR_2 - VAR_20;
   VAR_20 = VAR_2;
  } else {
   VAR_20 += VAR_16->m_len;
  }
  VAR_13->iov_base = FUNC_7(VAR_16, VAR_5);
  VAR_13->iov_len = VAR_16->m_len;
  VAR_19++;
  VAR_13++;
 }
 VAR_15->uio_iov = VAR_12;
 VAR_15->uio_iovcnt = VAR_19;
 VAR_15->uio_offset = 0;
 VAR_15->uio_resid = VAR_20;
 VAR_15->uio_rw = VAR_3;
 VAR_15->uio_segflg = VAR_4;
 VAR_15->uio_td = ((void*)0);
 VAR_22 = FUNC_5(VAR_6, VAR_15, VAR_7);
 if (VAR_22) {
  FUNC_6(VAR_18);
  *VAR_11 = 0;
  goto out;
 }
 if (VAR_15->uio_resid > 0) {
  VAR_20 -= VAR_15->uio_resid;
  VAR_21 = FUNC_4(VAR_20);
  FUNC_8(VAR_18, VAR_2 - VAR_21, VAR_21 - VAR_20);
 }
 *VAR_11 = VAR_20;
 *VAR_9 = VAR_18;
 *VAR_10 = VAR_16;

out:
 FUNC_2(VAR_22);
 return (VAR_22);
}
