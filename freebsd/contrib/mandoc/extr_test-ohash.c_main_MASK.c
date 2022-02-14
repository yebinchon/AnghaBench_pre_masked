
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohash_info {int free; int calloc; int alloc; } ;
struct ohash {int dummy; } ;


 int FUNC_0 (struct ohash*) ;
 int FUNC_1 (struct ohash*,int,struct ohash_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_2(void)
{
 struct ohash VAR_3;
 struct ohash_info VAR_4;
 VAR_4.alloc = VAR_2;
 VAR_4.calloc = VAR_0;
 VAR_4.free = VAR_1;
 FUNC_1(&VAR_3, 2, &VAR_4);
 FUNC_0(&VAR_3);
 return 0;
}
