
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ntb_child {int dboff; } ;
typedef int device_t ;


 void FUNC_0 (int ,int) ;
 struct ntb_child* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(device_t VAR_0, uint64_t VAR_1)
{
 struct ntb_child *VAR_2 = FUNC_1(VAR_0);

 return (FUNC_0(FUNC_2(VAR_0), VAR_1 << VAR_2->dboff));
}
