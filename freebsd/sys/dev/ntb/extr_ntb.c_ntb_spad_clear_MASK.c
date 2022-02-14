
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_child {unsigned int spadcnt; scalar_t__ spadoff; } ;
typedef int device_t ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 struct ntb_child* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(device_t VAR_0)
{
 struct ntb_child *VAR_1 = FUNC_1(VAR_0);
 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->spadcnt; VAR_2++)
  FUNC_0(FUNC_2(VAR_0), VAR_2 + VAR_1->spadoff, 0);
}
