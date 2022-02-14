
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct file*,int *,int *) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

unsigned int FUNC_3(int VAR_11, struct file *VAR_12, poll_table * VAR_13)
{
 unsigned long VAR_14;
 unsigned int VAR_15 = 0;

 VAR_11 = VAR_11 >> 4;

 FUNC_1(&VAR_6,VAR_14);

 FUNC_0(VAR_12, &VAR_7, VAR_13);
 if (VAR_5)
  VAR_15 |= VAR_0 | VAR_2;


 FUNC_0(VAR_12, &VAR_10, VAR_13);
 if ((VAR_4 - VAR_9) >= VAR_8)
  VAR_15 |= VAR_1 | VAR_3;
 FUNC_2(&VAR_6,VAR_14);
 return VAR_15;
}
