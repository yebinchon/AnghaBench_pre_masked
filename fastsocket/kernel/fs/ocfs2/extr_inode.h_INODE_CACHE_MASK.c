
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_caching_info {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct ocfs2_caching_info ip_metadata_cache; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static inline struct ocfs2_caching_info *FUNC_1(struct inode *VAR_0)
{
 return &FUNC_0(VAR_0)->ip_metadata_cache;
}
