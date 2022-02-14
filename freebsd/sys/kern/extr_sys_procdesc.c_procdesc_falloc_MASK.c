
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct filecaps {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,struct file**,int*,int,struct filecaps*) ;

int
FUNC_1(struct thread *VAR_2, struct file **VAR_3, int *VAR_4,
    int VAR_5, struct filecaps *VAR_6)
{
 int VAR_7;

 VAR_7 = 0;
 if (VAR_5 & VAR_1)
  VAR_7 = VAR_0;

 return (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7, VAR_6));
}
