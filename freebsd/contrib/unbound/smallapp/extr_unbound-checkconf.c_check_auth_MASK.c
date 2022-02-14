
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {int dummy; } ;
struct auth_zones {int dummy; } ;


 int FUNC_0 (struct auth_zones*,struct config_file*,int ) ;
 struct auth_zones* FUNC_1 () ;
 int FUNC_2 (struct auth_zones*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct config_file* VAR_0)
{
 struct auth_zones* VAR_1 = FUNC_1();
 if(!VAR_1 || !FUNC_0(VAR_1, VAR_0, 0)) {
  FUNC_3("Could not setup authority zones");
 }
 FUNC_2(VAR_1);
}
