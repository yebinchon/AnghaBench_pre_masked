
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct unionfs_node_hashhead {int dummy; } ;
struct unionfs_node {char un_hashmask; struct unionfs_node_hashhead* un_hashtbl; } ;


 struct unionfs_node* FUNC_0 (struct vnode*) ;

__attribute__((used)) static struct unionfs_node_hashhead *
FUNC_1(struct vnode *VAR_0, char *VAR_1)
{
 int VAR_2;
 char VAR_3;
 struct unionfs_node *VAR_4;

 VAR_3 = 0;
 VAR_4 = FUNC_0(VAR_0);
 if (VAR_1 != ((void*)0)) {
  for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++)
   VAR_3 += VAR_1[VAR_2];
 }

 return (&(VAR_4->un_hashtbl[VAR_3 & (VAR_4->un_hashmask)]));
}
