
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ base; } ;
struct fuse_ticket {TYPE_1__ tk_ms_fiov; } ;
struct fuse_in_header {int dummy; } ;



__attribute__((used)) static inline struct fuse_in_header*
FUNC_0(struct fuse_ticket *VAR_0)
{
 return (struct fuse_in_header *)(VAR_0->tk_ms_fiov.base);
}
