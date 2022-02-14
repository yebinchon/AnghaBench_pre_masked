
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sb_info {int dummy; } ;
struct sb_chinfo {int run; struct sb_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sb_info*) ;

__attribute__((used)) static int
FUNC_2(kobj_t VAR_1, void *VAR_2, int VAR_3)
{
 struct sb_chinfo *VAR_4 = VAR_2;
 struct sb_info *VAR_5 = VAR_4->parent;

 if (!FUNC_0(VAR_3))
  return 0;

 if (VAR_3 == VAR_0)
  VAR_4->run = 1;
 else
  VAR_4->run = 0;

 FUNC_1(VAR_5);

 return 0;
}
