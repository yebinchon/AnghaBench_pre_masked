
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ classid; } ;
struct tcindex_filter_result {TYPE_1__ res; int exts; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline int
FUNC_1(struct tcindex_filter_result *VAR_0)
{
 return FUNC_0(&VAR_0->exts) || VAR_0->res.classid;
}
