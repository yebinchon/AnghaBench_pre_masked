
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {struct auth_zones* auth_zones; } ;
struct worker {TYPE_1__ env; } ;
struct auth_zones {int dummy; } ;
typedef int RES ;


 int VAR_0 ;
 int FUNC_0 (struct auth_zones*,TYPE_1__*,int *,size_t,int ) ;
 int FUNC_1 (int *,char*,int **,size_t*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;

__attribute__((used)) static void
FUNC_4(RES* VAR_1, struct worker* VAR_2, char* VAR_3)
{
 size_t VAR_4;
 int VAR_5;
 uint8_t* VAR_6 = ((void*)0);
 struct auth_zones* VAR_7 = VAR_2->env.auth_zones;
 if(!FUNC_1(VAR_1, VAR_3, &VAR_6, &VAR_4, &VAR_5))
  return;
 if(!VAR_7 || !FUNC_0(VAR_7, &VAR_2->env, VAR_6, VAR_4,
  VAR_0)) {
  (void)FUNC_3(VAR_1, "error zone xfr task not found %s\n", VAR_3);
  return;
 }
 FUNC_2(VAR_1);
}
