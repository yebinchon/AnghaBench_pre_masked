
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct address_space*,struct page*) ;
 int FUNC_2 (struct address_space*,int,int ,int ) ;

int FUNC_3(struct address_space *VAR_2, struct page *VAR_3)
{
 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_2,
       (loff_t)VAR_3->index << VAR_0,
       VAR_1, 0);
 }
 return FUNC_1(VAR_2, VAR_3);
}
