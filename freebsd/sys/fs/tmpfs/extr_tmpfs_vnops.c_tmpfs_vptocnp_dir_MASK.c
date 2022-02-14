
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpfs_node {int dummy; } ;
struct tmpfs_dirent {struct tmpfs_node* td_node; } ;
struct tmpfs_dir_cursor {int dummy; } ;


 int VAR_0 ;
 struct tmpfs_dirent* FUNC_0 (struct tmpfs_node*,struct tmpfs_dir_cursor*) ;
 struct tmpfs_dirent* FUNC_1 (struct tmpfs_node*,struct tmpfs_dir_cursor*) ;

__attribute__((used)) static int
FUNC_2(struct tmpfs_node *VAR_1, struct tmpfs_node *VAR_2,
    struct tmpfs_dirent **VAR_3)
{
 struct tmpfs_dir_cursor VAR_4;
 struct tmpfs_dirent *VAR_5;

 for (VAR_5 = FUNC_0(VAR_2, &VAR_4); VAR_5 != ((void*)0);
      VAR_5 = FUNC_1(VAR_2, &VAR_4)) {
  if (VAR_5->td_node == VAR_1) {
   *VAR_3 = VAR_5;
   return (0);
  }
 }
 return (VAR_0);
}
