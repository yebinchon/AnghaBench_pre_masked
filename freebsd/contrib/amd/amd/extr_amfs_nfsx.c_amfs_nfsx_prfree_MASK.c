
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amfs_nfsx {int nx_c; struct amfs_nfsx* nx_v; int * n_mnt; } ;
typedef scalar_t__ opaque_t ;
typedef int mntfs ;


 int FUNC_0 (struct amfs_nfsx*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(opaque_t VAR_0)
{
  struct amfs_nfsx *VAR_1 = (struct amfs_nfsx *) VAR_0;
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1->nx_c; VAR_2++) {
    mntfs *VAR_3 = VAR_1->nx_v[VAR_2].n_mnt;
    if (VAR_3)
      FUNC_1(VAR_3);
  }

  FUNC_0(VAR_1->nx_v);
  FUNC_0(VAR_1);
}
