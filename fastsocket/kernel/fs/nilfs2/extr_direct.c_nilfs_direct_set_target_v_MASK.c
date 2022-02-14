
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* b_last_allocated_ptr; void* b_last_allocated_key; } ;
struct nilfs_direct {TYPE_1__ d_bmap; } ;
typedef void* __u64 ;



__attribute__((used)) static void FUNC_0(struct nilfs_direct *VAR_0,
          __u64 VAR_1, __u64 VAR_2)
{
 VAR_0->d_bmap.b_last_allocated_key = VAR_1;
 VAR_0->d_bmap.b_last_allocated_ptr = VAR_2;
}
