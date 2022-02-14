
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int machine; int sysname; int release; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(void)
{
 char *VAR_4;

 FUNC_1(&VAR_3);
 VAR_0 = VAR_3.release;
 VAR_1 = VAR_3.sysname;
 VAR_2 = VAR_3.machine;





 VAR_4 = FUNC_0(VAR_0, '-');
 if (VAR_4) {
  *VAR_4 = '\0';
 }




 return;
}
