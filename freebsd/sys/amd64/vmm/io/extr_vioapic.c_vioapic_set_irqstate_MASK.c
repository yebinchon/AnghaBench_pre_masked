
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int dummy; } ;
struct vioapic {int dummy; } ;
typedef enum irqstate { ____Placeholder_irqstate } irqstate ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct vioapic*) ;
 int FUNC_1 (struct vioapic*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct vioapic*,int,int) ;
 struct vioapic* FUNC_4 (struct vm*) ;

__attribute__((used)) static int
FUNC_5(struct vm *VAR_2, int VAR_3, enum irqstate VAR_4)
{
 struct vioapic *VAR_5;

 if (VAR_3 < 0 || VAR_3 >= VAR_1)
  return (VAR_0);

 VAR_5 = FUNC_4(VAR_2);

 FUNC_0(VAR_5);
 switch (VAR_4) {
 case 130:
  FUNC_3(VAR_5, VAR_3, 1);
  break;
 case 129:
  FUNC_3(VAR_5, VAR_3, 0);
  break;
 case 128:
  FUNC_3(VAR_5, VAR_3, 1);
  FUNC_3(VAR_5, VAR_3, 0);
  break;
 default:
  FUNC_2("vioapic_set_irqstate: invalid irqstate %d", VAR_4);
 }
 FUNC_1(VAR_5);

 return (0);
}
