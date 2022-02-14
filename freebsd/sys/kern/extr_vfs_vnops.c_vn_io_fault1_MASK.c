
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_page_t ;
typedef size_t vm_offset_t ;
struct vnode {int dummy; } ;
struct vn_io_fault_args {int dummy; } ;
struct uio {scalar_t__ uio_rw; size_t uio_resid; int uio_iovcnt; size_t uio_offset; struct iovec* uio_iov; int uio_segflg; int uio_td; } ;
struct thread {int td_ma_cnt; int * td_ma; TYPE_2__* td_proc; } ;
struct iovec {size_t iov_len; char* iov_base; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {TYPE_1__* p_vmspace; } ;
struct TYPE_3__ {int vm_map; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__) ;
 struct uio* FUNC_3 (struct uio*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct uio*,int ) ;
 int VAR_9 ;
 size_t FUNC_7 (size_t) ;
 scalar_t__ FUNC_8 (size_t) ;
 int FUNC_9 (int *,size_t,struct uio*) ;
 int FUNC_10 (int *,size_t,size_t,int ,int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (struct vn_io_fault_args*,struct uio*,struct thread*) ;
 scalar_t__ VAR_10 ;
 int FUNC_13 (struct uio*) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_14(struct vnode *VAR_12, struct uio *VAR_13, struct vn_io_fault_args *VAR_14,
    struct thread *VAR_15)
{
 vm_page_t VAR_16[VAR_9 + 2];
 struct uio *VAR_17, VAR_18;
 struct iovec VAR_19[1];
 vm_page_t *VAR_20;
 vm_prot_t VAR_21;
 vm_offset_t VAR_22, VAR_23;
 size_t VAR_24, VAR_25;
 ssize_t VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;

 if (VAR_10) {
  VAR_27 = FUNC_13(VAR_13);
  if (VAR_27 != 0)
   return (VAR_27);
 }

 VAR_21 = VAR_13->uio_rw == VAR_5 ? VAR_8 : VAR_7;
 VAR_17 = FUNC_3(VAR_13);
 VAR_25 = VAR_13->uio_resid;

 VAR_18.uio_segflg = VAR_6;
 VAR_18.uio_rw = VAR_13->uio_rw;
 VAR_18.uio_td = VAR_13->uio_td;

 VAR_27 = FUNC_12(VAR_14, VAR_13, VAR_15);
 if (VAR_27 != VAR_0)
  goto out;

 FUNC_1(&VAR_11, 1);
 VAR_17->uio_segflg = VAR_4;
 FUNC_9(((void*)0), VAR_25 - VAR_13->uio_resid, VAR_17);
 VAR_17->uio_segflg = VAR_13->uio_segflg;

 VAR_29 = FUNC_5(VAR_3);
 VAR_20 = VAR_15->td_ma;
 VAR_30 = VAR_15->td_ma_cnt;

 while (VAR_17->uio_resid != 0) {
  VAR_24 = VAR_17->uio_iov->iov_len;
  if (VAR_24 == 0) {
   FUNC_0(VAR_17->uio_iovcnt >= 1,
       ("iovcnt underflow"));
   VAR_17->uio_iov++;
   VAR_17->uio_iovcnt--;
   continue;
  }
  if (VAR_24 > VAR_9 * VAR_2)
   VAR_24 = VAR_9 * VAR_2;
  VAR_22 = (uintptr_t)VAR_17->uio_iov->iov_base;
  VAR_23 = FUNC_7(VAR_22 + VAR_24);
  if (VAR_23 < VAR_22) {
   VAR_27 = VAR_0;
   break;
  }
  VAR_28 = FUNC_2(VAR_23 - FUNC_8(VAR_22));





  VAR_28 = FUNC_10(&VAR_15->td_proc->p_vmspace->vm_map,
      VAR_22, VAR_24, VAR_21, VAR_16, VAR_9 + 2);
  if (VAR_28 == -1) {
   VAR_27 = VAR_0;
   break;
  }
  VAR_18.uio_iov = &VAR_19[0];
  VAR_19[0].iov_base = (void *)VAR_22;
  VAR_18.uio_iovcnt = 1;
  VAR_18.uio_resid = VAR_19[0].iov_len = VAR_24;
  VAR_18.uio_offset = VAR_17->uio_offset;
  VAR_15->td_ma = VAR_16;
  VAR_15->td_ma_cnt = VAR_28;

  VAR_27 = FUNC_12(VAR_14, &VAR_18, VAR_15);
  FUNC_11(VAR_16, VAR_28);
  VAR_26 = VAR_24 - VAR_18.uio_resid;

  VAR_17->uio_iov->iov_base =
      (char *)VAR_17->uio_iov->iov_base + VAR_26;
  VAR_17->uio_iov->iov_len -= VAR_26;
  VAR_17->uio_resid -= VAR_26;
  VAR_17->uio_offset += VAR_26;

  VAR_13->uio_resid -= VAR_26;
  VAR_13->uio_offset += VAR_26;

  if (VAR_27 != 0 || VAR_26 == 0)
   break;
 }
 VAR_15->td_ma = VAR_20;
 VAR_15->td_ma_cnt = VAR_30;
 FUNC_4(VAR_29);
out:
 FUNC_6(VAR_17, VAR_1);
 return (VAR_27);
}
