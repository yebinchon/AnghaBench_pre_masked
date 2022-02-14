
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_node {int an_children; struct autofs_mount* an_mount; struct autofs_node* an_parent; int an_ctime; int an_vnode_lock; int an_callout; int an_fileno; int an_name; } ;
struct autofs_mount {int am_last_fileno; } ;


 int FUNC_0 (struct autofs_mount*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,struct autofs_node*) ;
 int VAR_4 ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (struct autofs_node*,char const*,int,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,int ) ;
 int FUNC_9 (char const*,int,int ) ;
 int FUNC_10 (int *,char*,int ) ;
 struct autofs_node* FUNC_11 (int ,int) ;

int
FUNC_12(struct autofs_node *VAR_7, struct autofs_mount *VAR_8,
    const char *VAR_9, int VAR_10, struct autofs_node **VAR_11)
{
 struct autofs_node *VAR_12;

 if (VAR_7 != ((void*)0)) {
  FUNC_0(VAR_7->an_mount);

  FUNC_1(FUNC_5(VAR_7, VAR_9, VAR_10, ((void*)0)) == VAR_0,
      ("node \"%s\" already exists", VAR_9));
 }

 VAR_12 = FUNC_11(VAR_6, VAR_2 | VAR_3);
 if (VAR_10 >= 0)
  VAR_12->an_name = FUNC_9(VAR_9, VAR_10, VAR_1);
 else
  VAR_12->an_name = FUNC_8(VAR_9, VAR_1);
 VAR_12->an_fileno = FUNC_4(&VAR_8->am_last_fileno, 1);
 FUNC_6(&VAR_12->an_callout, 1);
 FUNC_10(&VAR_12->an_vnode_lock, "autofsvlk", VAR_4);
 FUNC_7(&VAR_12->an_ctime);
 VAR_12->an_parent = VAR_7;
 VAR_12->an_mount = VAR_8;
 if (VAR_7 != ((void*)0))
  FUNC_3(VAR_5, &VAR_7->an_children, VAR_12);
 FUNC_2(&VAR_12->an_children);

 *VAR_11 = VAR_12;
 return (0);
}
