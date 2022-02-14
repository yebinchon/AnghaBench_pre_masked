
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_alloc_context {int ac_bits_wanted; int ac_bits_given; } ;



__attribute__((used)) static inline int FUNC_0(struct ocfs2_alloc_context *VAR_0)
{
 return VAR_0->ac_bits_wanted - VAR_0->ac_bits_given;
}
