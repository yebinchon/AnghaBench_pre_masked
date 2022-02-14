
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int dummy; } ;
struct fuse_data {unsigned long long notimpl; } ;


 struct fuse_data* FUNC_0 (struct mount*) ;

__attribute__((used)) static inline void
FUNC_1(struct mount *VAR_0, int VAR_1)
{
 struct fuse_data *VAR_2 = FUNC_0(VAR_0);

 VAR_2->notimpl |= (1ULL << VAR_1);
}
