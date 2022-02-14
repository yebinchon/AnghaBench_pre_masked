
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_alloc_context {unsigned int ac_bits_wanted; unsigned int ac_bits_given; } ;
typedef int handle_t ;


 int FUNC_0 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,int ,unsigned int,int *,int *) ;

int FUNC_1(struct ocfs2_super *VAR_0,
    handle_t *VAR_1,
    struct ocfs2_alloc_context *VAR_2,
    u32 VAR_3,
    u32 *VAR_4,
    u32 *VAR_5)
{
 unsigned int VAR_6 = VAR_2->ac_bits_wanted - VAR_2->ac_bits_given;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
          VAR_6, VAR_4, VAR_5);
}
