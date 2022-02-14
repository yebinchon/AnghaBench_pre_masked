
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmpfs_node {scalar_t__ tn_links; } ;
struct tmpfs_mount {int tm_dirent_pool; } ;
struct TYPE_2__ {int * td_name; } ;
struct tmpfs_dirent {TYPE_1__ ud; struct tmpfs_node* td_node; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct tmpfs_dirent*) ;
 int FUNC_3 (int ,struct tmpfs_dirent*) ;

void
FUNC_4(struct tmpfs_mount *VAR_1, struct tmpfs_dirent *VAR_2)
{
 struct tmpfs_node *VAR_3;

 VAR_3 = VAR_2->td_node;
 if (VAR_3 != ((void*)0)) {
  FUNC_0(VAR_3->tn_links > 0);
  VAR_3->tn_links--;
 }
 if (!FUNC_2(VAR_2) && VAR_2->ud.td_name != ((void*)0))
  FUNC_1(VAR_2->ud.td_name, VAR_0);
 FUNC_3(VAR_1->tm_dirent_pool, VAR_2);
}
