
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int lock; } ;
struct sc_chinfo {struct sc_info* parent; } ;
typedef int kobj_t ;





 int FUNC_0 (struct sc_chinfo*) ;
 int FUNC_1 (struct sc_chinfo*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
 struct sc_chinfo *VAR_3 = VAR_1;
 struct sc_info *VAR_4 = VAR_3->parent;

 FUNC_2(VAR_4->lock);
 switch(VAR_2) {
 case 129:
  FUNC_0(VAR_3);
  break;
 case 128:
 case 130:
  FUNC_1(VAR_3);
  break;
 }
 FUNC_3(VAR_4->lock);
 return 0;
}
