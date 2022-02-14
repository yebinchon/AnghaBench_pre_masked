
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pccard_ivar {struct pccard_function* pf; } ;
struct pccard_function {int dummy; } ;
typedef int device_t ;


 struct pccard_ivar* FUNC_0 (int ) ;
 int FUNC_1 (struct pccard_function*) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, device_t VAR_1)
{
 struct pccard_ivar *VAR_2 = FUNC_0(VAR_1);
 struct pccard_function *VAR_3 = VAR_2->pf;

 FUNC_1(VAR_3);
}
