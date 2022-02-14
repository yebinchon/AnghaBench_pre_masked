
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_local_disk_chunk {int dqc_free; int dqc_bitmap; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct buffer_head *VAR_0, void *VAR_1)
{
 int *VAR_2 = VAR_1;
 struct ocfs2_local_disk_chunk *VAR_3;

 VAR_3 = (struct ocfs2_local_disk_chunk *)VAR_0->b_data;
 FUNC_1(*VAR_2, VAR_3->dqc_bitmap);
 FUNC_0(&VAR_3->dqc_free, -1);
}
