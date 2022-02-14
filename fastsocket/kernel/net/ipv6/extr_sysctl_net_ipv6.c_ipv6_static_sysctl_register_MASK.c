
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,struct ctl_table*) ;

int FUNC_1(void)
{
 static struct ctl_table VAR_3[1];
 VAR_1 = FUNC_0(VAR_2, VAR_3);
 if (VAR_1 == ((void*)0))
  return -VAR_0;
 return 0;
}
