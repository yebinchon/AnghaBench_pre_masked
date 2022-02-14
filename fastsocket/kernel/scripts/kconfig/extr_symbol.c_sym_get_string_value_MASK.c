
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tristate ;
struct TYPE_2__ {scalar_t__ val; } ;
struct symbol {int type; TYPE_1__ curr; } ;






 int FUNC_0 (struct symbol*) ;


const char *FUNC_1(struct symbol *VAR_0)
{
 tristate VAR_1;

 switch (VAR_0->type) {
 case 132:
 case 131:
  VAR_1 = FUNC_0(VAR_0);
  switch (VAR_1) {
  case 129:
   return "n";
  case 130:
   return "m";
  case 128:
   return "y";
  }
  break;
 default:
  ;
 }
 return (const char *)VAR_0->curr.val;
}
