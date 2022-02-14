
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int slot_num; } ;
struct ocfs2_alloc_context {int ac_bits_wanted; int ac_group_search; int ac_which; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ocfs2_alloc_context* FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (struct ocfs2_alloc_context*) ;
 int FUNC_4 (struct ocfs2_super*,struct ocfs2_alloc_context*,int ,int ,int *,int ) ;

int FUNC_5(struct ocfs2_super *VAR_7,
          int VAR_8,
          struct ocfs2_alloc_context **VAR_9)
{
 int VAR_10;
 u32 VAR_11;

 *VAR_9 = FUNC_0(sizeof(struct ocfs2_alloc_context), VAR_4);
 if (!(*VAR_9)) {
  VAR_10 = -VAR_1;
  FUNC_1(VAR_10);
  goto bail;
 }

 (*VAR_9)->ac_bits_wanted = VAR_8;
 (*VAR_9)->ac_which = VAR_5;
 VAR_11 = VAR_7->slot_num;
 (*VAR_9)->ac_group_search = VAR_6;

 VAR_10 = FUNC_4(VAR_7, (*VAR_9),
          VAR_3,
          VAR_11, ((void*)0), VAR_0);
 if (VAR_10 < 0) {
  if (VAR_10 != -VAR_2)
   FUNC_1(VAR_10);
  goto bail;
 }

 VAR_10 = 0;
bail:
 if ((VAR_10 < 0) && *VAR_9) {
  FUNC_3(*VAR_9);
  *VAR_9 = ((void*)0);
 }

 FUNC_2(VAR_10);
 return VAR_10;
}
