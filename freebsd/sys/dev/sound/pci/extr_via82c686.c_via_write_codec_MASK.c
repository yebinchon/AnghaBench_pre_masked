
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct via_info {int dummy; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct via_info*) ;
 int FUNC_2 (struct via_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(kobj_t VAR_2, void *VAR_3, int VAR_4, u_int32_t VAR_5)
{
 struct via_info *VAR_6 = VAR_3;

 if (FUNC_1(VAR_6)) return -1;

 FUNC_2(VAR_6, VAR_0, VAR_1 | FUNC_0(VAR_4) | VAR_5, 4);

 return 0;
}
