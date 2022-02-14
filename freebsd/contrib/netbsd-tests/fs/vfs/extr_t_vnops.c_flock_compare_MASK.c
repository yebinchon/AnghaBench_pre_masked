
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {int l_start; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 int VAR_2 = ((const struct flock *)VAR_0)->l_start;
 int VAR_3 = ((const struct flock *)VAR_1)->l_start;
 return VAR_2 < VAR_3 ? -1 : (VAR_2 > VAR_3 ? 1 : 0);
}
