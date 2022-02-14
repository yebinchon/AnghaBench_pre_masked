
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtfs_file {int df_dirents; } ;


 int FUNC_0 (int *) ;
 struct dtfs_file* FUNC_1 (int) ;
 int FUNC_2 (struct dtfs_file*,int ,int) ;

struct dtfs_file *
FUNC_3()
{
 struct dtfs_file *VAR_0;

 VAR_0 = FUNC_1(sizeof(struct dtfs_file));
 FUNC_2(VAR_0, 0, sizeof(struct dtfs_file));
 FUNC_0(&VAR_0->df_dirents);

 return VAR_0;
}
