
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int backing_dev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct page*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct address_space*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct page *VAR_4, struct address_space *VAR_5)
{
 if (FUNC_2(VAR_5)) {
  FUNC_1(VAR_4, VAR_1);
  FUNC_0(VAR_5->backing_dev_info, VAR_0);
  FUNC_3(VAR_3);
  FUNC_4(VAR_2);
 }
}
