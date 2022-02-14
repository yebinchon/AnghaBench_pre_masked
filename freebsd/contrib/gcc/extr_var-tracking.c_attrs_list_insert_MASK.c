
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
typedef int rtx ;
typedef TYPE_1__* attrs ;
struct TYPE_4__ {struct TYPE_4__* next; int offset; int decl; int loc; } ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1 (attrs *VAR_1, tree VAR_2, HOST_WIDE_INT VAR_3, rtx VAR_4)
{
  attrs VAR_5;

  VAR_5 = FUNC_0 (VAR_0);
  VAR_5->loc = VAR_4;
  VAR_5->decl = VAR_2;
  VAR_5->offset = VAR_3;
  VAR_5->next = *VAR_1;
  *VAR_1 = VAR_5;
}
