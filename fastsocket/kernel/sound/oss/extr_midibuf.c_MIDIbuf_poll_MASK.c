
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int poll_table ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int ) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_2 (struct file*,int *,int *) ;

unsigned int FUNC_3(int VAR_8, struct file *VAR_9, poll_table * VAR_10)
{
 unsigned int VAR_11 = 0;

 VAR_8 = VAR_8 >> 4;


 FUNC_2(VAR_9, &VAR_4[VAR_8], VAR_10);
 if (FUNC_0(VAR_5[VAR_8]))
  VAR_11 |= VAR_0 | VAR_2;


 FUNC_2(VAR_9, &VAR_7[VAR_8], VAR_10);
 if (!FUNC_1(VAR_6[VAR_8]))
  VAR_11 |= VAR_1 | VAR_3;

 return VAR_11;
}
