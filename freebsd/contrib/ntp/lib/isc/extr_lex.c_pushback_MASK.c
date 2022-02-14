
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int line; TYPE_1__* pushback; int at_eof; } ;
typedef TYPE_2__ inputsource ;
struct TYPE_4__ {scalar_t__ current; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(inputsource *VAR_2, int VAR_3) {
 FUNC_0(VAR_2->pushback->current > 0);
 if (VAR_3 == VAR_0) {
  VAR_2->at_eof = VAR_1;
  return;
 }
 VAR_2->pushback->current--;
 if (VAR_3 == '\n')
  VAR_2->line--;
}
