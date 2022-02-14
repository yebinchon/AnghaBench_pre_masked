
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct address_space*,unsigned int,unsigned int,int ,struct page**,int *,int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct page*) ;

__attribute__((used)) static int FUNC_2(struct page *VAR_2,
            struct address_space *VAR_3,
            unsigned VAR_4, unsigned VAR_5)
{
 loff_t VAR_6 = FUNC_1(VAR_2) + VAR_4;
 return FUNC_0(((void*)0), VAR_3, VAR_6, VAR_5 - VAR_4,
     VAR_0, &VAR_2,
     ((void*)0), VAR_1);
}
