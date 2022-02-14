
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket {scalar_t__ so_type; } ;
struct file {struct socket* f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_3 ;
 int FUNC_1 (struct thread*,int,int *,struct file**,int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_4, int VAR_5, struct file **VAR_6,
    struct socket **VAR_7)
{
 int VAR_8;

 *VAR_6 = ((void*)0);
 *VAR_7 = ((void*)0);




 VAR_8 = FUNC_1(VAR_4, VAR_5, &VAR_3,
     VAR_6, ((void*)0), ((void*)0));
 if (VAR_8 != 0)
  return (VAR_8);
 *VAR_7 = (*VAR_6)->f_data;
 if ((*VAR_7)->so_type != VAR_2)
  return (VAR_0);
 if (FUNC_0(*VAR_7))
  return (VAR_1);
 return (0);
}
