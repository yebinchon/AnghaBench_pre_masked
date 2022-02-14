
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_group_desc {int bg_free_bits_count; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct ocfs2_group_desc *VAR_0,
           u32 VAR_1)
{
 return FUNC_0(VAR_0->bg_free_bits_count) > VAR_1;
}
