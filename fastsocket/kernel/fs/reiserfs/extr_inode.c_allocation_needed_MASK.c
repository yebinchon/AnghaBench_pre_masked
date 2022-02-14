
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int dummy; } ;
typedef scalar_t__ b_blocknr_t ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct item_head*) ;

__attribute__((used)) static inline int FUNC_2(int VAR_1, b_blocknr_t VAR_2,
        struct item_head *VAR_3,
        __le32 * VAR_4, int VAR_5)
{
 if (VAR_2)
  return 0;
 if (VAR_1 == VAR_0 && FUNC_1(VAR_3) &&
     FUNC_0(VAR_4, VAR_5))
  return 0;
 return 1;
}
