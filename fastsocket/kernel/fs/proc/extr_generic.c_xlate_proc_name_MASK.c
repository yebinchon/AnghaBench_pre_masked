
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {struct proc_dir_entry* next; struct proc_dir_entry* subdir; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char const*,struct proc_dir_entry*) ;
 struct proc_dir_entry VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3,
      struct proc_dir_entry **VAR_4, const char **VAR_5)
{
 const char *VAR_6 = VAR_3, *VAR_7;
 struct proc_dir_entry *VAR_8;
 int VAR_9;
 int VAR_10 = 0;

 VAR_8 = *VAR_4;
 if (!VAR_8)
  VAR_8 = &VAR_1;

 FUNC_1(&VAR_2);
 while (1) {
  VAR_7 = FUNC_3(VAR_6, '/');
  if (!VAR_7)
   break;

  VAR_9 = VAR_7 - VAR_6;
  for (VAR_8 = VAR_8->subdir; VAR_8 ; VAR_8 = VAR_8->next) {
   if (FUNC_0(VAR_9, VAR_6, VAR_8))
    break;
  }
  if (!VAR_8) {
   VAR_10 = -VAR_0;
   goto out;
  }
  VAR_6 += VAR_9 + 1;
 }
 *VAR_5 = VAR_6;
 *VAR_4 = VAR_8;
out:
 FUNC_2(&VAR_2);
 return VAR_10;
}
