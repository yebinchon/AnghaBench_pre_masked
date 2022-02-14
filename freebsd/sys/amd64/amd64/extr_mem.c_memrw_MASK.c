
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_long ;
typedef scalar_t__ u_int ;
struct uio {scalar_t__ uio_resid; scalar_t__ uio_iovcnt; int uio_offset; int uio_rw; struct iovec* uio_iov; } ;
struct iovec {scalar_t__ iov_len; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ ssize_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (struct cdev*) ;
 int VAR_7 ;
 int FUNC_3 (void*,scalar_t__,int ) ;
 int VAR_8 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int) ;
 void* FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (void*,scalar_t__,struct uio*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

int
FUNC_10(struct cdev *VAR_9, struct uio *VAR_10, int VAR_11)
{
 struct iovec *VAR_12;
 void *VAR_13;
 ssize_t VAR_14;
 u_long VAR_15, VAR_16;
 u_int VAR_17;
 int VAR_18;

 VAR_18 = 0;
 VAR_14 = VAR_10->uio_resid;
 while (VAR_10->uio_resid > 0 && VAR_18 == 0) {
  VAR_12 = VAR_10->uio_iov;
  if (VAR_12->iov_len == 0) {
   VAR_10->uio_iov++;
   VAR_10->uio_iovcnt--;
   if (VAR_10->uio_iovcnt < 0)
    FUNC_4("memrw");
   continue;
  }
  VAR_15 = VAR_10->uio_offset;
  VAR_17 = FUNC_9(VAR_12->iov_len, VAR_3 - (u_int)(VAR_15 & VAR_2));

  switch (FUNC_2(VAR_9)) {
  case 129:





   if (VAR_15 >= VAR_0 &&
       VAR_15 < VAR_0 + VAR_7) {
    VAR_18 = FUNC_8((void *)VAR_15, VAR_17, VAR_10);
    break;
   }

   if (!FUNC_3((void *)VAR_15, VAR_17, VAR_10->uio_rw == VAR_4 ?
       VAR_5 : VAR_6)) {
    VAR_18 = VAR_1;
    break;
   }
   VAR_15 = FUNC_5(VAR_8, VAR_15);
   if (VAR_15 == 0) {
    VAR_18 = VAR_1;
    break;
   }

  case 128:
   if (VAR_15 < VAR_7) {
    VAR_16 = FUNC_0(VAR_15);
    VAR_18 = FUNC_8((void *)VAR_16, VAR_17, VAR_10);
    break;
   }
   if (VAR_15 > FUNC_1()) {
    VAR_18 = VAR_1;
    break;
   }
   VAR_13 = FUNC_6(VAR_15, VAR_3);
   VAR_18 = FUNC_8(VAR_13, VAR_17, VAR_10);
   FUNC_7((vm_offset_t)VAR_13, VAR_3);
   break;
  }
 }




 if (VAR_10->uio_resid != VAR_14)
  VAR_18 = 0;
 return (VAR_18);
}
