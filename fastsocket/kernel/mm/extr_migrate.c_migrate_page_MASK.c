
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef enum migrate_mode { ____Placeholder_migrate_mode } migrate_mode ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct address_space*,struct page*,struct page*,int) ;

int FUNC_1(struct address_space *VAR_4,
  struct page *VAR_5, struct page *VAR_6)
{
 enum migrate_mode VAR_7 = VAR_0;






 if (VAR_3->flags & VAR_2)
  VAR_7 = VAR_1;

 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
}
