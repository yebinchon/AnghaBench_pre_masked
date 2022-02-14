
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_super {scalar_t__ slot_num; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct ocfs2_super *VAR_0,
        int VAR_1,
        u32 VAR_2)
{
 return VAR_2 == VAR_0->slot_num || FUNC_0(VAR_1);
}
