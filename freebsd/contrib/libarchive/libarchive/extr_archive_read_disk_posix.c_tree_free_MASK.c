
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int max_filesystem_id; struct tree* filesystem_table; struct tree* allocation_ptr; struct tree* sparse_list; struct tree* dirent; int path; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tree*) ;

__attribute__((used)) static void
FUNC_2(struct tree *VAR_0)
{
 int VAR_1;

 if (VAR_0 == ((void*)0))
  return;
 FUNC_0(&VAR_0->path);



 FUNC_1(VAR_0->sparse_list);
 for (VAR_1 = 0; VAR_1 < VAR_0->max_filesystem_id; VAR_1++)
  FUNC_1(VAR_0->filesystem_table[VAR_1].allocation_ptr);
 FUNC_1(VAR_0->filesystem_table);
 FUNC_1(VAR_0);
}
