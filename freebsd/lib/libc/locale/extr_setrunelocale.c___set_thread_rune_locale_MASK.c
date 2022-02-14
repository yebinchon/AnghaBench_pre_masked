
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * locale_t ;
struct TYPE_2__ {int * runes; } ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;

void
FUNC_1(locale_t VAR_3)
{

 if (VAR_3 == ((void*)0)) {
  VAR_2 = &VAR_1;
 } else if (VAR_3 == VAR_0) {
  VAR_2 = 0;
 } else {
  VAR_2 = FUNC_0(VAR_3)->runes;
 }
}
