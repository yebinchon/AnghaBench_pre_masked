
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {unsigned long nr_to_write; int range_cyclic; int * older_than_this; int sync_mode; } ;
struct backing_dev_info {int dirty_exceeded; int wb; } ;
struct address_space {struct backing_dev_info* backing_dev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct backing_dev_info*) ;
 long FUNC_2 (struct backing_dev_info*,int ) ;
 int FUNC_3 (struct backing_dev_info*) ;
 long FUNC_4 (struct backing_dev_info*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (unsigned long*,unsigned long*,unsigned long*,struct backing_dev_info*) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (unsigned long) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (struct writeback_control*,struct backing_dev_info*) ;
 int FUNC_11 (struct writeback_control*,struct backing_dev_info*) ;
 int FUNC_12 (struct writeback_control*,struct backing_dev_info*) ;
 scalar_t__ FUNC_13 (struct backing_dev_info*) ;
 int FUNC_14 (int *,struct writeback_control*) ;

__attribute__((used)) static void FUNC_15(struct address_space *VAR_10,
    unsigned long VAR_11)
{
 long VAR_12, VAR_13;
 long VAR_14, VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19 = 0;
 unsigned long VAR_20 = 1;

 struct backing_dev_info *VAR_21 = VAR_10->backing_dev_info;

 for (;;) {
  struct writeback_control VAR_22 = {
   .sync_mode = VAR_7,
   .older_than_this = ((void*)0),
   .nr_to_write = VAR_11,
   .range_cyclic = 1,
  };

  FUNC_6(&VAR_16, &VAR_17,
    &VAR_18, VAR_21);

  VAR_12 = FUNC_7(VAR_3) +
     FUNC_7(VAR_4);
  VAR_14 = FUNC_7(VAR_5);

  VAR_13 = FUNC_2(VAR_21, VAR_0);
  VAR_15 = FUNC_2(VAR_21, VAR_1);

  if (VAR_13 + VAR_15 <= VAR_18)
   break;






  if (VAR_12 + VAR_14 <
    (VAR_16 + VAR_17) / 2)
   break;

  if (!VAR_21->dirty_exceeded)
   VAR_21->dirty_exceeded = 1;
  FUNC_10(&VAR_22, VAR_21);
  if (VAR_13 > VAR_18) {
   FUNC_14(&VAR_21->wb, &VAR_22);
   VAR_19 += VAR_11 - VAR_22.nr_to_write;
   FUNC_12(&VAR_22, VAR_21);
   FUNC_6(&VAR_16, &VAR_17,
           &VAR_18, VAR_21);
  }
  if (VAR_18 < 2*FUNC_3(VAR_21)) {
   VAR_13 = FUNC_4(VAR_21, VAR_0);
   VAR_15 = FUNC_4(VAR_21, VAR_1);
  } else if (VAR_13) {
   VAR_13 = FUNC_2(VAR_21, VAR_0);
   VAR_15 = FUNC_2(VAR_21, VAR_1);
  }

  if (VAR_13 + VAR_15 <= VAR_18)
   break;
  if (VAR_19 >= VAR_11)
   break;

  FUNC_11(&VAR_22, VAR_21);
  FUNC_0(VAR_6);
  FUNC_8(VAR_20);





  VAR_20 <<= 1;
  if (VAR_20 > VAR_2 / 10)
   VAR_20 = VAR_2 / 10;

  if (FUNC_5(VAR_8))
   break;
 }

 if(VAR_19) FUNC_9(VAR_19);
 if (VAR_13 + VAR_15 < VAR_18 &&
   VAR_21->dirty_exceeded)
  VAR_21->dirty_exceeded = 0;

 if (FUNC_13(VAR_21))
  return;
 if ((VAR_9 && VAR_19) ||
     (!VAR_9 && ((FUNC_7(VAR_3)
          + FUNC_7(VAR_4))
       > VAR_16)))
  FUNC_1(VAR_21);
}
