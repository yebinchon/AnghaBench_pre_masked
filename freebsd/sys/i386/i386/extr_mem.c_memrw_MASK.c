
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef void* vm_offset_t ;
typedef scalar_t__ u_int ;
struct uio {scalar_t__ uio_resid; scalar_t__ uio_offset; scalar_t__ uio_rw; scalar_t__ uio_iovcnt; struct iovec* uio_iov; } ;
struct iovec {scalar_t__ iov_len; } ;
struct cdev {int dummy; } ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (struct cdev*) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,void*) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (void*,scalar_t__) ;
 int FUNC_8 (void*,int) ;
 int * VAR_11 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,int,struct uio*) ;

int
FUNC_13(struct cdev *VAR_12, struct uio *VAR_13, int VAR_14)
{
 int VAR_15;
 u_int VAR_16 = 0;
 vm_paddr_t VAR_17;
 struct iovec *VAR_18;
 int VAR_19 = 0;
 vm_offset_t VAR_20;

 if (FUNC_1(VAR_12) != VAR_1 && FUNC_1(VAR_12) != VAR_0)
  return VAR_3;

 if (FUNC_1(VAR_12) == VAR_0 && VAR_13->uio_resid > 0) {
  if (!FUNC_2((caddr_t)(int)VAR_13->uio_offset, VAR_13->uio_resid,
      VAR_13->uio_rw == VAR_6 ? VAR_7 : VAR_8))
   return (VAR_2);
 }

 while (VAR_13->uio_resid > 0 && VAR_19 == 0) {
  VAR_18 = VAR_13->uio_iov;
  if (VAR_18->iov_len == 0) {
   VAR_13->uio_iov++;
   VAR_13->uio_iovcnt--;
   if (VAR_13->uio_iovcnt < 0)
    FUNC_4("memrw");
   continue;
  }
  if (FUNC_1(VAR_12) == VAR_1) {
   if (VAR_13->uio_offset > FUNC_0()) {
    VAR_19 = VAR_2;
    break;
   }
   VAR_17 = FUNC_11(VAR_13->uio_offset);
  } else {
   VAR_20 = FUNC_11(VAR_13->uio_offset);
   VAR_17 = FUNC_5(VAR_9, VAR_20);
   if (VAR_17 == 0)
    return VAR_2;

  }
  FUNC_9(&VAR_10);
  FUNC_7((vm_offset_t)VAR_11, VAR_17);
  FUNC_6(VAR_9,(vm_offset_t)VAR_11);

  VAR_15 = (int)VAR_13->uio_offset & VAR_4;
  VAR_16 = VAR_5 - VAR_15;
  VAR_16 = FUNC_3(VAR_16, (u_int)VAR_18->iov_len);
  VAR_19 = FUNC_12((caddr_t)&VAR_11[VAR_15], (int)VAR_16, VAR_13);
  FUNC_8((vm_offset_t)VAR_11, 1);
  FUNC_10(&VAR_10);
 }

 return (VAR_19);
}
