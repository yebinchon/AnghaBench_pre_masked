
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {TYPE_1__* uio_iov; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,scalar_t__*) ;
 int FUNC_1 (struct cdev*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int ,struct uio*,int) ;

int
FUNC_3(struct cdev *VAR_2, struct uio *VAR_3, int VAR_4)
{
    int VAR_5 = 0;

    FUNC_2("mydev_read: dev_t=%lu, uio=%p, ioflag=%d\n",
 FUNC_1(VAR_2), VAR_3, VAR_4);

    if (VAR_1 <= 0) {
 VAR_5 = -1;
    } else {
 FUNC_0(&VAR_0, VAR_3->uio_iov->iov_base, 513, &VAR_1);
    }
    return(VAR_5);
}
