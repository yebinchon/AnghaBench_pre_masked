
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int namelen; } ;
typedef TYPE_1__ xfs_dir2_data_entry_t ;
typedef int __be16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline __be16 *
FUNC_1(xfs_dir2_data_entry_t *VAR_0)
{
 return (__be16 *)((char *)VAR_0 +
  FUNC_0(VAR_0->namelen) - sizeof(__be16));
}
