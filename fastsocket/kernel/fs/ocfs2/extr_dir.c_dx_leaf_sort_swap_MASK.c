
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dx_entry {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1, int VAR_2)
{
 struct ocfs2_dx_entry *VAR_3 = VAR_0;
 struct ocfs2_dx_entry *VAR_4 = VAR_1;
 struct ocfs2_dx_entry VAR_5;

 FUNC_0(VAR_2 != sizeof(*VAR_3));

 VAR_5 = *VAR_3;
 *VAR_3 = *VAR_4;
 *VAR_4 = VAR_5;
}
