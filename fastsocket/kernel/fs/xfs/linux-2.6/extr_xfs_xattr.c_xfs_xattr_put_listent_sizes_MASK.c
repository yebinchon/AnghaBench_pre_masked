
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_attr_list_context {int count; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(
 struct xfs_attr_list_context *VAR_0,
 int VAR_1,
 unsigned char *VAR_2,
 int VAR_3,
 int VAR_4,
 unsigned char *VAR_5)
{
 VAR_0->count += FUNC_0(VAR_1) + VAR_3 + 1;
 return 0;
}
