
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_refcount_rec {int dummy; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, void *VAR_1, int VAR_2)
{
 struct ocfs2_refcount_rec *VAR_3 = VAR_0, *VAR_4 = VAR_1, VAR_5;

 VAR_5 = *(struct ocfs2_refcount_rec *)VAR_3;
 *(struct ocfs2_refcount_rec *)VAR_3 =
   *(struct ocfs2_refcount_rec *)VAR_4;
 *(struct ocfs2_refcount_rec *)VAR_4 = VAR_5;
}
