
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqfs_node {char* mn_name; int mn_refcount; int mn_type; } ;


 scalar_t__ FUNC_0 (struct mqfs_node*,struct mqfs_node*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mqfs_node* FUNC_1 () ;
 int FUNC_2 (struct mqfs_node*) ;

__attribute__((used)) static int
FUNC_3(struct mqfs_node *VAR_2)
{
 struct mqfs_node *VAR_3;

 VAR_3 = FUNC_1();
 VAR_3->mn_name[0] = '.';
 VAR_3->mn_type = VAR_1;
 VAR_3->mn_refcount = 1;
 if (FUNC_0(VAR_2, VAR_3) != 0) {
  FUNC_2(VAR_3);
  return (-1);
 }

 VAR_3 = FUNC_1();
 VAR_3->mn_name[0] = VAR_3->mn_name[1] = '.';
 VAR_3->mn_type = VAR_0;
 VAR_3->mn_refcount = 1;

 if (FUNC_0(VAR_2, VAR_3) != 0) {
  FUNC_2(VAR_3);
  return (-1);
 }

 return (0);
}
