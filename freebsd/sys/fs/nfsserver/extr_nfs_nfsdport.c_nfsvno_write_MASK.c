
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct uio {int uio_iovcnt; int uio_resid; int uio_offset; int uio_segflg; int uio_rw; struct iovec* uio_iov; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsheur {int nh_seqcount; int nh_nextoff; } ;
struct mbuf {int m_len; struct mbuf* m_next; } ;
struct iovec {char* iov_base; int iov_len; } ;
typedef int off_t ;
struct TYPE_2__ {int* srvbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (struct uio*,struct thread*) ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct vnode*,struct uio*,int,struct ucred*) ;
 int VAR_12 ;
 int FUNC_3 (struct iovec*,int ) ;
 struct iovec* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int,int) ;
 char* FUNC_6 (struct mbuf*,int ) ;
 int FUNC_7 (struct vnode*,int ,int,struct ucred*,struct thread*,int ,struct mbuf**,char*,int *,int *,int *) ;
 struct nfsheur* FUNC_8 (struct uio*,struct vnode*) ;
 TYPE_1__ VAR_13 ;
 int FUNC_9 (char*) ;

int
FUNC_10(struct vnode *VAR_14, off_t VAR_15, int VAR_16, int VAR_17, int *VAR_18,
    struct mbuf *VAR_19, char *VAR_20, struct ucred *VAR_21, struct thread *VAR_22)
{
 struct iovec *VAR_23;
 int VAR_24, VAR_25;
 struct iovec *VAR_26;
 int VAR_27, VAR_28;
 struct uio VAR_29, *VAR_30 = &VAR_29;
 struct nfsheur *VAR_31;





 VAR_28 = FUNC_7(VAR_14, VAR_15, VAR_16, VAR_21, VAR_22, VAR_6,
     &VAR_19, VAR_20, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_28 != VAR_0) {
  *VAR_18 = VAR_8;
  return (VAR_28);
 }

 VAR_23 = FUNC_4(VAR_17 * sizeof (struct iovec), VAR_4,
     VAR_5);
 VAR_30->uio_iov = VAR_26 = VAR_23;
 VAR_30->uio_iovcnt = VAR_17;
 VAR_24 = FUNC_6(VAR_19, VAR_12) + VAR_19->m_len - VAR_20;
 VAR_25 = VAR_16;
 while (VAR_25 > 0) {
  if (VAR_19 == ((void*)0))
   FUNC_9("nfsvno_write");
  if (VAR_24 > 0) {
   VAR_24 = FUNC_5(VAR_24, VAR_25);
   VAR_23->iov_base = VAR_20;
   VAR_23->iov_len = VAR_24;
   VAR_23++;
   VAR_25 -= VAR_24;
  }
  VAR_19 = VAR_19->m_next;
  if (VAR_19) {
   VAR_24 = VAR_19->m_len;
   VAR_20 = FUNC_6(VAR_19, VAR_12);
  }
 }

 if (*VAR_18 == VAR_9)
  VAR_27 = VAR_1;
 else
  VAR_27 = (VAR_3 | VAR_1);
 VAR_30->uio_resid = VAR_16;
 VAR_30->uio_rw = VAR_11;
 VAR_30->uio_segflg = VAR_10;
 FUNC_1(VAR_30, VAR_22);
 VAR_30->uio_offset = VAR_15;
 VAR_31 = FUNC_8(VAR_30, VAR_14);
 VAR_27 |= VAR_31->nh_seqcount << VAR_2;

 VAR_13[VAR_7] += VAR_30->uio_resid;
 VAR_28 = FUNC_2(VAR_14, VAR_30, VAR_27, VAR_21);
 if (VAR_28 == 0)
  VAR_31->nh_nextoff = VAR_30->uio_offset;
 FUNC_3(VAR_26, VAR_4);

 FUNC_0(VAR_28);
 return (VAR_28);
}
