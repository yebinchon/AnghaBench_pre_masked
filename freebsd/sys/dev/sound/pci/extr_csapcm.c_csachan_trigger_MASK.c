
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csa_info {int dummy; } ;
struct csa_chinfo {scalar_t__ dir; struct csa_info* parent; } ;
typedef int kobj_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct csa_info*,int) ;
 int FUNC_2 (struct csa_chinfo*) ;
 int FUNC_3 (struct csa_info*) ;
 int FUNC_4 (struct csa_info*) ;
 int FUNC_5 (struct csa_info*) ;
 int FUNC_6 (struct csa_info*) ;

__attribute__((used)) static int
FUNC_7(kobj_t VAR_2, void *VAR_3, int VAR_4)
{
 struct csa_chinfo *VAR_5 = VAR_3;
 struct csa_info *VAR_6 = VAR_5->parent;

 if (!FUNC_0(VAR_4))
  return 0;

 if (VAR_4 == VAR_1) {
  FUNC_1(VAR_6, 1);
  FUNC_2(VAR_5);
  if (VAR_5->dir == VAR_0)
   FUNC_4(VAR_6);
  else
   FUNC_3(VAR_6);
 } else {
  if (VAR_5->dir == VAR_0)
   FUNC_6(VAR_6);
  else
   FUNC_5(VAR_6);
  FUNC_1(VAR_6, -1);
 }
 return 0;
}
