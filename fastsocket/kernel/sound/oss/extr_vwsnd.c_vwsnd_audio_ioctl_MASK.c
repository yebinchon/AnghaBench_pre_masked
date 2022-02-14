
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_mutex; } ;
typedef TYPE_1__ vwsnd_dev_t ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0,
    struct file *VAR_1,
    unsigned int VAR_2,
    unsigned long VAR_3)
{
 vwsnd_dev_t *VAR_4 = (vwsnd_dev_t *) VAR_1->private_data;
 int VAR_5;

 FUNC_0(&VAR_4->io_mutex);
 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_4->io_mutex);
 return VAR_5;
}
