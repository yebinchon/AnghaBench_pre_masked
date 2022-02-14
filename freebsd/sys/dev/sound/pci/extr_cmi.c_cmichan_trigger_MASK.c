
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int lock; } ;
struct sc_chinfo {scalar_t__ dir; struct sc_info* parent; } ;
typedef int kobj_t ;


 scalar_t__ VAR_0 ;

 int FUNC_0 (int) ;


 int FUNC_1 (struct sc_info*,struct sc_chinfo*) ;
 int FUNC_2 (struct sc_info*,struct sc_chinfo*) ;
 int FUNC_3 (struct sc_info*,struct sc_chinfo*) ;
 int FUNC_4 (struct sc_info*,struct sc_chinfo*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(kobj_t VAR_1, void *VAR_2, int VAR_3)
{
 struct sc_chinfo *VAR_4 = VAR_2;
 struct sc_info *VAR_5 = VAR_4->parent;

 if (!FUNC_0(VAR_3))
  return 0;

 FUNC_5(VAR_5->lock);
 if (VAR_4->dir == VAR_0) {
  switch(VAR_3) {
  case 129:
   FUNC_1(VAR_5, VAR_4);
   break;
  case 128:
  case 130:
   FUNC_2(VAR_5, VAR_4);
   break;
  }
 } else {
  switch(VAR_3) {
  case 129:
   FUNC_3(VAR_5, VAR_4);
   break;
  case 128:
  case 130:
   FUNC_4(VAR_5, VAR_4);
   break;
  }
 }
 FUNC_6(VAR_5->lock);
 return 0;
}
