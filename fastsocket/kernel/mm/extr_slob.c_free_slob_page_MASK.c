
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mapping; } ;
struct slob_page {TYPE_1__ page; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(struct slob_page *VAR_0)
{
 FUNC_0(&VAR_0->page);
 VAR_0->page.mapping = ((void*)0);
}
