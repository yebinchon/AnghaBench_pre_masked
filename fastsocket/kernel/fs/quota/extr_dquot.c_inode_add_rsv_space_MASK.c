
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; } ;
typedef scalar_t__ qsize_t ;


 int * FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct inode *VAR_0, qsize_t VAR_1)
{
 FUNC_1(&VAR_0->i_lock);
 *FUNC_0(VAR_0) += VAR_1;
 FUNC_2(&VAR_0->i_lock);
}
