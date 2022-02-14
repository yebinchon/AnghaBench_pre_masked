
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ad1816_info {int dummy; } ;
struct ad1816_chinfo {scalar_t__ dir; struct ad1816_info* parent; } ;
typedef int kobj_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct ad1816_info*) ;
 int FUNC_2 (struct ad1816_info*) ;
 int FUNC_3 (struct ad1816_info*,int,int ) ;

__attribute__((used)) static u_int32_t
FUNC_4(kobj_t VAR_1, void *VAR_2, u_int32_t VAR_3)
{
 struct ad1816_chinfo *VAR_4 = VAR_2;
     struct ad1816_info *VAR_5 = VAR_4->parent;

     FUNC_0(VAR_3, 4000, 55200);
 FUNC_1(VAR_5);
     FUNC_3(VAR_5, (VAR_4->dir == VAR_0)? 2 : 3, VAR_3);
 FUNC_2(VAR_5);
     return VAR_3;
}
