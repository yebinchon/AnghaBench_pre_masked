
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int * private_data; } ;
typedef int loff_t ;


 int FUNC_0 (struct file*,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static loff_t FUNC_2(struct file *VAR_0, loff_t VAR_1, int VAR_2)
{
 FUNC_1(VAR_0->private_data);
 VAR_0->private_data = ((void*)0);
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
