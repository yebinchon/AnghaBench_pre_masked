
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int cfg; struct auth_zones* auth_zones; } ;
struct worker {TYPE_1__ env; } ;
struct auth_zones {int lock; } ;
struct auth_zone {int lock; } ;
typedef int RES ;


 int VAR_0 ;
 struct auth_zone* FUNC_0 (struct auth_zones*,int *,size_t,int ) ;
 int FUNC_1 (struct auth_zone*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int **,size_t*,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,char*) ;

__attribute__((used)) static void
FUNC_9(RES* VAR_1, struct worker* VAR_2, char* VAR_3)
{
 size_t VAR_4;
 int VAR_5;
 uint8_t* VAR_6 = ((void*)0);
 struct auth_zones* VAR_7 = VAR_2->env.auth_zones;
 struct auth_zone* VAR_8 = ((void*)0);
 if(!FUNC_6(VAR_1, VAR_3, &VAR_6, &VAR_4, &VAR_5))
  return;
 if(VAR_7) {
  FUNC_3(&VAR_7->lock);
  VAR_8 = FUNC_0(VAR_7, VAR_6, VAR_4, VAR_0);
  if(VAR_8) {
   FUNC_5(&VAR_8->lock);
  }
  FUNC_4(&VAR_7->lock);
 }
 FUNC_2(VAR_6);
 if(!VAR_8) {
  (void)FUNC_8(VAR_1, "error no auth-zone %s\n", VAR_3);
  return;
 }
 if(!FUNC_1(VAR_8, VAR_2->env.cfg)) {
  FUNC_4(&VAR_8->lock);
  (void)FUNC_8(VAR_1, "error failed to read %s\n", VAR_3);
  return;
 }
 FUNC_4(&VAR_8->lock);
 FUNC_7(VAR_1);
}
