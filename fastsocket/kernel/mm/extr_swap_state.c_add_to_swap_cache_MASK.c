
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct page*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

int FUNC_3(struct page *VAR_0, swp_entry_t VAR_1, gfp_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3) {
  VAR_3 = FUNC_0(VAR_0, VAR_1);
  FUNC_2();
 }
 return VAR_3;
}
