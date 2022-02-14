
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slob_page {int list; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct slob_page *VAR_0)
{
 FUNC_1(&VAR_0->list);
 FUNC_0((struct page *)VAR_0);
}
