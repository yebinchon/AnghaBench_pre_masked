
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_fh {TYPE_2__* fh_export; scalar_t__ fh_want_write; } ;
struct TYPE_3__ {int mnt; } ;
struct TYPE_4__ {TYPE_1__ ex_path; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct svc_fh *VAR_0)
{
 if (VAR_0->fh_want_write) {
  VAR_0->fh_want_write = 0;
  FUNC_0(VAR_0->fh_export->ex_path.mnt);
 }
}
