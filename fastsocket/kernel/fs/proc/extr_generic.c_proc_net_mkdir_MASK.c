
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {struct net* data; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct proc_dir_entry* FUNC_0 (struct proc_dir_entry**,char const*,int,int) ;
 int FUNC_1 (struct proc_dir_entry*) ;
 scalar_t__ FUNC_2 (struct proc_dir_entry*,struct proc_dir_entry*) ;

struct proc_dir_entry *FUNC_3(struct net *VAR_3, const char *VAR_4,
  struct proc_dir_entry *VAR_5)
{
 struct proc_dir_entry *VAR_6;

 VAR_6 = FUNC_0(&VAR_5, VAR_4, VAR_0 | VAR_1 | VAR_2, 2);
 if (VAR_6) {
  VAR_6->data = VAR_3;
  if (FUNC_2(VAR_5, VAR_6) < 0) {
   FUNC_1(VAR_6);
   VAR_6 = ((void*)0);
  }
 }
 return VAR_6;
}
