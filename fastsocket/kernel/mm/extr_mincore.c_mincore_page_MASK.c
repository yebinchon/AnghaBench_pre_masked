
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 unsigned char FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct address_space*,int ) ;
 int FUNC_2 (struct page*) ;
 TYPE_1__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 struct address_space VAR_0 ;

__attribute__((used)) static unsigned char FUNC_5(struct address_space *VAR_1, pgoff_t VAR_2)
{
 unsigned char VAR_3 = 0;
 struct page *VAR_4;







 VAR_4 = FUNC_1(VAR_1, VAR_2);







 if (VAR_4) {
  VAR_3 = FUNC_0(VAR_4);
  FUNC_2(VAR_4);
 }

 return VAR_3;
}
