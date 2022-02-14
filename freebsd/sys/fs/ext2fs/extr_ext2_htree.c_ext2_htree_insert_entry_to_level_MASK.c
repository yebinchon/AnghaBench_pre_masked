
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ext2fs_htree_lookup_level {scalar_t__ h_entries; struct ext2fs_htree_entry* h_entry; } ;
struct ext2fs_htree_entry {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ext2fs_htree_entry*,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct ext2fs_htree_entry*,int ) ;
 int FUNC_4 (struct ext2fs_htree_entry*,struct ext2fs_htree_entry*,int) ;

__attribute__((used)) static void
FUNC_5(struct ext2fs_htree_lookup_level *VAR_0,
    uint32_t VAR_1, uint32_t VAR_2)
{
 struct ext2fs_htree_entry *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0->h_entry + 1;
 VAR_4 = FUNC_0(VAR_0->h_entries);

 FUNC_4(VAR_3 + 1, VAR_3, (char *)(VAR_0->h_entries + VAR_4) -
     (char *)VAR_3);
 FUNC_1(VAR_3, VAR_2);
 FUNC_3(VAR_3, VAR_1);
 FUNC_2(VAR_0->h_entries, VAR_4 + 1);
}
