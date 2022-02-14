
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fuse_data {scalar_t__ fuse_libabi_major; scalar_t__ fuse_libabi_minor; } ;



__attribute__((used)) static inline bool
FUNC_0(struct fuse_data *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 return (VAR_0->fuse_libabi_major > VAR_1 ||
     (VAR_0->fuse_libabi_major == VAR_1 &&
      VAR_0->fuse_libabi_minor >= VAR_2));
}
