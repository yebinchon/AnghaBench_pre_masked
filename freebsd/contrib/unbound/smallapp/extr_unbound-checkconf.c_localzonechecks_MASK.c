
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_zones {int dummy; } ;
struct config_file {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct local_zones*,struct config_file*) ;
 struct local_zones* FUNC_2 () ;
 int FUNC_3 (struct local_zones*) ;

__attribute__((used)) static void
FUNC_4(struct config_file* VAR_0)
{
 struct local_zones* VAR_1;
 if(!(VAR_1 = FUNC_2()))
  FUNC_0("out of memory");
 if(!FUNC_1(VAR_1, VAR_0))
  FUNC_0("failed local-zone, local-data configuration");
 FUNC_3(VAR_1);
}
