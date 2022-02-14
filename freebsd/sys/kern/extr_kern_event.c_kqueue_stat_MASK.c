
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct stat {int st_mode; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_1, struct stat *VAR_2, struct ucred *VAR_3,
 struct thread *VAR_4)
{

 FUNC_0((void *)VAR_2, sizeof *VAR_2);







 VAR_2->st_mode = VAR_0;
 return (0);
}
