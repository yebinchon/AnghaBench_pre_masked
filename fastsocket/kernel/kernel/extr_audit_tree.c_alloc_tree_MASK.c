
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_tree {int pathname; int * root; int same_root; int list; int rules; int chunks; scalar_t__ goner; int count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 struct audit_tree* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static struct audit_tree *FUNC_5(const char *VAR_1)
{
 struct audit_tree *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct audit_tree) + FUNC_4(VAR_1) + 1, VAR_0);
 if (VAR_2) {
  FUNC_1(&VAR_2->count, 1);
  VAR_2->goner = 0;
  FUNC_0(&VAR_2->chunks);
  FUNC_0(&VAR_2->rules);
  FUNC_0(&VAR_2->list);
  FUNC_0(&VAR_2->same_root);
  VAR_2->root = ((void*)0);
  FUNC_3(VAR_2->pathname, VAR_1);
 }
 return VAR_2;
}
