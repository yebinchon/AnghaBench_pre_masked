
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef scalar_t__ time_t ;
typedef int opaque_t ;
typedef int callout_fun ;
struct TYPE_4__ {scalar_t__ c_time; int c_id; struct TYPE_4__* c_next; int * c_fn; int c_arg; } ;
typedef TYPE_1__ callout ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;

int
FUNC_3(u_int VAR_2, callout_fun *VAR_3, opaque_t VAR_4)
{
  callout *VAR_5, *VAR_6;
  time_t VAR_7 = FUNC_2(((void*)0)) + VAR_2;




  callout *VAR_8 = FUNC_1();
  VAR_8->c_arg = VAR_4;
  VAR_8->c_fn = VAR_3;
  VAR_8->c_time = VAR_7;
  VAR_8->c_id = FUNC_0();

  if (VAR_7 < VAR_1)
    VAR_1 = VAR_7;




  for (VAR_5 = &VAR_0; (VAR_6 = VAR_5->c_next); VAR_5 = VAR_6)
    if (VAR_6->c_time >= VAR_7)
      break;




  VAR_5->c_next = VAR_8;
  VAR_8->c_next = VAR_6;




  return VAR_8->c_id;
}
