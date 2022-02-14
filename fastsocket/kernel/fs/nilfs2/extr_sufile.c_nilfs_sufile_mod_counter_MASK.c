
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nilfs_sufile_header {int sh_ndirtysegs; int sh_ncleansegs; } ;
struct buffer_head {int b_page; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_5(struct buffer_head *VAR_1,
         u64 VAR_2, u64 VAR_3)
{
 struct nilfs_sufile_header *VAR_4;
 void *VAR_5;

 VAR_5 = FUNC_1(VAR_1->b_page, VAR_0);
 VAR_4 = VAR_5 + FUNC_0(VAR_1);
 FUNC_3(&VAR_4->sh_ncleansegs, VAR_2);
 FUNC_3(&VAR_4->sh_ndirtysegs, VAR_3);
 FUNC_2(VAR_5, VAR_0);

 FUNC_4(VAR_1);
}
