
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int sync_mode; int range_end; int range_start; int nr_to_write; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct address_space*,struct writeback_control*) ;
 int FUNC_1 (struct address_space*) ;

int FUNC_2(struct address_space *VAR_1, loff_t VAR_2,
    loff_t VAR_3, int VAR_4)
{
 int VAR_5;
 struct writeback_control VAR_6 = {
  .sync_mode = VAR_4,
  .nr_to_write = VAR_0,
  .range_start = VAR_2,
  .range_end = VAR_3,
 };

 if (!FUNC_1(VAR_1))
  return 0;

 VAR_5 = FUNC_0(VAR_1, &VAR_6);
 return VAR_5;
}
