
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int f_mntfromname; } ;
struct mount {TYPE_1__ mnt_stat; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char const*,int) ;

void
FUNC_2(struct mount *VAR_0, const char *VAR_1)
{

 FUNC_0(VAR_0->mnt_stat.f_mntfromname, sizeof VAR_0->mnt_stat.f_mntfromname);
 FUNC_1(VAR_0->mnt_stat.f_mntfromname, VAR_1,
     sizeof VAR_0->mnt_stat.f_mntfromname);
}
