
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_data {int dummy; } ;
typedef int lin ;


 int FUNC_0 (int ,char*,long,...) ;
 int VAR_0 ;
 int FUNC_1 (struct file_data*,int ,int ,long*,long*) ;

void
FUNC_2 (char VAR_1, struct file_data *VAR_2, lin VAR_3, lin VAR_4)
{
  long int VAR_5, VAR_6;
  FUNC_1 (VAR_2, VAR_3, VAR_4, &VAR_5, &VAR_6);




  if (VAR_6 > VAR_5)
    FUNC_0 (VAR_0, "%ld%c%ld", VAR_5, VAR_1, VAR_6);
  else
    FUNC_0 (VAR_0, "%ld", VAR_6);
}
