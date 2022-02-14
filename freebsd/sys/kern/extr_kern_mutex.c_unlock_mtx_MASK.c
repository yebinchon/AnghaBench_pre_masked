
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct lock_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtx*,int) ;
 int FUNC_1 (struct mtx*) ;

uintptr_t
FUNC_2(struct lock_object *VAR_2)
{
 struct mtx *VAR_3;

 VAR_3 = (struct mtx *)VAR_2;
 FUNC_0(VAR_3, VAR_1 | VAR_0);
 FUNC_1(VAR_3);
 return (0);
}
