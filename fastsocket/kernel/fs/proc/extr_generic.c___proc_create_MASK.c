
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {char* name; int namelen; int pde_openers; int * pde_unload_completion; int pde_unload_lock; scalar_t__ pde_users; int count; int nlink; int mode; } ;
typedef int nlink_t ;
typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 struct proc_dir_entry* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (struct proc_dir_entry*,int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,struct proc_dir_entry**,char const**) ;

__attribute__((used)) static struct proc_dir_entry *FUNC_9(struct proc_dir_entry **VAR_1,
       const char *VAR_2,
       mode_t VAR_3,
       nlink_t VAR_4)
{
 struct proc_dir_entry *VAR_5 = ((void*)0);
 const char *VAR_6 = VAR_2;
 int VAR_7;


 if (!VAR_2 || !FUNC_7(VAR_2)) goto out;

 if (FUNC_8(VAR_2, VAR_1, &VAR_6) != 0)
  goto out;


 if (FUNC_6(VAR_6, '/'))
  goto out;

 VAR_7 = FUNC_7(VAR_6);

 VAR_5 = FUNC_2(sizeof(struct proc_dir_entry) + VAR_7 + 1, VAR_0);
 if (!VAR_5) goto out;

 FUNC_4(VAR_5, 0, sizeof(struct proc_dir_entry));
 FUNC_3(((char *) VAR_5) + sizeof(struct proc_dir_entry), VAR_6, VAR_7 + 1);
 VAR_5->name = ((char *) VAR_5) + sizeof(*VAR_5);
 VAR_5->namelen = VAR_7;
 VAR_5->mode = VAR_3;
 VAR_5->nlink = VAR_4;
 FUNC_1(&VAR_5->count, 1);
 VAR_5->pde_users = 0;
 FUNC_5(&VAR_5->pde_unload_lock);
 VAR_5->pde_unload_completion = ((void*)0);
 FUNC_0(&VAR_5->pde_openers);
 out:
 return VAR_5;
}
