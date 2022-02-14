
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procdesc {int pd_pid; } ;
struct file {scalar_t__ f_type; struct procdesc* f_data; } ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;

pid_t
FUNC_1(struct file *VAR_1)
{
 struct procdesc *VAR_2;

 FUNC_0(VAR_1->f_type == VAR_0,
    ("procdesc_pid: !procdesc"));

 VAR_2 = VAR_1->f_data;
 return (VAR_2->pd_pid);
}
