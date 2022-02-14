
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {struct ocfs2_caching_info* et_ci; } ;
struct ocfs2_cow_context {int (* cow_duplicate_clusters ) (int *,struct ocfs2_cow_context*,int ,int ,int ,int ) ;int dealloc; int meta_ac; TYPE_1__ data_et; } ;
struct ocfs2_caching_info {int dummy; } ;
typedef int handle_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long long,int ,int ,int ,int ,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ,int ,unsigned int,int ,int *) ;
 scalar_t__ FUNC_3 (struct ocfs2_caching_info*) ;
 int FUNC_4 (int *,struct ocfs2_cow_context*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(handle_t *VAR_1,
      struct ocfs2_cow_context *VAR_2,
      u32 VAR_3, u32 VAR_4,
      u32 VAR_5, u32 VAR_6,
      unsigned int VAR_7)
{
 int VAR_8;
 struct ocfs2_caching_info *VAR_9 = VAR_2->data_et.et_ci;
 u64 VAR_10 = FUNC_3(VAR_9);

 FUNC_0(0, "inode %llu, cpos %u, old %u, new %u, len %u, ext_flags %u\n",
      (unsigned long long)VAR_10, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);


 if (!(VAR_7 & VAR_0)) {
  VAR_8 = VAR_2->cow_duplicate_clusters(VAR_1, VAR_2, VAR_3,
            VAR_4, VAR_5, VAR_6);
  if (VAR_8) {
   FUNC_1(VAR_8);
   goto out;
  }
 }

 VAR_8 = FUNC_2(VAR_1, &VAR_2->data_et,
           VAR_3, VAR_5, VAR_6, VAR_7,
           VAR_2->meta_ac, &VAR_2->dealloc);
 if (VAR_8)
  FUNC_1(VAR_8);
out:
 return VAR_8;
}
