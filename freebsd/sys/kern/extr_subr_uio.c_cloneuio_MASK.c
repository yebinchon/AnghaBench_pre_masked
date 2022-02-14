
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_iovcnt; struct iovec* uio_iov; } ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iovec*,struct iovec*,int) ;
 struct uio* FUNC_1 (int,int ,int ) ;

struct uio *
FUNC_2(struct uio *VAR_2)
{
 struct uio *VAR_3;
 int VAR_4;

 VAR_4 = VAR_2->uio_iovcnt * sizeof (struct iovec);
 VAR_3 = FUNC_1(VAR_4 + sizeof *VAR_3, VAR_0, VAR_1);
 *VAR_3 = *VAR_2;
 VAR_3->uio_iov = (struct iovec *)(VAR_3 + 1);
 FUNC_0(VAR_2->uio_iov, VAR_3->uio_iov, VAR_4);
 return (VAR_3);
}
