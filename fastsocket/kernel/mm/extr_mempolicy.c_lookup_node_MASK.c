
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct mm_struct*,unsigned long,int,int ,int ,struct page**,int *) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static int FUNC_3(struct mm_struct *VAR_2, unsigned long VAR_3)
{
 struct page *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3 & VAR_0, 1, 0, 0, &VAR_4, ((void*)0));
 if (VAR_5 >= 0) {
  VAR_5 = FUNC_1(VAR_4);
  FUNC_2(VAR_4);
 }
 return VAR_5;
}
