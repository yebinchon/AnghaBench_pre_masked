
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_meta_lvb {int lvb_iattr; int lvb_imtime_packed; int lvb_ictime_packed; int lvb_iatime_packed; int lvb_inlink; int lvb_imode; int lvb_igid; int lvb_iuid; int lvb_isize; int lvb_igeneration; int lvb_iclusters; int lvb_version; } ;
struct ocfs2_lock_res {int l_name; int l_lksb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long long,...) ;
 struct ocfs2_meta_lvb* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(u64 VAR_0,
         const char *VAR_1,
         unsigned int VAR_2,
         struct ocfs2_lock_res *VAR_3)
{
 struct ocfs2_meta_lvb *VAR_4 = FUNC_4(&VAR_3->l_lksb);

 FUNC_3(VAR_0, "LVB information for %s (called from %s:%u):\n",
      VAR_3->l_name, VAR_1, VAR_2);
 FUNC_3(VAR_0, "version: %u, clusters: %u, generation: 0x%x\n",
      VAR_4->lvb_version, FUNC_1(VAR_4->lvb_iclusters),
      FUNC_1(VAR_4->lvb_igeneration));
 FUNC_3(VAR_0, "size: %llu, uid %u, gid %u, mode 0x%x\n",
      (unsigned long long)FUNC_2(VAR_4->lvb_isize),
      FUNC_1(VAR_4->lvb_iuid), FUNC_1(VAR_4->lvb_igid),
      FUNC_0(VAR_4->lvb_imode));
 FUNC_3(VAR_0, "nlink %u, atime_packed 0x%llx, ctime_packed 0x%llx, "
      "mtime_packed 0x%llx iattr 0x%x\n", FUNC_0(VAR_4->lvb_inlink),
      (long long)FUNC_2(VAR_4->lvb_iatime_packed),
      (long long)FUNC_2(VAR_4->lvb_ictime_packed),
      (long long)FUNC_2(VAR_4->lvb_imtime_packed),
      FUNC_1(VAR_4->lvb_iattr));
}
