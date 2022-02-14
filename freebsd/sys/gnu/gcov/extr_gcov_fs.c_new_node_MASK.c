
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {int children; int dentry; int name; void* loaded_info; } ;
struct gcov_info {int dummy; } ;


 int FUNC_0 (int *,struct gcov_node*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct gcov_node*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int ,struct gcov_node*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct gcov_node*,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct gcov_node*,struct gcov_info*,char const*,struct gcov_node*) ;
 int FUNC_7 (int ,char*) ;
 void* FUNC_8 (int,int ,int) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static struct gcov_node *
FUNC_10(struct gcov_node *VAR_8, struct gcov_info *VAR_9, const char *VAR_10)
{
 struct gcov_node *VAR_11;

 VAR_11 = FUNC_8(sizeof(struct gcov_node) + FUNC_9(VAR_10) + 1, VAR_1, VAR_2|VAR_3);
 if (!VAR_11)
  goto err_nomem;
 if (VAR_9) {
  VAR_11->loaded_info = FUNC_8(sizeof(struct gcov_info *), VAR_1, VAR_2|VAR_3);
  if (!VAR_11->loaded_info)
   goto err_nomem;
 }
 FUNC_6(VAR_11, VAR_9, VAR_10, VAR_8);

 if (VAR_9) {
  VAR_11->dentry = FUNC_3(FUNC_4(VAR_11->name), 0600,
     VAR_8->dentry, VAR_11, &VAR_7);
 } else
  VAR_11->dentry = FUNC_2(VAR_11->name, VAR_8->dentry);
 if (!VAR_11->dentry) {
  FUNC_7(VAR_0, "could not create file\n");
  FUNC_5(VAR_11, VAR_1);
  return ((void*)0);
 }
 if (VAR_9)
  FUNC_1(VAR_11, VAR_8->dentry);
 FUNC_0(&VAR_8->children, VAR_11, VAR_6);
 FUNC_0(&VAR_5, VAR_11, VAR_4);

 return (VAR_11);

err_nomem:
 FUNC_5(VAR_11, VAR_1);
 FUNC_7(VAR_0, "out of memory\n");
 return ((void*)0);
}
