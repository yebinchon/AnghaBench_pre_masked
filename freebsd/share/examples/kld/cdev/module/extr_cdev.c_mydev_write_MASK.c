
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {TYPE_1__* uio_iov; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int *) ;
 int FUNC_1 (struct cdev*) ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;

int
FUNC_3(struct cdev *VAR_2, struct uio *VAR_3, int VAR_4)
{
    int VAR_5 = 0;

    FUNC_2("mydev_write: dev_t=%lu, uio=%p, ioflag=%d\n",
 FUNC_1(VAR_2), VAR_3, VAR_4);

    VAR_5 = FUNC_0(VAR_3->uio_iov->iov_base, &VAR_0, 512, &VAR_1);
    if (VAR_5 != 0) {
 FUNC_2("Write to \"cdev\" failed.\n");
    }
    return(VAR_5);
}
