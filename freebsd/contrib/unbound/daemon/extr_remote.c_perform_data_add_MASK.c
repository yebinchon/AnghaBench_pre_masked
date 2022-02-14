
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_zones {int dummy; } ;
typedef int RES ;


 int FUNC_0 (struct local_zones*,char*) ;
 int FUNC_1 (int *,char*,char*) ;

__attribute__((used)) static int
FUNC_2(RES* VAR_0, struct local_zones* VAR_1, char* VAR_2)
{
 if(!FUNC_0(VAR_1, VAR_2)) {
  FUNC_1(VAR_0,"error in syntax or out of memory, %s\n", VAR_2);
  return 0;
 }
 return 1;
}
