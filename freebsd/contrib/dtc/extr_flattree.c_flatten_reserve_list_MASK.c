
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct version_info {int dummy; } ;
struct fdt_reserve_entry {int member_1; int member_0; } ;
struct reserve_info {struct fdt_reserve_entry re; struct reserve_info* next; } ;
struct data {int dummy; } ;


 struct data FUNC_0 (struct data,struct fdt_reserve_entry*) ;
 struct data VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct data FUNC_1(struct reserve_info *VAR_2,
     struct version_info *VAR_3)
{
 struct reserve_info *VAR_4;
 struct data VAR_5 = VAR_0;
 static struct fdt_reserve_entry VAR_6 = {0,0};
 int VAR_7;

 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
  VAR_5 = FUNC_0(VAR_5, &VAR_4->re);
 }



 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5 = FUNC_0(VAR_5, &VAR_6);
 }

 return VAR_5;
}
