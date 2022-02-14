
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_iov {int dummy; } ;
struct fuse_ticket {struct fuse_iov tk_aw_fiov; } ;



__attribute__((used)) static inline struct fuse_iov *
FUNC_0(struct fuse_ticket *VAR_0)
{
 return (&VAR_0->tk_aw_fiov);
}
