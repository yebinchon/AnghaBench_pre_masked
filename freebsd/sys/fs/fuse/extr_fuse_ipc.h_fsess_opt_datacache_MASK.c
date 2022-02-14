
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int dummy; } ;
struct fuse_data {scalar_t__ cache_mode; } ;


 scalar_t__ VAR_0 ;
 struct fuse_data* FUNC_0 (struct mount*) ;

__attribute__((used)) static inline bool
FUNC_1(struct mount *VAR_1)
{
 struct fuse_data *VAR_2 = FUNC_0(VAR_1);

 return (VAR_2->cache_mode != VAR_0);
}
