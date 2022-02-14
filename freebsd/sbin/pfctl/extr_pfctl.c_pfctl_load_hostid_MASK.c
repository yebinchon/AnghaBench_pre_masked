
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct pfctl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (char*) ;

int
FUNC_2(struct pfctl *VAR_2, u_int32_t VAR_3)
{
 if (FUNC_0(VAR_1, VAR_0, &VAR_3)) {
  FUNC_1("DIOCSETHOSTID");
  return (1);
 }
 return (0);
}
