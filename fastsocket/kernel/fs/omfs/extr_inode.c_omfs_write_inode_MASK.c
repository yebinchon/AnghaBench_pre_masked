
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; } ;
struct inode {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*,int) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct writeback_control *VAR_2)
{
 return FUNC_0(VAR_1, VAR_2->sync_mode == VAR_0);
}
