
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct mqfs_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct mqfs_node*,struct mqfs_node*) ;
 struct mqfs_node* FUNC_1 (char const*,int,struct ucred*,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct mqfs_node*) ;

__attribute__((used)) static struct mqfs_node *
FUNC_3(struct mqfs_node *VAR_1, const char *VAR_2, int VAR_3,
 struct ucred *VAR_4, int VAR_5)
{
 struct mqfs_node *VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_0);
 if (FUNC_0(VAR_1, VAR_6) != 0) {
  FUNC_2(VAR_6);
  return (((void*)0));
 }
 return (VAR_6);
}
