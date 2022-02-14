
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef unsigned int loff_t ;


 int FUNC_0 (int *,struct address_space*,unsigned int,unsigned int,int ,struct page**,int *,int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (struct page*) ;

__attribute__((used)) static int FUNC_2(struct page *VAR_1,
          struct address_space *VAR_2,
          unsigned VAR_3, unsigned VAR_4)
{
 loff_t VAR_5 = FUNC_1(VAR_1) + VAR_3;
 return FUNC_0(((void*)0), VAR_2, VAR_5, VAR_4 - VAR_3, 0, &VAR_1,
     ((void*)0), VAR_0);
}
