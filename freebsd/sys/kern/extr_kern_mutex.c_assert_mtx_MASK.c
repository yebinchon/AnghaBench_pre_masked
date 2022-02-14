
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct lock_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtx const*,int) ;

void
FUNC_1(const struct lock_object *VAR_2, int VAR_3)
{
 if (VAR_3 & VAR_0) {
  VAR_3 &= ~VAR_0;
  VAR_3 |= VAR_1;
 }
 FUNC_0((const struct mtx *)VAR_2, VAR_3);
}
