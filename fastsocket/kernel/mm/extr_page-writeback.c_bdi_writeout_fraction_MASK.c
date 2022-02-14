
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backing_dev_info {int completions; } ;


 scalar_t__ FUNC_0 (struct backing_dev_info*) ;
 int FUNC_1 (int *,int *,long*,long*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct backing_dev_info *VAR_1,
  long *VAR_2, long *VAR_3)
{
 if (FUNC_0(VAR_1)) {
  FUNC_1(&VAR_0, &VAR_1->completions,
    VAR_2, VAR_3);
 } else {
  *VAR_2 = 0;
  *VAR_3 = 1;
 }
}
