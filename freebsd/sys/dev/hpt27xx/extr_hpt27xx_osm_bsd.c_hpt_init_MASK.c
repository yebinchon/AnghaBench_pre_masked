
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ich_arg; int ich_func; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(void *VAR_5)
{
 if (VAR_0)
  FUNC_2("%s %s", VAR_1, VAR_2);

 FUNC_3();
 FUNC_1();

 VAR_4.ich_func = VAR_3;
 VAR_4.ich_arg = ((void*)0);
 if (FUNC_0(&VAR_4) != 0) {
  FUNC_4("%s: cannot establish configuration hook\n",
      VAR_1);
 }

}
