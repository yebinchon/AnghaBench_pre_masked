
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* ta_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_5 ;

void
FUNC_1(int VAR_6)
{
 if (VAR_3 == ((void*)0))
  return;

 if (VAR_6 != VAR_1 &&
     VAR_6 != VAR_2 &&
     VAR_6 != VAR_0)
  return;
 VAR_4.ta_context = (void *)(intptr_t)VAR_6;
 FUNC_0(VAR_5, &VAR_4);
}
