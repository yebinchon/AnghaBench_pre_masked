
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ocfs2_dinode {void* i_links_count_hi; void* i_links_count; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct ocfs2_dinode *VAR_1, u32 VAR_2)
{
 u16 VAR_3, VAR_4;

 VAR_3 = VAR_2;
 VAR_4 = VAR_2 >> VAR_0;

 VAR_1->i_links_count = FUNC_0(VAR_3);
 VAR_1->i_links_count_hi = FUNC_0(VAR_4);
}
