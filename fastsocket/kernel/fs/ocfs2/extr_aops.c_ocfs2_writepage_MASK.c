
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*,int ,struct writeback_control*) ;
 int FUNC_1 (char*,struct page*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct page *VAR_1, struct writeback_control *VAR_2)
{
 int VAR_3;

 FUNC_1("(0x%p)\n", VAR_1);

 VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2);

 FUNC_2(VAR_3);

 return VAR_3;
}
