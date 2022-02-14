
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_group_desc {unsigned long long bg_signature; unsigned long long bg_size; unsigned long long bg_bits; unsigned long long bg_free_bits_count; unsigned long long bg_chain; scalar_t__ bg_blkno; scalar_t__ bg_parent_dinode; scalar_t__ bg_next_group; int bg_generation; } ;


 unsigned long long FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static inline void FUNC_2(struct ocfs2_group_desc *VAR_0)
{
 FUNC_1("Block Group:\n");
 FUNC_1("bg_signature:       %s\n", VAR_0->bg_signature);
 FUNC_1("bg_size:            %u\n", VAR_0->bg_size);
 FUNC_1("bg_bits:            %u\n", VAR_0->bg_bits);
 FUNC_1("bg_free_bits_count: %u\n", VAR_0->bg_free_bits_count);
 FUNC_1("bg_chain:           %u\n", VAR_0->bg_chain);
 FUNC_1("bg_generation:      %u\n", FUNC_0(VAR_0->bg_generation));
 FUNC_1("bg_next_group:      %llu\n",
        (unsigned long long)VAR_0->bg_next_group);
 FUNC_1("bg_parent_dinode:   %llu\n",
        (unsigned long long)VAR_0->bg_parent_dinode);
 FUNC_1("bg_blkno:           %llu\n",
        (unsigned long long)VAR_0->bg_blkno);
}
