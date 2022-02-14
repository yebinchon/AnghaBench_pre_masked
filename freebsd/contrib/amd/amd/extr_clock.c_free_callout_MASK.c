
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* c_next; } ;
typedef TYPE_1__ callout ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(callout *VAR_3)
{
  if (VAR_2 > VAR_0) {
    FUNC_0(VAR_3);
  } else {
    VAR_3->c_next = VAR_1;
    VAR_1 = VAR_3;
    VAR_2++;
  }
}
