
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_child {unsigned int mwoff; } ;
typedef int device_t ;


 int FUNC_0 (int ,unsigned int) ;
 struct ntb_child* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_0, unsigned VAR_1)
{
 struct ntb_child *VAR_2 = FUNC_1(VAR_0);

 return (FUNC_0(FUNC_2(VAR_0), VAR_1 + VAR_2->mwoff));
}
