
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {struct gcov_info* ghost; struct gcov_info* info; } ;
struct gcov_info {int dummy; } ;



__attribute__((used)) static struct gcov_info *FUNC_0(struct gcov_node *VAR_0)
{
 if (VAR_0->info)
  return VAR_0->info;

 return VAR_0->ghost;
}
