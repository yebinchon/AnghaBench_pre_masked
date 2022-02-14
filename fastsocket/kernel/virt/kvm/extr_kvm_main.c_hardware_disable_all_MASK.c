
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* this_device; } ;
struct TYPE_3__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,char**) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_4;
 char VAR_5[20];
 char VAR_6[] = "EVENT=terminate";
 char *VAR_7[] = { VAR_6, VAR_5, ((void*)0) };

 FUNC_2(&VAR_2);
 FUNC_0();
 VAR_4 = VAR_3;
 FUNC_3(&VAR_2);

 FUNC_4(VAR_5, "COUNT=%d", VAR_4);
 FUNC_1(&VAR_1.this_device->kobj, VAR_0, VAR_7);
}
