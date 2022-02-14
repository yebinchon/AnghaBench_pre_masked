
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ control_persist; int * control_path; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(void)
{
 if (VAR_2.control_path != ((void*)0) && VAR_0 != -1)
  FUNC_1(VAR_2.control_path);




 if (VAR_2.control_persist || VAR_1) {
  VAR_3 = 1;
  FUNC_0("[stopped mux]");
 }
}
