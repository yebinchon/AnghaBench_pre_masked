
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gdb_dbfeatures; int (* gdb_term ) () ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
 FUNC_0();
 VAR_2 = 0;

 if (VAR_1->gdb_dbfeatures & VAR_0)
  VAR_1->gdb_term();
}
