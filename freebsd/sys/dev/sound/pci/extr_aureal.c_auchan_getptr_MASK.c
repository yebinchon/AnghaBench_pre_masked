
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_info {int dummy; } ;
struct au_chinfo {scalar_t__ dir; struct au_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct au_info*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(kobj_t VAR_3, void *VAR_4)
{
 struct au_chinfo *VAR_5 = VAR_4;
 struct au_info *VAR_6 = VAR_5->parent;
 if (VAR_5->dir == VAR_2) {
  return FUNC_0(VAR_6, 0, VAR_1, 4) & (VAR_0-1);
 } else {
  return 0;
 }
}
