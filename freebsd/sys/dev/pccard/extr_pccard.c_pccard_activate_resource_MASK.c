
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pccard_ivar {struct pccard_function* pf; } ;
struct pccard_function {int sc; } ;
typedef int device_t ;


 struct pccard_ivar* FUNC_0 (int ) ;

 int FUNC_1 (int ,int ,int,int,struct resource*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pccard_function*,int ,int ,int ) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3,
    struct resource *VAR_4)
{
 struct pccard_ivar *VAR_5 = FUNC_0(VAR_1);
 struct pccard_function *VAR_6 = VAR_5->pf;

 switch(VAR_2) {
 case 128:




  if (FUNC_2(VAR_6->sc))
   FUNC_3(VAR_6, FUNC_5(VAR_4), 0,
       FUNC_4(VAR_4));
  break;
 default:
  break;
 }
 return (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4));
}
