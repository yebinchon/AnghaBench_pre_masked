
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__** bh; } ;
struct ufs_sb_private_info {unsigned int s_fshift; unsigned int s_fmask; TYPE_2__ s_ubh; } ;
struct TYPE_3__ {void* b_data; } ;



__attribute__((used)) static inline void *FUNC_0(struct ufs_sb_private_info *VAR_0,
       unsigned int VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = VAR_1 >> VAR_0->s_fshift;
 VAR_1 &= ~VAR_0->s_fmask;
 return VAR_0->s_ubh.bh[VAR_2]->b_data + VAR_1;
}
