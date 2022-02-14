
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int lock; int start; scalar_t__ tail; scalar_t__ head; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_3(struct inode * VAR_1, struct file * VAR_2)
{

 FUNC_1(&VAR_0.lock);
 VAR_0.head = VAR_0.tail = 0;
 VAR_0.start = FUNC_0();
 FUNC_2(&VAR_0.lock);

 return 0;
}
