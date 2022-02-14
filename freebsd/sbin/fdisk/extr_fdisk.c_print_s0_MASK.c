
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parts; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_2;

 FUNC_0();
 FUNC_2("Information from DOS bootblock is:\n");
 for (VAR_2 = 1; VAR_2 <= VAR_0; VAR_2++) {
  FUNC_2("%d: ", VAR_2);
  FUNC_1(&VAR_1.parts[VAR_2 - 1]);
 }
}
