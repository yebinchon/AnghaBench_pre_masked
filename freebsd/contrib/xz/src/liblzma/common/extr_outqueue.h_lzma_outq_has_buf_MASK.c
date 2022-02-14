
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bufs_used; scalar_t__ bufs_allocated; } ;
typedef TYPE_1__ lzma_outq ;



__attribute__((used)) static inline bool
FUNC_0(const lzma_outq *VAR_0)
{
 return VAR_0->bufs_used < VAR_0->bufs_allocated;
}
