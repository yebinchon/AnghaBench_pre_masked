
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int fh_dentry; TYPE_2__* fh_export; } ;
struct nfsd_attrstat {int stat; TYPE_3__ fh; } ;
typedef scalar_t__ __be32 ;
struct TYPE_4__ {int mnt; } ;
struct TYPE_5__ {TYPE_1__ ex_path; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static __be32
FUNC_2(__be32 VAR_0, struct nfsd_attrstat *VAR_1)
{
 if (VAR_0) return VAR_0;
 return FUNC_0(FUNC_1(VAR_1->fh.fh_export->ex_path.mnt,
        VAR_1->fh.fh_dentry,
        &VAR_1->stat));
}
