
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u64 ;
struct task_struct {int flags; } ;
struct backing_dev_info {unsigned long min_ratio; unsigned long max_ratio; } ;


 unsigned long FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct backing_dev_info*,long*,long*) ;
 int FUNC_2 (struct backing_dev_info*,unsigned long,unsigned long*) ;
 struct task_struct* VAR_3 ;
 unsigned long FUNC_3 () ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_4 (long,long) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*,unsigned long*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

void
FUNC_7(unsigned long *VAR_8, unsigned long *VAR_9,
   unsigned long *VAR_10, struct backing_dev_info *VAR_11)
{
 unsigned long VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14 = FUNC_3();
 struct task_struct *VAR_15;

 if (VAR_6)
  VAR_13 = FUNC_0(VAR_6, VAR_0);
 else {
  int VAR_16;

  VAR_16 = VAR_7;
  if (VAR_16 < 5)
   VAR_16 = 5;
  VAR_13 = (VAR_16 * VAR_14) / 100;
 }

 if (VAR_4)
  VAR_12 = FUNC_0(VAR_4, VAR_0);
 else
  VAR_12 = (VAR_5 * VAR_14) / 100;

 if (VAR_12 >= VAR_13)
  VAR_12 = VAR_13 / 2;
 VAR_15 = VAR_3;
 if (VAR_15->flags & VAR_1 || FUNC_5(VAR_15)) {
  VAR_12 += VAR_12 / 4;
  VAR_13 += VAR_13 / 4;
 }
 *VAR_8 = VAR_12;
 *VAR_9 = VAR_13;

 if (VAR_11) {
  u64 VAR_17;
  long VAR_18, VAR_19;




  FUNC_1(VAR_11, &VAR_18, &VAR_19);

  VAR_17 = (VAR_13 * (100 - VAR_2)) / 100;
  VAR_17 *= VAR_18;
  FUNC_4(VAR_17, VAR_19);
  VAR_17 += (VAR_13 * VAR_11->min_ratio) / 100;
  if (VAR_17 > (VAR_13 * VAR_11->max_ratio) / 100)
   VAR_17 = VAR_13 * VAR_11->max_ratio / 100;

  *VAR_10 = VAR_17;
  FUNC_2(VAR_11, VAR_13, VAR_10);
  FUNC_6(VAR_3, VAR_10);
 }
}
