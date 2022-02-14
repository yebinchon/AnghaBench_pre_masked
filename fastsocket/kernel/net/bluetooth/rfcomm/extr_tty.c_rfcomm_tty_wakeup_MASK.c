
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct rfcomm_dev {struct tty_struct* tty; } ;


 int FUNC_0 (char*,struct rfcomm_dev*,struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct rfcomm_dev *VAR_1 = (void *) VAR_0;
 struct tty_struct *VAR_2 = VAR_1->tty;
 if (!VAR_2)
  return;

 FUNC_0("dev %p tty %p", VAR_1, VAR_2);
 FUNC_1(VAR_2);
}
