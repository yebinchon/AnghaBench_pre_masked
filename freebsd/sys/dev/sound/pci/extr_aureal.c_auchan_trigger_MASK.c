
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_info {int dummy; } ;
struct au_chinfo {scalar_t__ dir; struct au_info* parent; } ;
typedef int kobj_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct au_info*,int) ;
 int FUNC_2 (struct au_info*,int,int) ;
 int FUNC_3 (struct au_info*,int ,int,int ,int) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_2, void *VAR_3, int VAR_4)
{
 struct au_chinfo *VAR_5 = VAR_3;
 struct au_info *VAR_6 = VAR_5->parent;

 if (!FUNC_0(VAR_4))
  return 0;

 if (VAR_5->dir == VAR_0) {
  FUNC_2(VAR_6, 0x11, (VAR_4)? 1 : 0);
  if (VAR_4 != VAR_1) {
   FUNC_3(VAR_6, 0, 0xf800, 0, 4);
   FUNC_3(VAR_6, 0, 0xf804, 0, 4);
   FUNC_1(VAR_6, 0x58);
   FUNC_1(VAR_6, 0x59);
  }
 } else {
 }
 return 0;
}
