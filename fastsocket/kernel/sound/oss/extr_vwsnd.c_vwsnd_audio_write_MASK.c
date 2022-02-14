
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_mutex; } ;
typedef TYPE_1__ vwsnd_dev_t ;
struct file {TYPE_1__* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,char const*,size_t,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_0,
     const char *VAR_1,
     size_t VAR_2,
     loff_t *VAR_3)
{
 vwsnd_dev_t *VAR_4 = VAR_0->private_data;
 ssize_t VAR_5;

 FUNC_0(&VAR_4->io_mutex);
 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_4->io_mutex);
 return VAR_5;
}
