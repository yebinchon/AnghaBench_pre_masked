
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct compact_control {scalar_t__ ignore_skip_hint; } ;


 int FUNC_0 (struct page*) ;

__attribute__((used)) static inline bool FUNC_1(struct compact_control *VAR_0,
     struct page *VAR_1)
{
 if (VAR_0->ignore_skip_hint)
  return 1;

 return !FUNC_0(VAR_1);
}
