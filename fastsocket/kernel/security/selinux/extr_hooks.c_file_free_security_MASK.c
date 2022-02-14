
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_security_struct {int dummy; } ;
struct file {struct file_security_struct* f_security; } ;


 int FUNC_0 (struct file_security_struct*) ;

__attribute__((used)) static void FUNC_1(struct file *VAR_0)
{
 struct file_security_struct *VAR_1 = VAR_0->f_security;
 VAR_0->f_security = ((void*)0);
 FUNC_0(VAR_1);
}
