
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ,int *,int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int *) ;
 int VAR_1 ;

int
FUNC_3(void)
{
 if (!FUNC_1("fs/xfs", ((void*)0)))
  goto out;

 if (!FUNC_0("fs/xfs/stat", 0, ((void*)0),
    &VAR_1))
  goto out_remove_entry;
 return 0;

 out_remove_entry:
 FUNC_2("fs/xfs", ((void*)0));
 out:
 return -VAR_0;
}
