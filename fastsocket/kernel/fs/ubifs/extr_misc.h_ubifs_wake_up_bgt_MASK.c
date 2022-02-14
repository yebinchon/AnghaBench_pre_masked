
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int need_bgt; scalar_t__ bgt; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct ubifs_info *VAR_0)
{
 if (VAR_0->bgt && !VAR_0->need_bgt) {
  VAR_0->need_bgt = 1;
  FUNC_0(VAR_0->bgt);
 }
}
