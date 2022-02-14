
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tr_chinfo {int ctrl; } ;
typedef int kobj_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(kobj_t VAR_0, void *VAR_1, u_int32_t VAR_2)
{
 struct tr_chinfo *VAR_3 = VAR_1;

 VAR_3->ctrl = FUNC_0(VAR_2) | 0x01;

 return 0;
}
