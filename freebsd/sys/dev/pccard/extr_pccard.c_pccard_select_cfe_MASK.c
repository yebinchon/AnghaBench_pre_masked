
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pccard_ivar {struct pccard_function* pf; } ;
struct pccard_function {scalar_t__ cfe; } ;
typedef int device_t ;


 int VAR_0 ;
 struct pccard_ivar* FUNC_0 (int ) ;
 int FUNC_1 (struct pccard_function*,int) ;

int
FUNC_2(device_t VAR_1, int VAR_2)
{
 struct pccard_ivar *VAR_3 = FUNC_0(VAR_1);
 struct pccard_function *VAR_4 = VAR_3->pf;

 FUNC_1(VAR_4, VAR_2);
 return (VAR_4->cfe ? 0 : VAR_0);
}
