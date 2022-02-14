
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct file_security_struct {void* fown_sid; void* sid; } ;
struct file {struct file_security_struct* f_security; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 () ;
 struct file_security_struct* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2)
{
 struct file_security_struct *VAR_3;
 u32 VAR_4 = FUNC_0();

 VAR_3 = FUNC_1(sizeof(struct file_security_struct), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->sid = VAR_4;
 VAR_3->fown_sid = VAR_4;
 VAR_2->f_security = VAR_3;

 return 0;
}
