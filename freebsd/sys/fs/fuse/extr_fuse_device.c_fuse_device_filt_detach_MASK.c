
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {int * kn_hook; } ;
struct TYPE_2__ {int si_note; } ;
struct fuse_data {TYPE_1__ ks_rsel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct knote*,int ) ;

__attribute__((used)) static void
FUNC_2(struct knote *VAR_0)
{
 struct fuse_data *VAR_1;

 VAR_1 = (struct fuse_data*)VAR_0->kn_hook;
 FUNC_0(VAR_1 != ((void*)0));
 FUNC_1(&VAR_1->ks_rsel.si_note, VAR_0, 0);
 VAR_0->kn_hook = ((void*)0);
}
