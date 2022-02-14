
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm {int dummy; } ;
struct vioapic {TYPE_1__* rtbl; int mtx; struct vm* vm; } ;
struct TYPE_2__ {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vioapic* FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *,char*,int *,int ) ;

struct vioapic *
FUNC_2(struct vm *VAR_5)
{
 int VAR_6;
 struct vioapic *VAR_7;

 VAR_7 = FUNC_0(sizeof(struct vioapic), VAR_1, VAR_2 | VAR_3);

 VAR_7->vm = VAR_5;
 FUNC_1(&VAR_7->mtx, "vioapic lock", ((void*)0), VAR_0);


 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  VAR_7->rtbl[VAR_6].reg = 0x0001000000010000UL;

 return (VAR_7);
}
