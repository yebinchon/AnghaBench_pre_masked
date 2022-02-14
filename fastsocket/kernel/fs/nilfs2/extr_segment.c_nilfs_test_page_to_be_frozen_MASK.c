
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {struct address_space* mapping; } ;
struct address_space {TYPE_1__* host; } ;
struct TYPE_2__ {int i_mode; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_0)
{
 struct address_space *VAR_1 = VAR_0->mapping;

 if (!VAR_1 || !VAR_1->host || FUNC_2(VAR_1->host->i_mode))
  return 0;

 if (FUNC_3(VAR_0)) {
  FUNC_0(VAR_0);
  return 1;
 }
 return FUNC_1(VAR_0);
}
