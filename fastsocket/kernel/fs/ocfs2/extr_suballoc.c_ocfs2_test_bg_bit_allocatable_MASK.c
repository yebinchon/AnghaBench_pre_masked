
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_group_desc {scalar_t__ bg_bitmap; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {scalar_t__ b_committed_data; } ;


 TYPE_1__* FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct buffer_head *VAR_0,
      int VAR_1)
{
 struct ocfs2_group_desc *VAR_2 = (struct ocfs2_group_desc *) VAR_0->b_data;
 int VAR_3;

 if (FUNC_4(VAR_1, (unsigned long *)VAR_2->bg_bitmap))
  return 0;

 if (!FUNC_1(VAR_0))
  return 1;

 FUNC_2(VAR_0);
 VAR_2 = (struct ocfs2_group_desc *) FUNC_0(VAR_0)->b_committed_data;
 if (VAR_2)
  VAR_3 = !FUNC_4(VAR_1, (unsigned long *)VAR_2->bg_bitmap);
 else
  VAR_3 = 1;
 FUNC_3(VAR_0);

 return VAR_3;
}
