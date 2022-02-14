
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mthca_dev {int mthca_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(struct mthca_dev *VAR_1, u32 VAR_2)
{
 if (VAR_1->mthca_flags & VAR_0)
  return ((VAR_2 << 20) & 0x800000) | (VAR_2 & 0x7fffff);
 else
  return VAR_2;
}
