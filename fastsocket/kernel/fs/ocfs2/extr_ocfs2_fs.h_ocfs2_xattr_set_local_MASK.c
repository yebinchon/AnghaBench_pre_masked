
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_entry {int xe_type; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ocfs2_xattr_entry *VAR_1,
      int VAR_2)
{
 if (VAR_2)
  VAR_1->xe_type |= VAR_0;
 else
  VAR_1->xe_type &= ~VAR_0;
}
