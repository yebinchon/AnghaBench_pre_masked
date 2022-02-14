
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct ksem {int dummy; } ;
struct file {struct ksem* f_data; } ;


 int FUNC_0 (struct ksem*) ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_0, struct thread *VAR_1)
{
 struct ksem *VAR_2;

 VAR_2 = VAR_0->f_data;
 VAR_0->f_data = ((void*)0);
 FUNC_0(VAR_2);

 return (0);
}
