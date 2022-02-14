
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef struct vm_page* vm_page_t ;
typedef int vm_offset_t ;
struct vm_page {void* phys_addr; } ;
struct uio {scalar_t__ uio_resid; scalar_t__ uio_iovcnt; int uio_offset; scalar_t__ uio_rw; struct iovec* uio_iov; } ;
struct iovec {scalar_t__ iov_len; scalar_t__ iov_base; } ;
struct cdev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct cdev*) ;
 scalar_t__ FUNC_1 (void*,scalar_t__,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (struct vm_page*) ;
 int FUNC_6 (scalar_t__) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (void*,scalar_t__,struct uio*) ;
 int FUNC_9 (struct vm_page**,int,scalar_t__,struct uio*) ;

int
FUNC_10(struct cdev *VAR_12, struct uio *VAR_13, int VAR_14)
{
 struct iovec *VAR_15;
 int VAR_16 = 0;
 vm_offset_t VAR_17, VAR_18, VAR_19, VAR_20;
 vm_prot_t VAR_21;
 struct vm_page VAR_22;
 vm_page_t VAR_23;
 vm_size_t VAR_24;

 VAR_24 = 0;
 VAR_16 = 0;

 FUNC_5(&VAR_22);
 while (VAR_13->uio_resid > 0 && !VAR_16) {
  VAR_15 = VAR_13->uio_iov;
  if (VAR_15->iov_len == 0) {
   VAR_13->uio_iov++;
   VAR_13->uio_iovcnt--;
   if (VAR_13->uio_iovcnt < 0)
    FUNC_3("memrw");
   continue;
  }
  if (FUNC_0(VAR_12) == VAR_1) {
   VAR_20 = VAR_13->uio_offset;

   VAR_19 = VAR_13->uio_offset & VAR_4;
   VAR_24 = VAR_5 - ((vm_offset_t)VAR_15->iov_base &
       VAR_4);
   VAR_24 = FUNC_2(VAR_24, VAR_5 - VAR_19);
   VAR_24 = FUNC_2(VAR_24, VAR_15->iov_len);

   VAR_22.phys_addr = FUNC_7(VAR_20);
   VAR_23 = &VAR_22;
   VAR_16 = FUNC_9(&VAR_23, VAR_19, VAR_24, VAR_13);
  }
  else if (FUNC_0(VAR_12) == VAR_0) {
   VAR_17 = VAR_13->uio_offset;

   VAR_17 = FUNC_7(VAR_13->uio_offset);
   VAR_18 = FUNC_6(VAR_13->uio_offset
       + VAR_15->iov_len);





   if (VAR_17 >= VAR_8 &&
       VAR_18 <= VAR_7) {
    for (; VAR_17 < VAR_18; VAR_17 += VAR_5)
     if (FUNC_4(VAR_11, VAR_17) == 0)
      return (VAR_2);

    VAR_21 = (VAR_13->uio_rw == VAR_6)
        ? VAR_9 : VAR_10;

    VAR_17 = VAR_13->uio_offset;
    if (FUNC_1((void *) VAR_17, VAR_15->iov_len, VAR_21)
        == VAR_3)
     return (VAR_2);
   }

   VAR_17 = VAR_13->uio_offset;
   VAR_16 = FUNC_8((void *)VAR_17, VAR_15->iov_len, VAR_13);
   continue;
  }
 }

 return (VAR_16);
}
