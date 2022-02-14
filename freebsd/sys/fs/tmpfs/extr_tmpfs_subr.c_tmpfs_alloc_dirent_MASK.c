
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct tmpfs_node {int tn_links; } ;
struct tmpfs_mount {int tm_dirent_pool; } ;
struct TYPE_2__ {int td_name; } ;
struct tmpfs_dirent {scalar_t__ td_namelen; TYPE_1__ ud; struct tmpfs_node* td_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct tmpfs_dirent*,char const*,int ) ;
 struct tmpfs_dirent* FUNC_2 (int ,int ) ;

int
FUNC_3(struct tmpfs_mount *VAR_2, struct tmpfs_node *VAR_3,
    const char *VAR_4, u_int VAR_5, struct tmpfs_dirent **VAR_6)
{
 struct tmpfs_dirent *VAR_7;

 VAR_7 = FUNC_2(VAR_2->tm_dirent_pool, VAR_1);
 VAR_7->td_node = VAR_3;
 if (VAR_4 != ((void*)0)) {
  VAR_7->ud.td_name = FUNC_0(VAR_5, VAR_0, VAR_1);
  FUNC_1(VAR_7, VAR_4, VAR_5);
 } else
  VAR_7->td_namelen = 0;
 if (VAR_3 != ((void*)0))
  VAR_3->tn_links++;

 *VAR_6 = VAR_7;

 return 0;
}
