
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct mqueue {int dummy; } ;
struct mqfs_node {struct mqueue* mn_data; } ;
struct file {struct mqfs_node* f_data; int * f_ops; } ;
typedef int cap_rights_t ;
typedef int (* _fgetf ) (struct thread*,int,int *,struct file**) ;


 int VAR_0 ;
 int FUNC_0 (struct file*,struct thread*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_2, int VAR_3, cap_rights_t *VAR_4, _fgetf VAR_5,
       struct file **VAR_6, struct mqfs_node **VAR_7, struct mqueue **VAR_8)
{
 struct mqfs_node *VAR_9;
 int VAR_10;

 VAR_10 = VAR_5(VAR_2, VAR_3, VAR_4, VAR_6);
 if (VAR_10)
  return (VAR_10);
 if (&VAR_1 != (*VAR_6)->f_ops) {
  FUNC_0(*VAR_6, VAR_2);
  return (VAR_0);
 }
 VAR_9 = (*VAR_6)->f_data;
 if (VAR_7)
  *VAR_7 = VAR_9;
 if (VAR_8)
  *VAR_8 = VAR_9->mn_data;
 return (0);
}
