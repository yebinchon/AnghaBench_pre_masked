
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_refcount_rec {int dummy; } ;


 scalar_t__ FUNC_0 (struct ocfs2_refcount_rec const*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct ocfs2_refcount_rec *VAR_2 = VAR_0, *VAR_3 = VAR_1;
 u32 VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5 = FUNC_0(VAR_3);

 if (VAR_4 > VAR_5)
  return 1;
 if (VAR_4 < VAR_5)
  return -1;
 return 0;
}
