
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int range_cyclic; int nr_to_write; int * older_than_this; int sync_mode; } ;
struct backing_dev_info {int wb; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct writeback_control*) ;

__attribute__((used)) static void FUNC_1(struct backing_dev_info *VAR_1)
{
 struct writeback_control VAR_2 = {
  .sync_mode = VAR_0,
  .older_than_this = ((void*)0),
  .range_cyclic = 1,
  .nr_to_write = 1024,
 };

 FUNC_0(&VAR_1->wb, &VAR_2);
}
