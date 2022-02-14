
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int __le32 ;
typedef int __fs32 ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ s_bytesex; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline void
FUNC_3(struct super_block *VAR_1, __fs32 *VAR_2, int VAR_3)
{
 if (FUNC_0(VAR_1)->s_bytesex == VAR_0)
  FUNC_2((__le32 *)VAR_2, -VAR_3);
 else
  FUNC_1((__be32 *)VAR_2, -VAR_3);
}
