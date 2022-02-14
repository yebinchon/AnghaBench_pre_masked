
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ u_int ;
struct uio {scalar_t__ uio_resid; scalar_t__ uio_iovcnt; scalar_t__ uio_offset; scalar_t__ uio_rw; struct iovec* uio_iov; } ;
struct iovec {scalar_t__ iov_len; scalar_t__ iov_base; } ;
struct cdev {int dummy; } ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 scalar_t__ FUNC_0 (struct cdev*) ;
 scalar_t__* VAR_10 ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,int,struct uio*) ;

int
FUNC_13(struct cdev *VAR_13, struct uio *VAR_14, int VAR_15)
{
 int VAR_16;
 u_int VAR_17 = 0, VAR_18;
 struct iovec *VAR_19;
 int VAR_20 = 0;
 vm_offset_t VAR_21, VAR_22;

 while (VAR_14->uio_resid > 0 && VAR_20 == 0) {
  VAR_19 = VAR_14->uio_iov;
  if (VAR_19->iov_len == 0) {
   VAR_14->uio_iov++;
   VAR_14->uio_iovcnt--;
   if (VAR_14->uio_iovcnt < 0)
    FUNC_3("memrw");
   continue;
  }
  if (FUNC_0(VAR_13) == VAR_1) {
   int VAR_23;
   int VAR_24 = 0;

   VAR_18 = VAR_14->uio_offset;
   VAR_18 &= ~VAR_4;
   for (VAR_23 = 0; VAR_10[VAR_23] || VAR_10[VAR_23 + 1];
   VAR_23 += 2) {
    if (VAR_18 >= VAR_10[VAR_23] &&
        VAR_18 < VAR_10[VAR_23 + 1]) {
     VAR_24 = 1;
     break;
    }
   }
   if (!VAR_24)
    return (VAR_3);
   FUNC_9(&VAR_12);
   FUNC_5((vm_offset_t)VAR_9, VAR_18);



   VAR_16 = (int)VAR_14->uio_offset & VAR_4;
   VAR_17 = (u_int)(VAR_5 - ((int)VAR_19->iov_base & VAR_4));
   VAR_17 = FUNC_2(VAR_17, (u_int)(VAR_5 - VAR_16));
   VAR_17 = FUNC_2(VAR_17, (u_int)VAR_19->iov_len);
   VAR_20 = FUNC_12((caddr_t)&VAR_9[VAR_16], (int)VAR_17, VAR_14);
   FUNC_6((vm_offset_t)VAR_9, 1);
   FUNC_10(&VAR_12);
   continue;
  }
  else if (FUNC_0(VAR_13) == VAR_0) {
   VAR_17 = VAR_19->iov_len;






   VAR_21 = FUNC_11(VAR_14->uio_offset);
   VAR_22 = FUNC_8(VAR_14->uio_offset + VAR_17);

   for (; VAR_21 < VAR_22; VAR_21 += VAR_5)
    if (FUNC_4(VAR_11, VAR_21) == 0)
     return (VAR_2);
   if (!FUNC_1((caddr_t)(int)VAR_14->uio_offset, VAR_17,
       VAR_14->uio_rw == VAR_6 ?
       VAR_7 : VAR_8))
     return (VAR_2);
   VAR_20 = FUNC_12((caddr_t)(int)VAR_14->uio_offset, (int)VAR_17, VAR_14);
   continue;
  }

 }
 return (VAR_20);
}
