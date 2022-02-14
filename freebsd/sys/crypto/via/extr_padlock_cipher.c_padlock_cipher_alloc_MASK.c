
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct uio {int uio_iovcnt; struct iovec* uio_iov; } ;
struct iovec {scalar_t__ iov_base; } ;
struct cryptop {int crp_flags; scalar_t__ crp_buf; } ;
struct cryptodesc {int crd_skip; scalar_t__ crd_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (scalar_t__,int ,int ) ;

__attribute__((used)) static u_char *
FUNC_1(struct cryptodesc *VAR_4, struct cryptop *VAR_5,
    int *VAR_6)
{
 u_char *VAR_7;

 if (VAR_5->crp_flags & VAR_0)
  goto alloc;
 else {
  if (VAR_5->crp_flags & VAR_1) {
   struct uio *VAR_8;
   struct iovec *VAR_9;

   VAR_8 = (struct uio *)VAR_5->crp_buf;
   if (VAR_8->uio_iovcnt != 1)
    goto alloc;
   VAR_9 = VAR_8->uio_iov;
   VAR_7 = (u_char *)VAR_9->iov_base + VAR_4->crd_skip;
  } else {
   VAR_7 = (u_char *)VAR_5->crp_buf;
  }
  if (((uintptr_t)VAR_7 & 0xf) != 0)
   goto alloc;
  *VAR_6 = 0;
  return (VAR_7);
 }
alloc:
 *VAR_6 = 1;
 VAR_7 = FUNC_0(VAR_4->crd_len + 16, VAR_3, VAR_2);
 return (VAR_7);
}
