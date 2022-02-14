
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mutex; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_4, struct file *VAR_5)
{
 if (!FUNC_0(VAR_0))
  return -VAR_1;
 if (VAR_2)
  FUNC_3();
 if (FUNC_1(VAR_4) != VAR_3->size) {
  FUNC_4(&VAR_4->i_mutex);
  FUNC_2(VAR_4, VAR_3->size);
  FUNC_5(&VAR_4->i_mutex);
 }
 return 0;
}
