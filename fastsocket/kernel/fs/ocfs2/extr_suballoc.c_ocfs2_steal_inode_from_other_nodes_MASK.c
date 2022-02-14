
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {scalar_t__ slot_num; int max_slots; } ;
struct ocfs2_alloc_context {int dummy; } ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ocfs2_alloc_context*) ;
 scalar_t__ FUNC_1 (struct ocfs2_super*) ;
 int FUNC_2 (struct ocfs2_super*,struct ocfs2_alloc_context*,int ,scalar_t__,int *,int ) ;
 int FUNC_3 (struct ocfs2_super*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_super *VAR_4,
           struct ocfs2_alloc_context *VAR_5)
{
 int VAR_6, VAR_7 = -VAR_0;
 s16 VAR_8 = FUNC_1(VAR_4);


 if (VAR_8 == VAR_3)
  VAR_8 = VAR_4->slot_num + 1;

 for (VAR_6 = 0; VAR_6 < VAR_4->max_slots; VAR_6++, VAR_8++) {
  if (VAR_8 == VAR_4->max_slots)
   VAR_8 = 0;

  if (VAR_8 == VAR_4->slot_num)
   continue;

  VAR_7 = FUNC_2(VAR_4, VAR_5,
           VAR_1,
           VAR_8, ((void*)0),
           VAR_2);
  if (VAR_7 >= 0) {
   FUNC_3(VAR_4, VAR_8);
   break;
  }

  FUNC_0(VAR_5);
 }

 return VAR_7;
}
