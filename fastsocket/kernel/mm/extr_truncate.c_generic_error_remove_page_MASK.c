
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct address_space {TYPE_1__* host; } ;
struct TYPE_2__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct address_space*,struct page*) ;

int FUNC_2(struct address_space *VAR_2, struct page *VAR_3)
{
 if (!VAR_2)
  return -VAR_0;




 if (!FUNC_0(VAR_2->host->i_mode))
  return -VAR_1;
 return FUNC_1(VAR_2, VAR_3);
}
