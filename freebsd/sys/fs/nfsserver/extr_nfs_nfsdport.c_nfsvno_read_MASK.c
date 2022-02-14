
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct uio {int uio_iovcnt; int uio_resid; int uio_offset; int * uio_td; int uio_segflg; int uio_rw; struct iovec* uio_iov; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsheur {int nh_seqcount; int nh_nextoff; } ;
struct mbuf {struct mbuf* m_next; scalar_t__ m_len; } ;
struct iovec {int iov_len; scalar_t__ iov_base; } ;
typedef int off_t ;
struct TYPE_2__ {int* srvbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mbuf*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct vnode*,struct uio*,int,struct ucred*) ;
 int VAR_9 ;
 int FUNC_6 (struct iovec*,int ) ;
 int FUNC_7 (struct mbuf*) ;
 struct iovec* FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (struct mbuf*,int ) ;
 int FUNC_11 (struct mbuf*,int,int) ;
 int FUNC_12 (struct vnode*,int ,int,struct ucred*,struct thread*,int ,struct mbuf**,int *,struct mbuf**,int *,int *) ;
 struct nfsheur* FUNC_13 (struct uio*,struct vnode*) ;
 TYPE_1__ VAR_10 ;
 int FUNC_14 (char*) ;

int
FUNC_15(struct vnode *VAR_11, off_t VAR_12, int VAR_13, struct ucred *VAR_14,
    struct thread *VAR_15, struct mbuf **VAR_16, struct mbuf **VAR_17)
{
 struct mbuf *VAR_18;
 int VAR_19;
 struct iovec *VAR_20;
 struct iovec *VAR_21;
 int VAR_22 = 0, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27 = 0;
 struct mbuf *VAR_28 = ((void*)0), *VAR_29;
 struct uio VAR_30, *VAR_31 = &VAR_30;
 struct nfsheur *VAR_32;





 VAR_22 = FUNC_12(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_5, VAR_16,
     ((void*)0), VAR_17, ((void*)0), ((void*)0));
 if (VAR_22 != VAR_0)
  return (VAR_22);

 VAR_23 = VAR_24 = FUNC_4(VAR_13);
 VAR_29 = ((void*)0);



 VAR_19 = 0;
 while (VAR_24 > 0) {
  FUNC_3(VAR_18);
  FUNC_0(VAR_18, VAR_4);
  VAR_18->m_len = 0;
  VAR_25 = FUNC_9(FUNC_1(VAR_18), VAR_24);
  VAR_24 -= VAR_25;
  VAR_19++;
  if (VAR_29)
   VAR_28->m_next = VAR_18;
  else
   VAR_29 = VAR_18;
  VAR_28 = VAR_18;
 }
 VAR_20 = FUNC_8(VAR_19 * sizeof (struct iovec),
     VAR_3, VAR_4);
 VAR_31->uio_iov = VAR_21 = VAR_20;
 VAR_18 = VAR_29;
 VAR_24 = VAR_23;
 VAR_19 = 0;
 while (VAR_24 > 0) {
  if (VAR_18 == ((void*)0))
   FUNC_14("nfsvno_read iov");
  VAR_25 = FUNC_9(FUNC_1(VAR_18), VAR_24);
  if (VAR_25 > 0) {
   VAR_20->iov_base = FUNC_10(VAR_18, VAR_9) + VAR_18->m_len;
   VAR_20->iov_len = VAR_25;
   VAR_18->m_len += VAR_25;
   VAR_24 -= VAR_25;
   VAR_20++;
   VAR_19++;
  }
  VAR_18 = VAR_18->m_next;
 }
 VAR_31->uio_iovcnt = VAR_19;
 VAR_31->uio_offset = VAR_12;
 VAR_31->uio_resid = VAR_23;
 VAR_31->uio_rw = VAR_7;
 VAR_31->uio_segflg = VAR_8;
 VAR_31->uio_td = ((void*)0);
 VAR_32 = FUNC_13(VAR_31, VAR_11);
 VAR_27 |= VAR_32->nh_seqcount << VAR_2;

 VAR_10[VAR_6] += VAR_31->uio_resid;
 VAR_22 = FUNC_5(VAR_11, VAR_31, VAR_1 | VAR_27, VAR_14);
 FUNC_6(VAR_21, VAR_3);
 if (VAR_22) {
  FUNC_7(VAR_29);
  *VAR_16 = ((void*)0);
  goto out;
 }
 VAR_32->nh_nextoff = VAR_31->uio_offset;
 VAR_26 = VAR_23 - VAR_31->uio_resid;
 VAR_13 = VAR_13 < VAR_26 ? VAR_13 : VAR_26;
 VAR_26 = FUNC_4(VAR_13);
 if (VAR_26 == 0) {
  FUNC_7(VAR_29);
  VAR_29 = ((void*)0);
 } else if (VAR_23 != VAR_26 || VAR_26 != VAR_13)
  FUNC_11(VAR_29, VAR_23 - VAR_26, VAR_26 - VAR_13);
 *VAR_16 = VAR_29;
 *VAR_17 = VAR_28;

out:
 FUNC_2(VAR_22);
 return (VAR_22);
}
