
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_chip {scalar_t__ disable; scalar_t__ shutdown; scalar_t__ end; scalar_t__ typename; scalar_t__ name; scalar_t__ startup; scalar_t__ enable; } ;
struct TYPE_2__ {scalar_t__ end; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;

void FUNC_0(struct irq_chip *VAR_5)
{
 if (!VAR_5->enable)
  VAR_5->enable = VAR_1;
 if (!VAR_5->disable)
  VAR_5->disable = VAR_0;
 if (!VAR_5->startup)
  VAR_5->startup = VAR_3;






 if (!VAR_5->shutdown)
  VAR_5->shutdown = VAR_5->disable != VAR_0 ?
   VAR_5->disable : VAR_2;
 if (!VAR_5->name)
  VAR_5->name = VAR_5->typename;
 if (!VAR_5->end)
  VAR_5->end = VAR_4.end;
}
