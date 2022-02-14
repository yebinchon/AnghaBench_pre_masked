
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso9660 {int hardlink_rbtree; } ;
struct archive_rb_node {int dummy; } ;


 int VAR_0 ;
 struct archive_rb_node* FUNC_0 (int *) ;
 struct archive_rb_node* FUNC_1 (int *,struct archive_rb_node*,int ) ;
 int FUNC_2 (struct archive_rb_node*) ;

__attribute__((used)) static void
FUNC_3(struct iso9660 *VAR_1)
{
 struct archive_rb_node *VAR_2, *VAR_3;

 for (VAR_2 = FUNC_0(&(VAR_1->hardlink_rbtree)); VAR_2;) {
  VAR_3 = FUNC_1(&(VAR_1->hardlink_rbtree),
      VAR_2, VAR_0);
  FUNC_2(VAR_2);
  VAR_2 = VAR_3;
 }
}
