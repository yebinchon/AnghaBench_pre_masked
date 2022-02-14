
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int td_name; } ;
struct tmpfs_dirent {int td_namelen; TYPE_1__ ud; int td_cookie; int td_hash; } ;


 int FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (char const*,int ) ;

void
FUNC_2(struct tmpfs_dirent *VAR_0, const char *VAR_1, u_int VAR_2)
{
 VAR_0->td_hash = VAR_0->td_cookie = FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_0->ud.td_name, VAR_1, VAR_2);
 VAR_0->td_namelen = VAR_2;
}
