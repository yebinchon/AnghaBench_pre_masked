
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int id_count; } ;
struct TYPE_4__ {TYPE_1__ i_data; } ;
struct ocfs2_dinode {TYPE_2__ id2; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct buffer_head *VAR_0, u64 VAR_1)
{
 struct ocfs2_dinode *VAR_2 = (struct ocfs2_dinode *)VAR_0->b_data;

 if (VAR_1 <= FUNC_0(VAR_2->id2.i_data.id_count))
  return 1;
 return 0;
}
