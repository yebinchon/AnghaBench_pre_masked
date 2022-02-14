
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; } ;
struct inode {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 () ;

int FUNC_3(struct inode *VAR_1, struct writeback_control *VAR_2)
{
 int VAR_3;

 FUNC_0();
 VAR_3 = FUNC_1(VAR_1, VAR_2->sync_mode == VAR_0);
 FUNC_2();

 return VAR_3;
}
