
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int total_vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 () ;
 unsigned long FUNC_2 () ;
 scalar_t__ VAR_5 ;
 unsigned long FUNC_3 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_4 (long) ;
 int VAR_11 ;
 int FUNC_5 (long) ;

int FUNC_6(struct mm_struct *VAR_12, long VAR_13, int VAR_14)
{
 unsigned long VAR_15, VAR_16;

 FUNC_4(VAR_13);




 if (VAR_6 == VAR_3)
  return 0;

 if (VAR_6 == VAR_4) {
  unsigned long VAR_17;

  VAR_15 = FUNC_0(VAR_1);
  VAR_15 += VAR_5;







  VAR_15 += FUNC_0(VAR_2);




  if (!VAR_14)
   VAR_15 -= VAR_15 / 32;

  if (VAR_15 > VAR_13)
   return 0;





  VAR_17 = FUNC_2();




  if (VAR_17 <= VAR_10)
   goto error;
  else
   VAR_17 -= VAR_10;




  if (!VAR_14)
   VAR_17 -= VAR_17 / 32;
  VAR_15 += VAR_17;

  if (VAR_15 > VAR_13)
   return 0;

  goto error;
 }

 VAR_16 = (VAR_9 - FUNC_1())
         * VAR_7 / 100;



 if (!VAR_14)
  VAR_16 -= VAR_16 / 32;
 VAR_16 += VAR_8;



 if (VAR_12)
  VAR_16 -= VAR_12->total_vm / 32;

 if (FUNC_3(&VAR_11) < VAR_16)
  return 0;
error:
 FUNC_5(VAR_13);

 return -VAR_0;
}
