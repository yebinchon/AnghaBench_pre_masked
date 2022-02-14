
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uio {int uio_iovcnt; struct thread* uio_td; int uio_rw; int uio_segflg; int uio_resid; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct thread {TYPE_1__* td_proc; } ;
struct proto_md {int physaddr; int bd_map; int bd_tag; } ;
struct TYPE_5__ {int phys_nsegs; int phys_addr; scalar_t__ virt_addr; int virt_size; } ;
struct TYPE_6__ {TYPE_2__ md; } ;
struct proto_ioc_busdma {TYPE_3__ u; } ;
struct proto_callback_bundle {struct proto_ioc_busdma* ioc; struct proto_md* md; struct proto_busdma* busdma; } ;
struct proto_busdma {int dummy; } ;
struct iovec {int iov_len; void* iov_base; } ;
typedef int pmap_t ;
struct TYPE_4__ {int p_vmspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct uio*,int ,struct proto_callback_bundle*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct proto_busdma *VAR_4, struct proto_md *VAR_5,
    struct proto_ioc_busdma *VAR_6, struct thread *VAR_7)
{
 struct proto_callback_bundle VAR_8;
 struct iovec VAR_9;
 struct uio VAR_10;
 pmap_t VAR_11;
 int VAR_12;

 VAR_9.iov_base = (void *)(uintptr_t)VAR_6->u.md.virt_addr;
 VAR_9.iov_len = VAR_6->u.md.virt_size;
 VAR_10.uio_iov = &VAR_9;
 VAR_10.uio_iovcnt = 1;
 VAR_10.uio_offset = 0;
 VAR_10.uio_resid = VAR_9.iov_len;
 VAR_10.uio_segflg = VAR_2;
 VAR_10.uio_rw = VAR_1;
 VAR_10.uio_td = VAR_7;

 VAR_8.busdma = VAR_4;
 VAR_8.md = VAR_5;
 VAR_8.ioc = VAR_6;
 VAR_12 = FUNC_0(VAR_5->bd_tag, VAR_5->bd_map, &VAR_10,
     VAR_3, &VAR_8, VAR_0);
 if (VAR_12)
  return (VAR_12);


 VAR_11 = FUNC_2(VAR_7->td_proc->p_vmspace);
 VAR_5->physaddr = FUNC_1(VAR_11, VAR_6->u.md.virt_addr);
 VAR_6->u.md.phys_nsegs = 1;
 VAR_6->u.md.phys_addr = VAR_5->physaddr;
 return (0);
}
