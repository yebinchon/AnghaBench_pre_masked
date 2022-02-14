
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,struct file*,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_2, struct file *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0);
 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1);


 return (VAR_5 == 0 ? 0 : VAR_6);
}
