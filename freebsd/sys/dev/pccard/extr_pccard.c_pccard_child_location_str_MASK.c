
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pccard_ivar {struct pccard_function* pf; } ;
struct pccard_function {int number; } ;
typedef int device_t ;


 struct pccard_ivar* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct pccard_ivar *VAR_4 = FUNC_0(VAR_1);
 struct pccard_function *VAR_5 = VAR_4->pf;

 FUNC_1(VAR_2, VAR_3, "function=%d", VAR_5->number);
 return (0);
}
