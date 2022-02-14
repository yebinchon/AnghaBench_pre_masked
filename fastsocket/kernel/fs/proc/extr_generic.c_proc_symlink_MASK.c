
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {struct proc_dir_entry* data; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct proc_dir_entry* FUNC_0 (struct proc_dir_entry**,char const*,int,int) ;
 int FUNC_1 (struct proc_dir_entry*) ;
 struct proc_dir_entry* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct proc_dir_entry*,struct proc_dir_entry*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;

struct proc_dir_entry *FUNC_6(const char *VAR_5,
  struct proc_dir_entry *VAR_6, const char *VAR_7)
{
 struct proc_dir_entry *VAR_8;

 VAR_8 = FUNC_0(&VAR_6, VAR_5,
     (VAR_1 | VAR_2 | VAR_3 | VAR_4),1);

 if (VAR_8) {
  VAR_8->data = FUNC_2((VAR_8->size=FUNC_5(VAR_7))+1, VAR_0);
  if (VAR_8->data) {
   FUNC_4((char*)VAR_8->data,VAR_7);
   if (FUNC_3(VAR_6, VAR_8) < 0) {
    FUNC_1(VAR_8->data);
    FUNC_1(VAR_8);
    VAR_8 = ((void*)0);
   }
  } else {
   FUNC_1(VAR_8);
   VAR_8 = ((void*)0);
  }
 }
 return VAR_8;
}
