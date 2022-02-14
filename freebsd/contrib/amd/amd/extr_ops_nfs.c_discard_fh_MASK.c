
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ opaque_t ;
struct TYPE_5__ {struct TYPE_5__* fh_path; TYPE_2__* fh_fs; int fh_q; } ;
typedef TYPE_1__ fh_cache ;
struct TYPE_6__ {int fs_host; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(opaque_t VAR_0)
{
  fh_cache *VAR_1 = (fh_cache *) VAR_0;

  FUNC_3(&VAR_1->fh_q);
  if (VAR_1->fh_fs) {
    FUNC_1("Discarding filehandle for %s:%s", VAR_1->fh_fs->fs_host, VAR_1->fh_path);
    FUNC_2(VAR_1->fh_fs);
  }
  FUNC_0(VAR_1->fh_path);
  FUNC_0(VAR_1);
}
