
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {int b_blocknr; } ;
typedef int sector_t ;


 int FUNC_0 (struct ocfs2_caching_info*,int ) ;

void FUNC_1(struct ocfs2_caching_info *VAR_0,
        struct buffer_head *VAR_1)
{
 sector_t VAR_2 = VAR_1->b_blocknr;

 FUNC_0(VAR_0, VAR_2);
}
