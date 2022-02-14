
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char buffer; } ;
typedef TYPE_2__ VICMD ;
struct TYPE_5__ {char buffer; } ;
struct TYPE_7__ {TYPE_1__ sdot; } ;
typedef int SCR ;
typedef char CHAR_T ;


 TYPE_4__* FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(SCR *VAR_0, VICMD *VAR_1)
{
 CHAR_T VAR_2;

 switch (VAR_1->buffer) {
 case '1':
  VAR_2 = '2';
  break;
 case '2':
  VAR_2 = '3';
  break;
 case '3':
  VAR_2 = '4';
  break;
 case '4':
  VAR_2 = '5';
  break;
 case '5':
  VAR_2 = '6';
  break;
 case '6':
  VAR_2 = '7';
  break;
 case '7':
  VAR_2 = '8';
  break;
 case '8':
  VAR_2 = '9';
  break;
 default:
  return;
 }
 FUNC_0(VAR_0)->sdot.buffer = VAR_1->buffer = VAR_2;
}
